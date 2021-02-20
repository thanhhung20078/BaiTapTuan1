#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int N;
    cout<<"Nhap vao so N: ";
    cin>>N;
    double a[N];
    cout<<"Nhap "<<N<<" so: ";
    for(int i = 0;i<N; i++)
    {
    	cin>>a[i];
	}
	double s=0;
	for(int i = 0; i<N; i++)
	{
		s = s + a[i];
	}
	double Mean = s/N;
	int Max = a[0];
	int Min = a[1];
	for(int i = 0; i<N; i++)
	{
		if(Max<a[i])
		{
			Max = a[i];
		}
	}
	for(int i = 0; i<N; i++)
	{
		if(Min > a[i])
		{
			Min = a[i];
		}
	}
	cout<<"Mean: "<<Mean<<endl;
	cout<<"Max: "<<Max<<endl;
	cout<<"Min: "<<Min;
	return 0;
}
