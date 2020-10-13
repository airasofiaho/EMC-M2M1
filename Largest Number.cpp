#include<iostream>
using namespace std;
//Largest Number Comparison
int main(){
	int num1, num2, num3;
	
	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;
	cout << "Enter third number: ";
	cin >> num3;
	
	if(num1>num2 && num1>num3)
		cout << endl << "The largest number is: " << num1;
	else if(num2>num1 && num2>num3)
		cout << endl << "The largest number is: " << num2;
	else
		cout << endl << "The largest number is: " << num3 << endl;

	system("PAUSE") ;
	return 0;
}