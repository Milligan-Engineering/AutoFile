//File Name: AutoFileMain.cpp
//Author: Timothy Thacker
//Email Addresss: tnthacker@my.milligan.edu
//Assignment Number: Term Project
//Description: AutoFile is designed to automatically sort through files saved into the "Documents" folder of a computer - the sorting 
//             done on a TAGS based system.
//Last Changed: May 4, 2019





#include "stdafx.h"
#include "FilesClass.h"
#include "TagsClass.h"
#include "DirectoryClass.h"




int main()
{

	TagsClass TagsClass;
	DirectoryClass DirectoryClass;
	FilesClass FilesClass;

	string sortingArray[MAX_TAGS];
	sortingArray[0] = "There are no tags stored";


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

			string temp;
			getline(cin, temp);
			TagsClass.setTempChoice(temp);
		
			

			try
			{
				choice = stoi(TagsClass.getTempChoice());
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
			

		}


		switch (choice)
		{
			case 1:
			{
				int tagTotalNumber = TagsClass.findTagNumber(sortingArray); //read file counter
				TagsClass.listPrint (sortingArray, tagTotalNumber);
				choice = -1;
				break;
			}
			

			case 2:
			{
				TagsClass.case2(sortingArray, MAX_TAGS, MIN_TAGS, TagsClass.getTagInputNumber());
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
				DirectoryClass.pathCollection();
				DirectoryClass.wstringtostring();
				
				FilesClass.fileCompare(sortingArray, DirectoryClass.getDirStubs());
				FilesClass.autoFile(DirectoryClass.getDirStubs(), DirectoryClass.getDirNumber());
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


