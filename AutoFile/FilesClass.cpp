#include "stdafx.h"
#include "FilesClass.h"



FilesClass::FilesClass()
{
}


FilesClass::~FilesClass()
{
}


void FilesClass::fileCompare(string sortingArray[], string dirStubs[], int tagTotalNumber, int dirNumber)
{
	for (int i = 0; i < dirNumber; i++)
	{
		for(int x = 0; x < tagTotalNumber; x++)
		{
			if (dirStubs[i].find(sortingArray[x]) != string::npos)
			{
				dirStubs[i] = sortingArray[x].append(1, slash).append(dirStubs[i]);
			}
		}
	}

}


void FilesClass::autoFile(string dirStubs[], int dirNumber)
{
	ofstream filesClass;
	filesClass.open("pathInfo.txt");
	filesClass << endl;
	for (int i=0; i < dirNumber; i++)
	{
		filesClass << dirStubs[i];
		filesClass << "\n";
	}
	filesClass.close();
}

//Accessor Functions ----------
char FilesClass::getSlash()
{
	return(slash);
}

//Mutator Functions ------------
void FilesClass::setSlash(char a)
{
	slash = a;
}