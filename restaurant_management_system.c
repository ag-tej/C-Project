#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

void mainmenu(void);

void administration(void);
void customer(void);
void aboutus(void);

void addrecord(void);
void searchrecord(void);
void deleterecord(void);
void viewrecord(void);
void vegetarian(void);
void nonvegetarian(void);
void details(void);

int main()
{
	system("cls");
	mainmenu();
	return 0;
}

void mainmenu(void)
{
	printf("\n");
	printf("**************************************************************************\n");
	printf("                            WELCOME TO FOOD HUB                           \n");
	printf("**************************************************************************\n");
	printf("                                 MAIN MENU                                \n");
	printf("\n\n");
	printf("\t\t1. ADMINISTRATION SECTION-->\n\n");
	printf("\t\t2. CUSTOMER SECTION-->\n\n");
	printf("\t\t3. ABOUT US-->\n\n");
	printf("\t\t4. EXIT-->\n\n");
	printf("\tEnter Your Choice:");

	int choice;
	scanf("%d", &choice);

	if (choice == 1)
	{
		administration();
	}

	else if (choice == 2)
	{
		customer();
	}

	else if (choice == 3)
	{
		aboutus();
	}

	else if (choice == 4)
	{
		system("cls");
		printf("\n\n\n");
		printf("*******************************THANK YOU**************************************\n");
		printf("**********Feeling HUNGRY ? Call or Walk-In FOOD HUB KITCHEN AND BAR***********\n\n");
		exit(0);
	}

	else
	{
		printf("Wrong Input !! Please Re-enter the Correct Option");
		system("cls");
		mainmenu();
	}
}

void administration(void)
{
	system("cls");
	printf("******************** WELCOME TO THE ADMIN SECTION ********************\n\n");
	printf("\t\t1. Add New Record\n\n");
	printf("\t\t2. Search Record\n\n");
	printf("\t\t3. Delete Record\n\n");
	printf("\t\t4. View Records\n\n");
	printf("\t\t5. View previous orders placed\n\n");
	printf("\t\t6. Back to Main Menu\n\n");
	printf("\tEnter Your Choice:");

	int n;
	scanf("%d", &n);

	if (n == 1)
	{
		addrecord();
	}

	else if (n == 2)
	{
		searchrecord();
	}

	else if (n == 3)
	{
		deleterecord();
	}

	else if (n == 4)
	{
		viewrecord();
	}

	else if (n == 5)
	{
		FILE *view;
		char viw;
		view = fopen("order.txt", "rt");
		while ((viw = fgetc(view)) != EOF)
		{
			printf("%c", viw);
		}
		fclose(view);
	}

	else if (n == 6)
	{
		system("cls");
		mainmenu();
	}

	else
	{
		printf("Wrong Input !! Please Re-enter the Correct Option");
		system("cls");
		administration();
	}
}

void customer(void)
{
	system("cls");
	printf("\n****************************** WELCOME ******************************\n\n");
	printf("\t\t\tYOU ARE--->\n\n");
	printf("\t\t1. Vegetarian\n\n");
	printf("\t\t2. Non-Vegetarian\n\n");
	printf("\t\t3. Back to Main Menu\n\n");
	printf("\t\tEnter Your Choice:");

	int k;
	scanf("%d", &k);

	if (k == 1)
	{
		system("cls");
		vegetarian();
	}

	else if (k == 2)
	{
		system("cls");
		nonvegetarian();
	}

	else if (k == 3)
	{
		system("cls");
		mainmenu();
	}

	else
	{
		printf("Wrong Input !! Please Re-enter the Correct Option");
		system("cls");
		customer();
	}
}

void aboutus(void)
{
	system("cls");
	printf("                                              Welcome to FOOD HUB                                             \n\n");
	printf("Since 1997, FOOD HUB has been serving delicious and freshly prepared food in a quaint and refined setting away\nfrom hustle and bustle of the city. Chef Gopal and his team are here to offer you a wide selection of Bistro classics\nwith a modern twist as well as high-end seasonal specialities. In the quiet of a restored historic Rana palace,\nBaber Mahal Revisited, you will have a relaxing and revitalising time while enjoying some of the best food in Kathmandu.\n\n");
	printf("\t\tOpen from Tuesday to Sunday for breakfast, brunch, lunch and dinner from 8 am to 9 pm.\n");
	printf("\t\tCatering & Take - away services available\n\n\n");

	printf("Press any key to go to main menu.");
	if (getch())
	{
		system("cls");
		mainmenu();
	}
}
