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

	dirArray[0] = { L"C:/Users/tntth/OneDrive/Documents/EENG-ProjectNotes-Timothy-Thacker.txt " };
	dirArray[1] = { L"C:/Users/tntth/OneDrive/Documents/EENG201-HW-01-Timothy-Thacker.pdf " };
	dirArray[2] = { L"C:/Users/tntth/OneDrive/Documents/EENG201-HW-02-Timothy-Thacker.pdf " };
	dirArray[3] = { L"C:/Users/tntth/OneDrive/Documents/EENG221-PR-01-Timothy-Thacker.pdf " };
	dirArray[4] = { L"C:/Users/tntth/OneDrive/Documents/EENG221-PR-02-Timothy-Thacker.pdf " };
	dirArray[5] = { L"C:/Users/tntth/OneDrive/Documents/MATH-ACT1-Timothy-Thacker.pdf " };
	dirArray[6] = { L"C:/Users/tntth/OneDrive/Documents/MATH-ACT2-Timothy-Thacker.pdf " };
	dirArray[7] = { L"C:/Users/tntth/OneDrive/Documents/PHOTO-abstract1-Timothy-Thacker.jpg " };
	dirArray[8] = { L"C:/Users/tntth/OneDrive/Documents/PHOTO-abstract2-Timothy-Thacker.jpg " };
	dirArray[9] = { L"C:/Users/tntth/OneDrive/Documents/random-random-Timothy-Thacker.jpg " };
}





wstring DirectoryClass::DisplayPathInfo()
{

	wstring examplePath0 = L"C:/FileSystemTest/SubDir1/SubDirLevel2/File1.txt ";


	path pathToDisplay(examplePath0);

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

void DirectoryClass::pathCollection()
{
	//Take array populated with pulled paths, in this case from stubs
	for (int i = 0; i < dirNumber; i++)
	{
	    path pathToDisplay(dirArray[i]);
		wstring tempStub;
		wcout << pathToDisplay;
		tempStub = pathToDisplay.stem();
		wcout << tempStub;
		dirStubs[i] = tempStub;

	}

	//Populate dirStubs array with the "stems" to sort

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
wstring DirectoryClass::getDirStubs()
{
	return dirStubs[11];
}

//Mutator Functions
void DirectoryClass::setDirArray(int index, wstring content)
{
	dirArray[index] = content;
}