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
	
private:


};

