#include<iostream>
#include<math.h>
#include<cstdio>
using namespace std;

int main()
{
	long int a,b,c;
	int n=0;
	scanf("%li",&a);
	while(a!=-1)
	{
		n=0;b=0;
		while(b<a)
		{
			b=(6*n*(n+1))/2 + 1;
			n++;
		}

		if(b==a)
			printf("Y\n");
		else
			printf("N\n");
		scanf("%li",&a);
	}


	return 0;
}
