#include <iostream> 
#include <algorithm>
using namespace std;
int main() 
{
	int a[5];

	for (int i=1; i<=5; i++) {
		cin >> a[i] ;
	}
	sort(a, a+5);
	cout << a[3];
	return 0; 
 } 
