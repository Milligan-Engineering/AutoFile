#pragma once
#include "DirectoryClass.h"
#include "stdafx.h"

class SubDirectoryClass :
	public DirectoryClass
{
public:

	SubDirectoryClass();
	~SubDirectoryClass();

	SubDirectoryClass(string);


private:
	string subDir;
	string subDirPath;
	string subDirStorage[100];
};

