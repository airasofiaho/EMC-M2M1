#include<iostream>
using namespace std;
//Simple Cashier Program
int main(){
	int q1, q2, q3, q4;
	double p1 = 40.00, p2 = 20.00, p3 = 100.00, p4 = 90.00, total, payment, change;
	
	cout << "\t-----ASH School Supplies-----" << endl << endl;
	cout << "\t[1]Sticker Paper - 40 PHP" << endl;
	cout << "\t[2]Pencil - 20 PHP" << endl;
	cout << "\t[3]Crayons (12pcs/box) - 100 PHP" << endl;
	cout << "\t[4]Paint (tube) - 90 PHP" << endl << endl;
	
	cout << "How many sticker paper do you want to buy?: ";
	cin >> q1;
	cout << "How many pencils do you want to buy?: ";
	cin >> q2;
	cout << "How many boxes of crayons do you want to buy?: ";
	cin >> q3;
	cout << "How many tubes of paint do you want to buy?: ";
	cin >> q4;
	
	total = (q1*p1) + (q2*p2) + (q3*p3) + (q4*p4);
	
	cout << endl << "Total amount to pay: " << total << endl;
	cout << "Pay a certain amount: ";
	cin >> payment;
	
	if(payment<total)
		cout << endl << "You don't have enough money!" << endl;
	else
		cout << "Total Change: " << payment-total << endl;

	system("PAUSE");
	
	return 0;
}