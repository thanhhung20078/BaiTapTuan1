 #include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int x,y;
	cout<<"Nhap hai so x, y: ";
	cin>>x>>y;
	float distance;
	distance = sqrt(x*x+y*y);
	cout<<"distance = "<<distance;
	return 0;
}
