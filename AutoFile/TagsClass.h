#pragma once
class TagsClass
{
public:
	TagsClass();
	~TagsClass();

	int findTagNumber(string arrayUpdate[]);
	//Precondition: When this is called, it will read the text file "tagsText.txt".
	//Postcondition: This function will output an integer value equivalent to the number of tags stored in the text file.

	void listPrint(string sortingArray1[], int arrayCounter1);
	//Precondition: Points to the array which contains tags, and inputs the number of elements within the array
	//Postcondition: Uses a for loop to print out no more and no less than the tags stored in the array



private:


};

