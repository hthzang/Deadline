#include <iostream>
using namespace std;
int main() 
{
	int n;
	cin >> n;
	for(int i=n; 1<=i;i--) {
		for (int j = 1; j<=i; j++) cout << "*";
		cout << endl; 
	} 
	return 0; 
 } 
