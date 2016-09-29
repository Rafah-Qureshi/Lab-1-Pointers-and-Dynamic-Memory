#include <iostream>

using namespace std;

int main(void) {
	//declaring pointer and assigning memory location to it
	int *salary = new int[20];

	//declaring variable int i
	int i;

	//loop to assign values
	for (i = 0; i < 20; ++i)
	{
		cout << "Enter Salary : ";

		//Assigning values to pointer memory
		cin >> *(salary + i);
	}

	//Calculation on salary and output
	for( i = 0; i < 20; ++i)
	{
		*(salary + i) = *(salary + i) + *(salary + i)/(i+1);
		cout << *(salary + i) << endl;
	}

	//Continue at command of user
	system("pause");
	return 0;
}
