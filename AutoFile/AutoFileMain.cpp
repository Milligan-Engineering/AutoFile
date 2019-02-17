//File Name: AutoFileMain.cpp
//Author: Timothy Thacker
//Email Addresss: tnthacker@my.milligan.edu
//Assignment Number: Term Project
//Description: Eventually, this program will take an input "tag" and find files corresponding to said tag, and then automatically file those for the user.
//Last Changed: February 16, 2019



/* Current I have removed all code regarding use of fstream - the file i/o and such. Now, tags will be stored directly 
into an array and the data will be manipulated directly from that array instead of reading and writing from a text file.
Thus, I have completely rewritted the program from the ground up, using switch to create a menu and sortingArray to store the tags.




*/

#include <iostream>
#include <string>


using namespace std;


int main()
{

	int choice;
	const int MAX_TAGS = 11;
	const int MIN_TAGS = 1;
	string sortingArray[MAX_TAGS];
	int tagInputNumber;

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


			for (int arrayCounter1 = 1; arrayCounter1 <= tagInputNumber; arrayCounter1++) 
			{
				cout << "Tag " << arrayCounter1 << " is ";
				cout << sortingArray[(arrayCounter1-1)];
				cout << "\n";
			}
				
			break;
			
			

		case 2:


			cout << "How many tags would you like to input? ";
			cin >> tagInputNumber;
			while (tagInputNumber > 10 || tagInputNumber < 1)
			{
				cout << "Number of tags must be between " << MIN_TAGS << " and " << MAX_TAGS - 1 << ".\n";
				cout << "Please enter a new number: ";
				cin >> tagInputNumber;
			}



			for (int arrayCounter2 = 1; arrayCounter2 <= tagInputNumber; arrayCounter2++)
			{
				cout << "Enter Tag " << arrayCounter2 << " here: ";
				string tempTag;
				cin >> tempTag;
				sortingArray[(arrayCounter2 - 1)] = tempTag;
			}

			break;



		case 3:

			break;
			


		}

		
	} while (choice != 3);

	




	return 0;


}