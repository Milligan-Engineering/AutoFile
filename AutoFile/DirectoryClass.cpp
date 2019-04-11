#include "stdafx.h"
#include "DirectoryClass.h"



DirectoryClass::DirectoryClass()
{

}


DirectoryClass::~DirectoryClass()
{
}


DirectoryClass::DirectoryClass(string tempName, string tempPath)
{
	DirName = tempName;
	DirPath = tempPath;
}