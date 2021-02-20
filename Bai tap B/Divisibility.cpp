#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int x,y;
	cout<<"Nhap hai so x,y: ";
	cin>>x>>y;
	if(x%7==0 && y%7==0)
	{
		cout<<"true";
	} 
	else
	{
		cout<<"false";
	}
	return 0;
}
