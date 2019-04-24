
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



wstring DirectoryClass::DisplayPathInfo()
{
	//STUB
	wstring examplePath;
	examplePath = L"C:/FileSystemTest/SubDir1/SubDirLevel2/File1.txt ";


	path pathToDisplay(examplePath);

	wostringstream wos;
	int i = 0;
	wos << L"Displaying path info for: " << pathToDisplay << endl;
	for (path::iterator itr = pathToDisplay.begin(); itr != pathToDisplay.end(); ++itr)
	{
		wos << L"path part: " << i++ << L" = " << *itr << endl;
	}

	wos << L"root_name() = " << pathToDisplay.root_name() << endl
		<< L"root_path() = " << pathToDisplay.root_path() << endl
		<< L"relative_path() = " << pathToDisplay.relative_path() << endl
		<< L"parent_path() = " << pathToDisplay.parent_path() << endl
		<< L"filename() = " << pathToDisplay.filename() << endl
		<< L"stem() = " << pathToDisplay.stem() << endl
		<< L"extension() = " << pathToDisplay.extension() << endl;
	return wos.str();

}

void DirectoryClass::pathPrinter()
{
	wofstream writeFile;
	writeFile.open("pathInfo.txt");
	writeFile << DisplayPathInfo();
	writeFile.close();
}