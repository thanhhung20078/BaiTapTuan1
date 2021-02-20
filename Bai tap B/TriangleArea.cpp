#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a,b,c;
    cout<<"Nhap vao ba canh tam giac a,b,c: ";
    cin>>a>>b>>c;
    float x;
    x = (a+b+c)/2;
    float y;
    y = x*(x-a)*(x-b)*(x-c);
    cout<<"Dien tich tam giac la: ";
    cout<<sqrt(y);
    return 0;
}
