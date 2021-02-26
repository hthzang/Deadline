#include<iostream>
#include <math.h>
using namespace std;

int main()
{
	double a,b,c,x1,x2,delta,x;
	cin>>a>>b>>c;
	delta=b*b-4*a*c;
	x1=(-b+sqrt(a))/(2*a);
	x2=(-b-sqrt(a))/(2*a);
	x=-b/(2*a);

	
	delta>0?cout<<"phuong trinh co 2 ngiem",cout<<x1<<x2:(delta==0?cout<<"phuong trinh co 1 nghiem la:"<<x:cout<<"phuong trinh vo nghiem");
	
	
	
	
}
