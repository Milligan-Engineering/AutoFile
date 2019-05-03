#pragma once
#include "stdafx.h"
class DirectoryClass
{
protected:


	struct dirInfo
	{
		string dirName;
		string dirPath;
		int subDirNum;
	};
	dirInfo myDir;

public:
	DirectoryClass();
	~DirectoryClass();

	DirectoryClass(string, string, int);

	//File System Navigation

	wstring DisplayPathInfo();
	void pathPrinter();

	void pathCollection();

	//Accessor Functions
	int getDirNumber();
	wstring getDirArray();
	wstring getDirStubs();

	//Mutator Functions
	void setDirArray(int index, wstring content);


private:

	//STUB -- take these as files that would use a tag-based naming convention all stored under OneDrive\Documents, unassorted.
//examplePath1 serves as an example for decomposing a path into its perspective parts
//examplePath10 serves as a path that would not be sorted

	int dirNumber = 10;
	wstring dirArray[10];
	wstring dirStubs[10];


	//STUB end

};

