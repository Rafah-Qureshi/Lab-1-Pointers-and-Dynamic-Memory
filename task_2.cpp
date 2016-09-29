#include <iostream>

using namespace std;

//define and declare function
void analyze_pointer(int *ptr)
{
	//Task 2 Part 1
	cout << ptr << endl;		//output memorry location
	cout << *ptr << endl;		//output value 
}

//Task 2 Part 3
int* int_pointer1()
{
	int *x = new int;
	*x = 3;
	return(x); //passing by pointer
}

int* int_pointer2()
{
	int iValue = 4;
	return &iValue;
}

int main(void) {
	
	//Task 2 Part 2 on Stack
	int iValue = 1;
	analyze_pointer(&iValue); //pass by reference
	cout << endl;
	
	//Task 2 Part 2 on Heap
	int *hValue = new int;
	*hValue = 2;
	analyze_pointer(hValue); //passing by pointer
	cout << endl;
	
	//Task 2 Part 3 on heap
	analyze_pointer(int_pointer1()); 
	cout << endl;
	
	//Task 2 Part 3 on stack
	analyze_pointer(int_pointer2()); 
	cout << endl;
	
	//Free heap memory
	delete int_pointer1();
	//Continue at command of user
	return 0;
}
// Compiler Used Dev C++
/*Question 1 Answer : 
iValue variable is created on stack, 
who's memory is allocated while compiling program 

hValue is created on heap,
who's memory is or can be alloocated while program is running
*/

/*
Question 2 Answer: 
	analyze_pointer(int_pointer2()) : 
	We are trying to access Variable which is not in scope we get warning
	because it was local variable that is why we get garbbage value
	
	analyze_pointer(int_pointer1()) : 
	We are trying to access Variable which is in scope it was created on heap
	when we access it we get its value we delete it in main to free memory
*/
