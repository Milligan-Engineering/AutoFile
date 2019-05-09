#include "DirectoryClass.h"


DirectoryClass::DirectoryClass()
{

	//Stub Information
	//DirArray[4] is an example of something that would not be sorted into a folder.
	
	dirArray[0] = { L"C:/Users/tntth/OneDrive/Documents/EENG202-HW-01-Timothy-Thacker.pdf " };
	dirArray[1] = { L"C:/Users/tntth/OneDrive/Documents/EENG221-PR-01-Timothy-Thacker.pdf " };
	dirArray[2] = { L"C:/Users/tntth/OneDrive/Documents/MATH-ACT1-Timothy-Thacker.pdf " };
	dirArray[3] = { L"C:/Users/tntth/OneDrive/Documents/PHOTO-abstract1-Timothy-Thacker.jpg " };
	dirArray[4] = { L"C:/Users/tntth/OneDrive/Documents/random-random-Timothy-Thacker.jpg " };
}


DirectoryClass::~DirectoryClass()
{
}




void DirectoryClass::pathCollection()
{

	for (int i = 0; i < dirNumber; i++)
	{
		path pathToDisplay(dirArray[i]);
		dirInfo[i].rootName = pathToDisplay.root_name();
		dirInfo[i].rootPath = pathToDisplay.root_path();
		dirInfo[i].relativePath = pathToDisplay.relative_path();
		dirInfo[i].parentPath = pathToDisplay.parent_path();
		dirInfo[i].fileName = pathToDisplay.filename();
		dirInfo[i].stem = pathToDisplay.stem();
		dirInfo[i].extension = pathToDisplay.extension();
	}

}

void DirectoryClass::wstringtostring()
{
	for (int i = 0; i < dirNumber; i++)
	{
		wstring wide(dirInfo[i].stem);
		string str(wide.begin(), wide.end());
		dirStubs[i] = str;
	}
	
}





//Accessor Functions
int DirectoryClass::getDirNumber()
{
	return dirNumber;
}
wstring DirectoryClass::getDirArray()
{
	return dirArray[11];
}
string* DirectoryClass::getDirStubs()
{
	return dirStubs;
}

//Mutator Functions
void DirectoryClass::setDirArray(int index, wstring content)
{
	dirArray[index] = content;
}
void DirectoryClass::setDirNumber(int number)
{
	dirNumber = number;
}
void DirectoryClass::setdirStubs(int stubIndex, string stubs)
{
	dirStubs[stubIndex] = stubs;
}