#pragma once
#include "stdafx.h"
class DirectoryClass
{
protected:


	struct dirInfo
	{
		wstring rootName;
		wstring rootPath;
		wstring relativePath;
		wstring parentPath;
		wstring fileName;
		wstring stem;
		wstring extension;
	};
	dirInfo dirInfo[10];

public:
	DirectoryClass();
	~DirectoryClass();


	void pathCollection();
	//Precondition: There must be at least one directory in dirArray[].
	//Postcondition: The array of objects, dirInfo, will be populated will all information pieces of the provided directories.


	void wstringtostring();
	//Precondition: pathCollection() must run for at least one directory
	//Postcondition: An array, dirStubs[], will be populated with the "stem" part of each directory, in string rather than wstring type.


	//Accessor Functions ----------
	int getDirNumber();
	wstring getDirArray();
	string * getDirStubs();

	//Mutator Functions ------------
	void setDirArray(int index, wstring content);


private:

//STUB -- take these as files that would use a tag-based naming convention all stored under OneDrive\Documents, unassorted.
//examplePath10 serves as a path that would not be sorted

	int dirNumber = 10;
	wstring dirArray[10];
	string dirStubs[10];



};

