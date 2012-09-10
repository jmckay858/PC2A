// PC 2.A - Total Purchase
// -------------------------
// Programmer: Jeremy F McKay
// Date: September 9, 2012
// -------------------------
// The program I am writing is used to determine the subtotal, sales tax,
// and total of 5 items.
//
// Note how the code does not go off to infinity, but about 70 characters.
// For example:
//
// ---------1---------2---------3---------4---------5---------6---------7
// 1234567890123456789012345678901234567890123456789012345678901234567890
//


#include <iostream>
using namespace std;

int main() {
	// Constants
	const double salestax = 0.06;

	// declaration of program variables
	double  item1 = 12.95,
			item2 = 24.95,
			item3 = 6.95,
			item4 = 14.95,
			item5 = 3.95,
			subtotal,
			total,
			salestaxamt;

	// add items up for subtotal
	subtotal = item1 + item2 + item3 + item4 + item5;
	// determine amount for sale tax
	salestaxamt = subtotal * salestax;
	// total price including sales tax
	total = salestaxamt + subtotal;
	// display results
	cout << "Subtotal            = " << "$" << subtotal << endl;
	cout << "6% Sales Tax amount = " << "$" << salestaxamt << endl;
	cout << "Total               = " << "$" << total << endl;

	return 0;
}
