//File Name: AutoFileMain.cpp
//Author: Timothy Thacker
//Email Addresss: tnthacker@my.milligan.edu
//Assignment Number: Term Project
//Description: Eventually, this program will take an input "tag" and find files corresponding to said tag, and then automatically file those for the user.
//Last Changed: February 22, 2019





#include <iostream>
#include <string>

using namespace std;

string tempTag;


bool invalidEval(bool a)
{
	a = true;
	string invalidInputs[] = { "/" , "\\", "*", ":", "?", "<", ">", "|", "\"" };
	if (tempTag == invalidInputs[0] || tempTag == invalidInputs[1] || tempTag == invalidInputs[2] ||
		tempTag == invalidInputs[3] || tempTag == invalidInputs[4] || tempTag == invalidInputs[5] ||
		tempTag == invalidInputs[6] || tempTag == invalidInputs[7] || tempTag == invalidInputs[8])
	{
		a = false;
	}
}






int main()
{

	int choice;
	const int MAX_TAGS = 11;
	const int MIN_TAGS = 1;
	string sortingArray[MAX_TAGS];
	int nextTag = 3;
	sortingArray[0] = "TIM";
	sortingArray[1] = "EENG221";
	int tagInputNumber = 2;

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
			{

				for (int arrayCounter1 = 1; arrayCounter1 <= tagInputNumber; arrayCounter1++)
				{
					cout << "Tag " << arrayCounter1 << " is ";
					cout << sortingArray[(arrayCounter1 - 1)];
					cout << "\n";
				}

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
					cin >> tempTag;


						
					
					

					bool case2Check = x;


					while (a == false)
					{
						cout << "The characters / \ * : ? < > | \" are not valid inputs" << endl;
						cout << "Please input a new tag: ";
						cin >> tempTag;
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

