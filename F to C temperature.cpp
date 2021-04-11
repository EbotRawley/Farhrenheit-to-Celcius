#include<iostream>

using namespace std;

int main(){
	float cel, fah; 
	cout << "Enter temperature in fahrenheit : ";
	cin >> fah;
	cel = 5*(fah - 32)/9;
	cout << fah <<" Fahrenheit is = "<<cel<<" Celcius."<<endl;
	return 0;
}
