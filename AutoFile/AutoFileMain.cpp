//File Name: AutoFileMain.cpp
//Author: Timothy Thacker
//Email Addresss: tnthacker@my.milligan.edu
//Assignment Number: Term Project
//Description: Eventually, this program will take an input "tag" and find files corresponding to said tag, and then automatically file those for the user.
//Last Changed: April 1, 2019

/*
Preface to Autofile:
It its current state, Autofile is limited to MAX_TAGS number of tags - Indexing the sorting array to 0-10. 
I have changed the array size to be 100, rather than MAX_TAGS until we implement dynamic arrays.
I intend to, near the end of the semester, change this so that the array size is determined by the number of lines in the text file
	or something of the sort. Considering this, understand that MAX_TAGS is simply a stub.
*/



#include "stdafx.h"



bool invalidEval(string a);
//Precondition: User inputs a string - tempTag
//Postcondition: Function outputs a boolean value determinining whether or not an invalid character is in the input string


void fileOutput(string inputTag);
//Precondition: A string, inputTag, will be put into this function which will then write it to a text file.
//Postcondition: There will be a text file populated with the input strings.










int main()
{
	TagsClass TagsClass;


	string tempChoice;
	const int MAX_TAGS = 11;
	const int MIN_TAGS = 1;
	string sortingArray[100];
	sortingArray[0] = "There are no tags stored";
	int nextTag = 3;
	int arrayCounter1 = 1;
	int tagInputNumber = 2;
	int tagTotalNumber = 0;

	string test1 = "1";
	string test2 = "2";
	string test3 = "3";

	int choice = -1;
	do
	{
		while (choice == -1)
		{
			cout << "Welcome to AutoFile! \n"
				<< "Enter 1 to view current tags. \n"
				<< "Enter 2 to enter new tags. \n"
				<< "Enter 3 to remove tags. \n"
				<< "Enter 4 to AutoFile. \n"
				<< "Enter 5 to close the program. \n \n"
				<< "Submit your choice and press Return: ";

			getline(cin, tempChoice);
		
			

			/*if (cin.fail())
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "You must enter 1, 2, or 3" << endl << endl;
			}
			*/
			try
			{
				choice = stoi(tempChoice);
				if (choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5)
				{
					cout << "Please enter 1, 2, 3, 4, or 5." << endl << endl;
					choice = -1;
				}
			}
			catch(exception e)
			{
				cout << "Please enter 1, 2, 3, 4, or 5." << endl << endl;
				choice = -1;
			}
			

			//This was a different mnethod I was testing for input validation, but the try/catch method works as is.
			/*while (tempChoice != test1 | tempChoice != test2 | tempChoice != test3)
			{
				cout << "You must enter either 1, 2, or 3." << endl;
				getline(cin, tempChoice);
			}
			
			choice = stoi(tempChoice);
			*/

			/*if (choice != 1 | choice != 2 | choice != 3)
			{
				cout << "You must enter either 1, 2, or 3." << endl;
				getline(cin, tempChoice);
				choice = stoi(tempChoice);
			}
			*/
		}


		switch (choice)
		{
			case 1:
			{
				int tagTotalNumber = findTagNumber(sortingArray); //read file counter
				listPrint (sortingArray, tagTotalNumber);
				choice = -1;
				break;
			}
			

			case 2:
			{
				case2(sortingArray, MAX_TAGS, MIN_TAGS, tagInputNumber);
				choice = -1;
				break;
			}


			case 3:
			{
				cout << "This function has not yet been implemented. It will use the FileClass.";
				cout << "\n" << endl;
				choice = -1;
				break;
			}

			case 4:
			{
				cout << "This function has not yet been implemented. It will use the DirectoryClass.";
				cout << "\n" << endl;
				choice = -1;
				break;
			}

			case 5:
			{
				break;
			}

		} 

		
	} while (choice != 5);






	return 0;


}

bool invalidEval(string a)
{
	bool b = true;
	string invalidInputs[] = { "/" , "\\", "*", ":", "?", "<", ">", "|", "\"", " "};
	int invalidInputsLength = (sizeof(invalidInputs)) / (sizeof(invalidInputs[0]));
	for (int i = 0; i < invalidInputsLength; i++)
	{
		if (a.find(invalidInputs[i]) != string::npos)
		{
			b = false;
			break;
		}
	}

	return (b);
}




void fileOutput(string inputTag) 
{
	ofstream tagsFile;
	tagsFile.open("tagsText.txt", ios::app); //Append to the text file
	tagsFile << endl;
	tagsFile << inputTag;
	tagsFile.close();
}




