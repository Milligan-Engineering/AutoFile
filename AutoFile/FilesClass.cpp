#include "stdafx.h"
#include "FilesClass.h"
#include "TagsClass.h"
#include "DirectoryClass.h"



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
	for (int i = 0; i <= dirNumber; i++)
	{
		if (dirStubs[i].find(sortingArray[b]) != string::npos)
		{
			b++;
			if (b = tagTotalNumber)
			{
				break;
			}
		}

		else
		{
			dirStubs[i] = sortingArray[b];
				
		}
		b = 0;
	}

}


void FilesClass::autoFile()
{
	//file system navigation here to change path
}