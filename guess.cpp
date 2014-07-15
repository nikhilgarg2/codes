#include<iostream>
#include<cstdio>
using namespace std;
long long int gcd(long long int a, long long int b)
{
	long long int c;
	while(a!=0)
	{
		c=a;a=b%a;b=c;
	}

	return b;
}

int main()
{
	long long int n,m,x,d;
	int t;
	scanf("%d",&t);
	while(t--)
	{

		scanf("%lli%lli",&n,&m);

		x=(n/2)*((m+1)/2)+(m/2)*((n+1)/2);
		n=n*m;
		//cout<<x<<endl;
		d=gcd(x,n);
		//n=n*m;
		x=x/d;
		n=n/d;
		printf("%lli/%lli\n",x,n);
	}

	return 0;
}
