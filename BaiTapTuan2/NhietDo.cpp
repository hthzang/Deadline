#include <iostream>
using namespace std;
int main()
{
	double doF, doC, doK;
	cin >> doF;
	doC= (doF-32)*5/9;
	doK= (doF-32)*5/9 + 273.15; 
	cout <<  "Fahrenheit    	Celsius  	Absolute Value" << endl;
	cout << "   " << doF << "           " << doC<< "            " << doK << endl;  

	return 0; 
 } 
