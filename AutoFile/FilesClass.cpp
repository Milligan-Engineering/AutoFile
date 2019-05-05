#include "stdafx.h"
#include "FilesClass.h"



FilesClass::FilesClass()
{
}


FilesClass::~FilesClass()
{
}


void FilesClass::fileCompare(string sortingArray[], string dirStubs[])
{
	TagsClass TagsClass;
	int tagTotalNumber = TagsClass.findTagNumber(sortingArray);
	DirectoryClass DirectoryClass;
	int dirNumber = DirectoryClass.getDirNumber();
	int b = 0;
	label: for (int i = 0; i < dirNumber; i++)
			{
				if (dirStubs[i].find(sortingArray[b]) != string::npos)
				{
					b++;
					if (b = tagTotalNumber)
					{
						i++;
						goto label;
					}
				}

				else
				{
					dirStubs[i] = sortingArray[b].append(1, slash).append(dirStubs[i]);
				}
				b = 0;
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