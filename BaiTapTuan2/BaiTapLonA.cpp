#include <iostream>
using namespace std;

int main()
{
	int hour;
	cin >> hour;
	if (100 <= hour && hour<=150) cout << 100*12000 + (hour-100)*16000;
	else if (150 < hour && hour <= 200) cout << 100*12000 + 50*16000 + (hour - 150)*20000;
	else if (200 < hour) cout << 100*12000 + 50*16000 + 50*20000 + (hour-200)*25000; 
	
	return 0; 
 } 
