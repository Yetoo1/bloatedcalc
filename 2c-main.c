/*
Title: Bloated C Calculator
Author: Yetoo Happy
Contact: yetoohappy@gmail.com
Compile with: gcc 2c-main.c $(pkg-config --clags --libs gtk+-3.0)
*/
//FIX THE COMMENTS!
//#include <stdio.h>
#include <gtk/gtk.h>
#include <string.h>
#define ARRAY_SIZE 11
//appendint(int,int) first int is what the calc is going to use, second one is a code to determine which kind of symbol an input is
/*static void nms(GtkWidget *widget, gpointer window) //no more space
{
	GtkWidget *dialog;
	dialog = gtk_message_dialog_new(GTK_WINDOW(window), GTK_DIALOG_DESTROY_WITH_PARENT, GTK_MESSAGE_WARNING, GTK_BUTTONS_OK,"HOLY SHIT STOP! THERE'S NO MORE NUMBER SPACE!STOP!!!!");
	//gtk_window_set_title(GTK_WINDOW(dialog), "YOU BETTER READ THE FUCKING TEXT!");
	gtk_dialog_run(GTK_DIALOG(dialog));
	gtk_widget_destroy(dialog); 
}*/
static char immediate [ARRAY_SIZE]; //holds the immediate integers inputted before a sign is recieved INCREASE TO 999999 LATER, RIGHT NOW WE ASSUME, IT IS SIMPLY TO BIG TO DEBUG RIGHT NOW
//static char  
static int i = 0; //shitty global variable
static void appendint(int num)
{	
	int immediate2 = (sizeof(immediate) / sizeof(immediate[0])); //note that this doesn't work well in multidimensional arrays and the way this works is that the size of a single item is always going to be the same since the data type is the same?
	if (i >= immediate2 - 1) //doesn't necessarily works, it gets unstable when it gets to the end
	{	
		//nms()
		//g_signal_connect(G_OBJECT(nms), "clicked", G_CALLBACK(gtk	 
		g_print("Don't input any more!\n");	
	}	
	if (num != 69)
	{	
		g_print("Inputted %d\n", num); 
		immediate[i] = num;	
		g_print("Array value for iteration %d is %d\n", i, immediate[i]);
	}
	i++; //this is here because if it wasn't, when 69 hits and i resets to zero, i++ at the bottom would still increase by 1
	if (num == 69) //this needs to be here because we want a final, and we are going to get a final if there is a symbol, add a symbol	
	{
		i--;	
		for (int z = 0; z < immediate2; z++)
		{
			//printf("i iteration: %d\n", i);			
			//printf("z iteration: %d\n", z);			
			if (z != i) //don't need to minus i here because it's always chaning before here
			{	
				g_print("The array consists of: %d\n", immediate[z]);
				printf ("%c", immediate[ARRAY_SIZE] = '\0');
				//printf (strcpy(immediate, immediate));
				
				
			}
			else
			{
				break;
			}
			
			
		}	
		i = 0;
	}
}
/*I know how god awful this following shit is, but I don't know how to have one static void to call variables to since the way gtk calls functions is really weird to my understanding*/
static void print_0 (GtkWidget *widget, gpointer data)
{	
	appendint(0);
}
static void print_1 (GtkWidget *widget, gpointer data)
{	
	appendint(1);
}
static void print_2 (GtkWidget *widget, gpointer data)
{	
	appendint(2);
}
static void print_3 (GtkWidget *widget, gpointer data)
{	
	appendint(3);
}
static void print_4 (GtkWidget *widget, gpointer data)
{	
	appendint(4);
}
static void print_5 (GtkWidget *widget, gpointer data)
{	
	appendint(5);
}
static void print_6 (GtkWidget *widget, gpointer data)
{	
	appendint(6);
}
static void print_7 (GtkWidget *widget, gpointer data)
{	
	appendint(7);
}
static void print_8 (GtkWidget *widget, gpointer data)
{	
	appendint(8);
}
static void print_9 (GtkWidget *widget, gpointer data)
{	
	appendint(9);
}
static void print_plus (GtkWidget *widget, gpointer data)
{
	appendint(69);
}
//changing what goes into the window
static void activate (GtkApplication* app, 
		      gpointer        user_data)
{
	GtkWidget *window;
	GtkWidget *grid;	
	GtkWidget *button;
	
	
	
	//creates the window
	window = gtk_application_window_new (app);
	gtk_window_set_title (GTK_WINDOW (window), "Window");
	gtk_window_set_default_size (GTK_WINDOW (window), 160, 100);
	
	//construct the container that is going to pack our buttons
	grid = gtk_grid_new();

	//pack the container in the window
	gtk_container_add (GTK_CONTAINER (window), grid); 
	//CAN'T MAKE THEM GO ALL LOOK NICE IN A SORTED ORDER BECAUSE ALL USING THE SAME BUTTON VARIABLE

	//creates the display
	
	//creates the 0 button
	button = gtk_button_new_with_label ("0");
	g_signal_connect (button, "clicked", G_CALLBACK (print_0), NULL);

	//place the 0 button in the grid cell (0,0), and make it fill just 1 cell horizontally and vertically (ie no spanning)
	gtk_grid_attach (GTK_GRID (grid), button, 1, 4, 1, 1); //first 2 are left and right grid cells, last 2 are vertical and horizontal size

	//create the 1 button
	button = gtk_button_new_with_label ("1");
	g_signal_connect (button, "clicked", G_CALLBACK (print_1), NULL);

	//place the 1 button in the grid cell (1, 0), and make it fill just 1 cell horizontally and vertically (ie no spanning)
	gtk_grid_attach (GTK_GRID (grid), button, 0, 1, 1, 1);

	//create the 2 button
	button = gtk_button_new_with_label ("2");
	g_signal_connect (button, "clicked", G_CALLBACK (print_2), NULL);

	//place the 2 button in the grid cell (0, 3)
	gtk_grid_attach (GTK_GRID (grid), button, 1, 1, 1, 1);
	
	//comment
	button = gtk_button_new_with_label ("3");
	g_signal_connect (button, "clicked", G_CALLBACK (print_3), NULL);

	gtk_grid_attach (GTK_GRID (grid), button, 2, 1, 1, 1);
	
	//comment
	button = gtk_button_new_with_label ("4");
	g_signal_connect (button, "clicked", G_CALLBACK (print_4), NULL);

	gtk_grid_attach (GTK_GRID (grid), button, 0, 2, 1, 1);

	//comment
	button = gtk_button_new_with_label ("5");
	g_signal_connect (button, "clicked", G_CALLBACK (print_5), NULL);

	gtk_grid_attach (GTK_GRID (grid), button, 1, 2, 1, 1);

	//comment
	button = gtk_button_new_with_label ("6");
	g_signal_connect (button, "clicked", G_CALLBACK (print_6), NULL);

	gtk_grid_attach (GTK_GRID (grid), button, 2, 2, 1, 1);

	//comment
	button = gtk_button_new_with_label ("7");
	g_signal_connect (button, "clicked", G_CALLBACK (print_7), NULL);

	gtk_grid_attach (GTK_GRID (grid), button, 0, 3, 1, 1);

	//comment
	button = gtk_button_new_with_label ("8");
	g_signal_connect (button, "clicked", G_CALLBACK (print_8), NULL);

	gtk_grid_attach (GTK_GRID (grid), button, 1, 3, 1, 1);

	//comment
	button = gtk_button_new_with_label ("9");
	g_signal_connect (button, "clicked", G_CALLBACK (print_9), NULL);

	gtk_grid_attach (GTK_GRID (grid), button, 2, 3, 1, 1);

	//comment
	button = gtk_button_new_with_label ("+");
	g_signal_connect (button, "clicked", G_CALLBACK (print_plus), NULL);

	gtk_grid_attach (GTK_GRID (grid), button, 3, 1, 1, 1);	

	//create the calculate button
	button = gtk_button_new_with_label("Calculate");
	g_signal_connect_swapped (button, "clicked", G_CALLBACK (gtk_widget_destroy), window);

	//place the calculate button in the grid cell (0, 1), and make it span 2 columns.
	gtk_grid_attach (GTK_GRID (grid), button, 0, 5, 3, 1);
	
	//this shows everything
	gtk_widget_show_all (window);
}

//this runs the app, usually unchanged for now
int main(int argc, 
	 char **argv)
{
	GtkApplication *app;
	int status;

	app = gtk_application_new ("org.gtk.example", G_APPLICATION_FLAGS_NONE);
	g_signal_connect (app, "activate", G_CALLBACK (activate), NULL);
	status = g_application_run (G_APPLICATION (app), argc, argv);
	g_object_unref (app);	
	return status;
}


