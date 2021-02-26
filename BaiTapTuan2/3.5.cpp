#include<iostream>
using namespace std;

int main()
{
	int hangChuc,du,So;
	cin>> So;
	hangChuc =So/10;
	du=So%10;
	hangChuc==1?cout<<"muoi":(hangChuc==2?cout<<"hai muoi":(hangChuc==3?cout<<"ba muoi":(hangChuc==4?cout<<"bon muoi":(hangChuc==5?cout<<"nam muoi":(hangChuc==6?cout<<"sau muoi":(hangChuc==7?cout<<"bay muoi":(hangChuc==8?cout<<"tam muoi":cout<<"chin muoi")))))));
	du==1?cout<<" mot":(du==2?cout<<" hai ":(du==3?cout<<" ba":(du==4?cout<<" bon":(du==5?cout<<" nam ":(du==6?cout<<" sau ":(du==7?cout<<" bay ":(du==8?cout<<" tam ":cout<<" chin ")))))));


	
	

	
	
	
}
