#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b; 
	int x = max (a,b) ;
	for (int i=x; i<=a*b;i++) {
		if (i%a==0 && i%b==0) {
		cout << "Boi chung nho nhat la: " << i << endl;
		break; 
	} 
} 
	return 0; 
 } 
