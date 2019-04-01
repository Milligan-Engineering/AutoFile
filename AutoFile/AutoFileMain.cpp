//File Name: AutoFileMain.cpp
//Author: Timothy Thacker
//Email Addresss: tnthacker@my.milligan.edu
//Assignment Number: Term Project
//Description: Eventually, this program will take an input "tag" and find files corresponding to said tag, and then automatically file those for the user.
//Last Changed: March 21, 2019

/*
Preface to Autofile:
It its current state, Autofile is limited to MAX_TAGS number of tags - Indexing the sorting array to 0-10. 

I intend to, near the end of the semester, change this so that the array size is determined by the number of lines in the text file
	or something of the sort. Considering this, understand that MAX_TAGS is simply a stub.
*/



#include "stdafx.h"
#include "dateClass.cpp"
#include "dateClass.h"



bool invalidEval(string a);
//Precondition: User inputs a string - tempTag
//Postcondition: Function outputs a boolean value determinining whether or not an invalid character is in the input string

void listPrint(string sortingArray1[], int arrayCounter1);
//Precondition: Points to the array which contains tags, and inputs the number of elements within the array
//Postcondition: Uses a for loop to print out no more and no less than the tags stored in the array

void fileOutput(string inputTag);
//Precondition: A string, inputTag, will be put into this function which will then write it to a text file.
//Postcondition: There will be a text file populated with the input strings.

int findTagNumber(string arrayUpdate[]);
//Precondition: When this is called, it will read the text file "tagsText.txt".
//Postcondition: This function will output an integer value equivalent to the number of tags stored in the text file.

void case2(string sortingArray[], const int MAX_TAGS, const int MIN_TAGS, int tagInputNumber);
//Note: I reduced all of "case 2" - the case in which you enter new tags - into a void function.
//Precondition: You must have an array to store tags in, a const int value to represent the maximum
	//number of tags you would like to input, a const int value for the minimum number of tags
	//and the user must input a value for "tag input number" that is greater than MIN_TAGS and
	//less than or equal to MAX_TAGS. The user must then input tags corresponding to the 
	//tagInputNumber. These tags may not have any characters not allowed in a file name by 
	//the Windows OS.
//Postcondition: Each of the stored tags will be written, line by line, to a text file tagsText.txt
	//for storage and manipulation. The array will be populated with the tags from this text
	//file upon running the program again.





int main()
{
	string tempChoice;
	const int MAX_TAGS = 11;
	const int MIN_TAGS = 1;
	string sortingArray[100];
	sortingArray[0] = "There are no tags stored";
	int nextTag = 3;
	int arrayCounter1 = 1;
	int tagInputNumber = 2;
	int tagTotalNumber = 0;

	//-------------------------
	dateClass theDates;
	theDates.inputDates;
	//-------------------------

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
				<< "Enter 4 to close the program. \n \n"
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
				if (choice != 1 && choice != 2 && choice != 3 && choice != 4)
				{
					cout << "Please enter 1, 2, 3, or 4." << endl << endl;
					choice = -1;
				}
			}
			catch(exception e)
			{
				cout << "Please enter 1, 2, 3, or 4." << endl << endl;
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
				cout << "This function has not yet been implemented.";
				cout << "\n" << endl;
				choice = -1;
				break;
			}

			case 4:
			{
				break;
			}

		} 

		
	} while (choice != 4);






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



void listPrint(string sortingArray1[], int tagTotalNumber)
{
	for (int arrayCounter1 = 0; arrayCounter1 <= tagTotalNumber; arrayCounter1++)
	{
		cout << sortingArray1[arrayCounter1];
		cout << "\n";
	}
}

void fileOutput(string inputTag) 
{
	ofstream tagsFile;
	tagsFile.open("tagsText.txt", ios::app); //Append to the text file
	tagsFile << endl;
	tagsFile << inputTag;
	tagsFile.close();
}

int findTagNumber(string arrayUpdate[])
{
	int a = 1;
	int b = 0;
	string line;
	ifstream tagsFile;
	tagsFile.open("tagsText.txt");
	if (tagsFile.is_open())
	{
		while (getline(tagsFile, line))
		{
			arrayUpdate[b] = line;
			a++;
			b++;
		}
	}
	
	return (a);
}


void case2(string sortingArray[], const int MAX_TAGS, const int MIN_TAGS, int tagInputNumber)
{
	cout << "How many tags would you like to input? ";
	string tempTagInputNumber;
	getline(cin, tempTagInputNumber);

	try
	{
		tagInputNumber = stoi(tempTagInputNumber);
		if (tagInputNumber < MIN_TAGS || tagInputNumber > MAX_TAGS - 1)
		{
			cout << "Please enter an integer from " << MIN_TAGS << " to " << MAX_TAGS - 1 << ".\n" << endl;
			tagInputNumber = -1;
		}
	}
	catch (exception e)
	{
		tagInputNumber = -1;
	}

	/*if (tagInputNumber != 1 | tagInputNumber != 2 | tagInputNumber != 3 | tagInputNumber != 4 | tagInputNumber != 5 |
		tagInputNumber != 6 | tagInputNumber != 7 | tagInputNumber != 8 | tagInputNumber != 9 | tagInputNumber != 10)
	{
		cout << "Number of tags must be an integer from " << MIN_TAGS << " to " << MAX_TAGS - 1 << ".\n";
		cout << "Please enter a new number: ";
		getline(cin, tempTagInputNumber);
		tagInputNumber = stoi(tempTagInputNumber);
	}
	*/

	while (tagInputNumber > MAX_TAGS - 1 || tagInputNumber < MIN_TAGS)
	{
		cout << "Number of tags must be between " << MIN_TAGS << " and " << MAX_TAGS - 1 << ".\n";
		cout << "Please enter a new number: ";
		getline(cin, tempTagInputNumber);
		tagInputNumber = stoi(tempTagInputNumber);
	}

	for (int arrayCounter2 = 1; arrayCounter2 <= tagInputNumber; arrayCounter2++)
	{
		cout << "Enter Tag " << arrayCounter2 << " here: ";
		string tempTag;
		getline(cin, tempTag);

		bool b = invalidEval(tempTag);

		while (b == false)
		{
			cout << "The characters / \ * : ? < > | \"  and spaces are not valid inputs" << endl;
			cout << "Please input a new tag: ";
			getline(cin, tempTag);
			b = invalidEval(tempTag);
		}
		sortingArray[(arrayCounter2 - 1)] = tempTag;
		fileOutput(tempTag);
	}
}