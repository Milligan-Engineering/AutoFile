#include "stdafx.h"


TagsClass::TagsClass()
{
}

TagsClass::~TagsClass()
{
}


void listPrint(string sortingArray1[], int tagTotalNumber)
{
	for (int arrayCounter1 = 0; arrayCounter1 <= tagTotalNumber; arrayCounter1++)
	{
		cout << sortingArray1[arrayCounter1];
		cout << "\n";
	}
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


