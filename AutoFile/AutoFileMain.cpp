//File Name: AutoFileMain.cpp
//Author: Timothy Thacker
//Email Addresss: tnthacker@my.milligan.edu
//Assignment Number: Term Project
//Description: Eventually, this program will take an input "tag" and find files corresponding to said tag, and then automatically file those for the user.
//Last Changed: February 8, 2019

/*PM04 Checklist
+ If Statement
+ Multi If or While
+ Indentation - see comment for line 75
+ Header
+ Comments - A litle too much detail. Some of the actions are obvious
+ Named Constant
+ Arrary
*/
#include <iostream>
#include <fstream>
#include <string>


using namespace std;


int main()
{ 

	string tagOutput;
	string tag1;
	string tag2;
	string tag3;
	string tagOutInt;

	int tagsCounter = 0;
	int arrayCounter = 0;
	const int MAX_TAGS = 10;
	string sortingArray[MAX_TAGS];
	const int MAX_TAGS_CALC = 3;


	// Store initial Tags in array for now rather in file

	fstream tagsFile;
	tagsFile.open("AutoFileTags.txt", fstream::app);

	cout << "Please input your first tag: ";
	getline(cin, tag1); //Here is the text output, followed by the Tag string input.
	cout << "\n";
	cout << "Please input your second tag: ";
	getline(cin, tag2);
	cout << "\n";
	cout << "Please input your third tag: ";
	getline(cin, tag3);



	tagsFile << tag1 << "\n" << tag2 << "\n" << tag3 << "\n";
	
	
	
	tagsFile.close(); //The text file has been closed.
	

	tagsFile.open("AutoFileTags.txt"); //The text file has been opened.
	if (tagsFile.is_open())
	{
		while (getline(tagsFile, tagOutput)) //Read the text file, storing the information in the file as string tagOutput
		{
			sortingArray[arrayCounter] = tagOutput; //Here is the text output with the information read from the file.
			tagsCounter++; //This is a basic counter to tell how many tags are stored
			arrayCounter++;
			
		}
		tagsFile.close();
	}
	else
	{ // Brackets not needed but help with understanding flow
		cout << "Program has encountered an error";
	}

	cout << "\nYou have " << tagsCounter << " tags stored currently";

	//keep the window open until the user closes
	string closeString;
	cout << "\nEnter anything to close";
	cin >> closeString; 




	return 0;

	
}