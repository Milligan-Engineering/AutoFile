#include "TagsClass.h"


TagsClass::TagsClass()
{
}

TagsClass::~TagsClass()
{
}




void TagsClass::listPrint(string sortingArray1[], int tagTotalNumber)
{
	for (int arrayCounter1 = 0; arrayCounter1 <= tagTotalNumber; arrayCounter1++)
	{
		cout << sortingArray1[arrayCounter1];
		cout << "\n";
	}
}

int TagsClass::findTagNumber(string arrayUpdate[])
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


void TagsClass::case2(string sortingArray[], const int MAX_TAGS, const int MIN_TAGS, int tagInputNumber)
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
			cout << "The characters / * : ? < > | \"  and spaces are not valid inputs" << endl;
			cout << "Please input a new tag: ";
			getline(cin, tempTag);
			b = invalidEval(tempTag);
		}

		while (tempTag.empty())
		{
			cout << "Tags may not be blank." << endl;
			cout << "Please input a new tag: ";
			getline(cin, tempTag);

		}

		sortingArray[(arrayCounter2 - 1)] = tempTag;
		fileOutput(tempTag);
	}
}

bool TagsClass::invalidEval(string a)
{
	bool b = true;
	string invalidInputs[] = { "/" , "\\", "*", ":", "?", "<", ">", "|", "\"", " " };
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

void TagsClass::fileOutput(string inputTag)
{
	ofstream tagsFile;
	tagsFile.open("tagsText.txt", ios::app); //Append to the text file
	tagsFile << endl;
	tagsFile << inputTag;
	tagsFile.close();
}



//Accessor Functions ------------

string TagsClass::getTempChoice()
{
	return(tempChoice);
}

int TagsClass::getArrayCounter1()
{
	return(arrayCounter1);
}

int TagsClass::getTagInputNumber()
{
	return(tagInputNumber);
}

int TagsClass::getTagTotalNumber()
{
	return(tagTotalNumber);
}


//Mutator Functions ---------------

void TagsClass::setTempChoice(string string)
{
	tempChoice = string;
}

void TagsClass::setArrayCounter1(int a)
{
	arrayCounter1 = a;
}

void TagsClass::setTagInputNumber(int a)
{
	tagInputNumber = a;
}

void TagsClass::setTagTotalNumber(int a)
{
	tagTotalNumber = a;
}