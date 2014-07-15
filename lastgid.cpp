#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string>
using namespace std;
int main()
{
	int n,a,k;
	long long int b;
	scanf("%d",&n);
	string x;
	while(n--)
	{
		cin>>x;
		scanf("%lli",&b);
		//printf("%li",b);
		a=x[x.size()-1]-'0';
		if(b!=0)
		{
			k=b%4;
			if(k!=0)
				k=pow(a,k);
			else 
				k=pow(a,4);
			k=k%10;

			printf("%d\n",k);
		}
		else
			printf("1\n");


	}
	return 0;
}


