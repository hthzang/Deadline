#include <iostream>
using namespace std;
int main()
{  
	string f[11];
	f[0] = "a";
	f[1] = "b";
	for (int i=2; i<11;i++) {
		f[i] = f[i-1] + f[i-2]; 
	}
	for (int i=0; i<11; i++) {
		cout << f[i]<< endl; 
	} 
	
	return 0; 
 } 

