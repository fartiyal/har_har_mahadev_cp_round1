#include<bits/stdc++.h>
using namespace std;
int main()
{
	long double n;
long	double factorial=1;
	cout<<"enter n:";
	cin>>n;
	if(n>100)
	{
		for( long double i=2;i<=n;i++)
		factorial*=i;
		cout<<"factorial of n:"<<factorial;
	}
	return 0;

}
