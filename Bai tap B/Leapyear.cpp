#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Nhap vao nam muon kiem tra: ";
    cin>>year;
    if(year%100==0)
    {
    	if(year%400==0)
    	{
    		cout<<"true";
		}
		else
		{
			cout<<"false";
		}
	}
	else
	{
		if(year%4==0)
		{
			cout<<"true";
		}
		else
		{
			cout<<"false";
		}
	}
	return 0;
}
