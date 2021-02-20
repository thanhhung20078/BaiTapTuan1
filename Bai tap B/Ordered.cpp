#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x,y,z;
    cout<<"Nhap ba so x,y,z: ";
    cin>>x>>y>>z;
    bool b = 0;
    if(x>y && y>z)
    {
    	b = 1;
	}
	else
	{
		if(x<y && y<z)
		{
			b = 1;
		}
		else
		{
			b = 0;
		}
	}
	if(b == 1)
	{
		cout<<"true";
	}
	else
	{
		cout<<"false";
	}
	return 0;
}
