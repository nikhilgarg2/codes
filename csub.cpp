#include<iostream>
#include<cstdio>
#include<cstdio>

//int array[100001];
using namespace std;

int main()
{
	char c;
	int t;
	scanf("%d",&t);
	long long int num1,n;
	while(t--)
	{
		num1=0;

		scanf("%lli",&n);
		for(int i=0;i<=n;i++)
		{
			c=getchar();

			if(c=='1')
				num1++;
		}

		num1=num1*(num1+1)/2;
		cout<<num1<<endl;

	}
return 0;
}
