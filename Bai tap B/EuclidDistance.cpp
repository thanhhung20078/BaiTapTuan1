#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a,b,c,d;
	cout<<"Nhap x1,x2,y1,y2: ";
	cin>>a>>b>>c>>d;
	float x;
	x = (c*c - a*a) + (d*d - b*b);
	cout<<"Khoang cach Euclid la: "<<sqrt(x);
	return 0;
}
