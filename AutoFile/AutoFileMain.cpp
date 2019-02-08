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
	int tagsCounter = 0;


	cout << "Please input your first tag: ";
	getline(cin, tag1); //Here is the text output, followed by the Tag string input.
	cout << "\n";
	cout << "Please input your second tag: ";
	getline(cin, tag2);
	cout << "\n";
	cout << "Please input your third tag: ";
	getline(cin, tag3);


	fstream tagsFile;
	tagsFile.open("AutoFileTags.txt", fstream::app); //The input tag has been written to the text file.
	tagsFile << tag1 << "\n" << tag2 << "\n" << tag3 << "\n";
	
	tagsFile.close(); //The text file has been closed.
	

	tagsFile.open("AutoFileTags.txt"); //The text file has been opened.
	if (tagsFile.is_open())
	{
		cout << "\nYour current tags are ";
		while (getline(tagsFile, tagOutput)) //Read the text file, storing the information in the file as string tagOutput
		{
			cout << tagOutput; //Here is the text output with the information read from the file.
			cout << ", ";
			tagsCounter++;
		}
		tagsFile.close();
	}

	else cout << "Program has encountered an error";

	cout << "\nYou have " << tagsCounter << " tags stored currently";

	//keep the window open until the user closes
	string closeString;
	cout << "\nEnter anything to close";
	cin >> closeString; 




	return 0;

	
}