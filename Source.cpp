#include<iostream>
using namespace std;

float MultOrDiv(float num1, float num2, float& num3, bool flag) {
	if (flag == true) return (num3 = num1 * num2);
	else if (num2 == 0) cout << "Cannot divide by zero" << endl;
	else return (num3 = num1 / num2);
}

void main() {
	float num3 ;
	cout << "Mult Numbers: " <<MultOrDiv(4.2, 2.0, num3 , true) << endl; // Multiplication of two numbers
	cout << "Div Numbers: " << MultOrDiv(4.2, 2.0, num3, false) << endl;// Division of two numbers
	cout << MultOrDiv(4.2, 0.0, num3, false) << endl;// Attempt to divide by 0
}
