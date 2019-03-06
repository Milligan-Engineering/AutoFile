//File Name: AutoFileMain.cpp
//Author: Timothy Thacker
//Email Addresss: tnthacker@my.milligan.edu
//Assignment Number: Term Project
//Description: Eventually, this program will take an input "tag" and find files corresponding to said tag, and then automatically file those for the user.
//Last Changed: March 6, 2019





#include <iostream>
#include <string>

using namespace std;


bool invalidEval(string a);
//Precondition: User inputs a string - tempTag
//Postcondition: Function outputs a boolean value determinining whether or not an invalid character is in the input string


void listPrint(string sortingArray1[], int arrayCounter1);
//Precondition: Points to the array which contains tags, and inputs the number of elements within the array
//Postcondition: Uses a for loop to print out no more and no less than the tags stored in the array







int main()
{

	int choice;
	const int MAX_TAGS = 11;
	const int MIN_TAGS = 1;
	string sortingArray[MAX_TAGS];
	int nextTag = 3;
	sortingArray[0] = "TIM";
	sortingArray[1] = "EENG221";
	int arrayCounter1 = 1;
	int tagInputNumber = 2;
	int tagTotalNumber = 0;

	do
	{
		cout << "Welcome to AutoFile! \n"
			<< "Enter 1 to view current tags. \n"
			<< "Enter 2 to enter new tags. \n"
			<< "Enter 3 to close the program. \n \n"
			<< "Submit your choice and press Return: ";
		cin >> choice;
		while (choice > 3)
		{
			cout << "You must enter either 1, 2, or 3." << endl;
			cin >> choice;
		}

		switch (choice)
		{
			case 1:
			{
				int tagTotalNumber = sortingArray->size() +1;
				listPrint (sortingArray, tagTotalNumber);
				
			break;
			}
			

			case 2:
			{

				cout << "How many tags would you like to input? ";
				cin >> tagInputNumber;
				while (tagInputNumber > MAX_TAGS - 1 || tagInputNumber < MIN_TAGS)
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

					bool b = invalidEval(tempTag);

					while (b == false)
					{
						cout << "The characters / \ * : ? < > | \" are not valid inputs" << endl;
						cout << "Please input a new tag: ";
						cin >> tempTag;
						b = invalidEval(tempTag);
					}
					sortingArray[(arrayCounter2 - 1)] = tempTag;
				}
				



				break;
			}


			case 3:
			{
				break;
			}

		} 

		
	} while (choice != 3);






	return 0;


}

bool invalidEval(string a)
{
	bool b = true;
	string invalidInputs[] = { "/" , "\\", "*", ":", "?", "<", ">", "|", "\"" };
	if (a.find(invalidInputs[0]) !=string::npos || a.find(invalidInputs[1]) != string::npos || a.find(invalidInputs[2]) != string::npos || 
		a.find(invalidInputs[3]) != string::npos || a.find(invalidInputs[4]) != string::npos || a.find(invalidInputs[5]) != string::npos ||
		a.find(invalidInputs[6]) != string::npos || a.find(invalidInputs[7]) != string::npos || a.find(invalidInputs[8]) != string::npos)
	{
		b = false;
	}

	return (b);
}



void listPrint(string sortingArray1[], int tagTotalNumber)
{
	for (int arrayCounter1 = 0; arrayCounter1 <= tagTotalNumber; arrayCounter1++)
	{
		cout << sortingArray1[arrayCounter1];
		cout << "\n";
	}
}