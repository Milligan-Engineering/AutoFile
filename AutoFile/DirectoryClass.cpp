
#include "DirectoryClass.h"



DirectoryClass::DirectoryClass()
{

}


DirectoryClass::~DirectoryClass()
{
}


DirectoryClass::DirectoryClass(string tempName, string tempPath, int tempSubDirNum)
{
	myDir.dirName = tempName;
	myDir.dirPath = tempPath;
	myDir.subDirNum = tempSubDirNum;
}
