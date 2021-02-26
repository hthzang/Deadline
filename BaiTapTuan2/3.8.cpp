#include <iostream>

using namespace std;
 

int main()
{
	int a,b,c,d,m;
	 cin>>a>>b;
	    d=a*b;
		   while(a!=b){a>b?a=a-b:b=b-a;}
       if (a!=0&&b==0) {cout<<0;}
       if (a==0&&b!=0) {cout<<0;} // Neu em ko dung if no cu bi loi truong hop a=0 hoac b=0
	   if (a==0&&b==0) {cout<<0;}
	m=d/a;
	cout<<m;
	return 0;
	system("pause");
	
	
	
	
	}
