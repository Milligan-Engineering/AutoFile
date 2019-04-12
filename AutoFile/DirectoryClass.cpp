#include "stdafx.h"
#include "DirectoryClass.h"



DirectoryClass::DirectoryClass()
{

}


DirectoryClass::~DirectoryClass()
{
}


DirectoryClass::DirectoryClass(string tempName, string tempPath, int tempSubDirNum)
{
	dirName = tempName;
	dirPath = tempPath;
	subDirNum = tempSubDirNum;
}