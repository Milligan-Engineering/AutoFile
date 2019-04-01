#pragma once
class dateClass
{
public:
	dateClass();
	~dateClass(); //destructor

	void inputDates();
	//precondition:
	//postcondition:


	double dateToSeconds(int monthVal, int dayVal, int yearVal);
	//precondition:
	//postcondition:


	//Accessor Functions
	int getmonthVal();
	int getdayVal();
	int getyearVal();
	double getsetVal();

	//Mutator Functions
	int setmonthVal(int value);
	//Preconditions: Value to set monthVal to is given in value
	//Postcondtition: monthVal is set to value, value is also returned
	int setdayVal(int value);
	int setyearVal(int value);
	double setsetVal(double value);





private:

	int monthVal, dayVal, yearVal;
	double setVal;
};

