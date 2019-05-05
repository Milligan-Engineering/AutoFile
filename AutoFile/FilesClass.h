#pragma once
#include "stdafx.h"
#include "TagsClass.h"
#include "DirectoryClass.h"

class FilesClass
{
public:
	FilesClass();
	~FilesClass();

	void fileCompare(string sortingArray[], string dirStubs[]);
	void autoFile(string dirStubs[], int dirNumber);

private:

	char slash = '\\';

};

