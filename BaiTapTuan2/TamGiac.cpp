#include <iostream>
#include <cmath> 
using namespace std;
int main()
{
	int a,b,c;
	cin >> a >> b >> c;
	if (a+b>c && abs(a-b)<c || a+c>b && abs(a-c)<b || b+c>a && abs(b-c) < a ) {
	cout << a+b+c << endl; 
	if (a==b && a!=c || b==c && b!=a || c==a && a!=c) cout << "Tam giac can";
	if ( a==b && a==c) cout << "Tam giac deu";
	if (a*a + b*b ==c*c || a*a +c*c==b*b || b*b +c*c==a*a) cout << "Tam giac vuong";
}

return 0; 
 } 
