/*
#include<iostream>
using namespace std;

#include <string>
#include <conio.h>

struct Area
{ private:
	string units;
	float area_value; 
  public:
	  void set_area(float f_x,string f_s)   //setter function
	  {
		  area_value = f_x;
		  units = f_s;
	  } 
	  float get_area()		 	//getter function
	  {
		  return area_value;
	  }
	  string get_units()		//getter function
	  {
		  return units;
	  }
};
int main(void)
{
	float f;
	string s;
	Area *ptr = new Area;   			 	//dynamic variable 
	cout << "Enter Area" << endl;
	cin >> f;  								//assigning area
	cout << "Enter units"<<endl;
	cin >> s; 								//assigning units
	ptr->set_area(f,s);  			
	cout << "one 1/2 of area is equal to " << ptr->get_area() / 2 << endl; 	 //one half of area
 	cout << "one 1/4 of area is equal to " << ptr->get_area() / 4 << endl;	 //one quater of area
	delete ptr;								//free memory
    return 0;
}

*/

