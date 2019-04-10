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

	void case2(string sortingArray[], const int MAX_TAGS, const int MIN_TAGS, int tagInputNumber);
	//Note: I reduced all of "case 2" - the case in which you enter new tags - into a void function.
	//Precondition: You must have an array to store tags in, a const int value to represent the maximum
		//number of tags you would like to input, a const int value for the minimum number of tags
		//and the user must input a value for "tag input number" that is greater than MIN_TAGS and
		//less than or equal to MAX_TAGS. The user must then input tags corresponding to the 
		//tagInputNumber. These tags may not have any characters not allowed in a file name by 
		//the Windows OS.
	//Postcondition: Each of the stored tags will be written, line by line, to a text file tagsText.txt
		//for storage and manipulation. The array will be populated with the tags from this text
		//file upon running the program again.

	bool invalidEval(string a);
	//Precondition: User inputs a string - tempTag
	//Postcondition: Function outputs a boolean value determinining whether or not an invalid character is in the input string

	void fileOutput(string inputTag);
	//Precondition: A string, inputTag, will be put into this function which will then write it to a text file.
	//Postcondition: There will be a text file populated with the input strings.


	//Accessor Functions
	string getTempChoice();
	int getArrayCounter1();
	int getTagInputNumber();
	int getTagTotalNumber();


	//Mutator Functions
	void setTempChoice(string string);
	void setArrayCounter1(int a);
	void setTagInputNumber(int a);
	void setTagTotalNumber(int a);



private:

	string tempChoice;
	int arrayCounter1 = 1;
	int tagInputNumber = 2;
	int tagTotalNumber = 0;


	/*string test1 = "1";
	string test2 = "2";
	string test3 = "3";
	*/

};

