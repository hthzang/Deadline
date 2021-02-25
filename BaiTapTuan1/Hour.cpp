#include <iostream>
using namespace std;
int main()
{
	for (int hour= 0; hour <=24; hour++) {
	if (hour==0) cout << "12 midnight" << endl; 
	else if (1 <= hour && hour <= 11) cout << hour << " am" << endl; 
	else if (hour==12) cout << "12 noon" << endl;
	else cout << hour - 12 << " pm" << endl;
}
	return 0;
}
