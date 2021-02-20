#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int N;
    cout<<"Nhap N: ";
    cin>>N;
    for(int i = N; i>0;i--)
    {
    	for(int j = i; j>0; j--)
    	{
    		cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
