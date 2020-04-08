/* Write a program to create an array with the help of dynamic memory allocation (new and delete); 
perform the addition operation to add the all elements of array */

#include <iostream>
using namespace std;

int main()
{
	int length, sum = 0;
	
	cout << "Enter the number of students in the group" << endl;
	cin >> length;
	
	int *marks = new int[length];
	
	cout << "Enter the marks of the students" << endl;
	
	for( int i = 0; i < length; i++ )           
    {
		cin >> *(marks+i);
	}
	
	for( int i = 0; i < length; i++ )           
	{
		sum += *(marks+i);
	}
	
	cout << "sum is " << sum << endl;
	
	return 0;
}
