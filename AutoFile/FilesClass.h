#pragma once
#include "stdafx.h"
#include "TagsClass.h"
#include "DirectoryClass.h"

class FilesClass
{
public:
	FilesClass();
	~FilesClass();

	void fileCompare(string sortingArray[], string dirStubs[], int tagTotalNumber, int dirNumber);
	//Precondition: There must be tags in sortingArray[] and stubs in dirStubs[] (which will in turn populate tagTotalNumber and dirNumber.
	//Postcondition: Stubs that contain a tag will be amended such that dirStubs[] will contain TAG\STUB.
	//				 If no match is found, the corresponding index for dirStubs[] will remain unchanged.

	void autoFile(string dirStubs[], int dirNumber);
	//Precondition: dirStubs[] is not empty and fileCompare() has run.
	//Postcondition: Each index of dirStubs[] will be printed out line by line to "pathInfo.txt".


	//Accessor Functions ----------
	char getSlash();

	//Mutator Functions ------------
	void setSlash(char a);

private:

	char slash = '\\';

};

