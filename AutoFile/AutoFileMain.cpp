//File Name: AutoFileMain.cpp
//Author: Timothy Thacker
//Email Addresss: tnthacker@my.milligan.edu
//Assignment Number: Term Project
//Description: Eventually, this program will take an input "tag" and find files corresponding to said tag, and then automatically file those for the user.
//Last Changed: February 8, 2019


//For now, I will be removing all code in regards to the file and solely work with arrays for better data control and manipulation
//Thus, this is essentially a rebuild from the ground up. No files.


#include <iostream>
#include <string>


using namespace std;


int main()
{

	int choice;
	const int MAX_TAGS = 10;
	string sortingArray[MAX_TAGS];

	do
	{
		cout << "Welcome to AutoFile! \n"
			<< "Enter 1 to view current tags. \n"
			<< "Enter 2 to enter new tags. \n"
			<< "Enter 3 to close the program. \n \n"
			<< "Submit your choice and press Return: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			

		case 2:


		}

	} while (choice != 3);











	//keep the window open until the user closes
	string closeString;
	cout << "\nEnter anything to close";
	cin >> closeString;




	return 0;


}