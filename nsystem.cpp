#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

char last(int a)
{
	if(a==1000)
		return 'm';
	else if(a==100)
		return 'c';
	else if(a==10)
		return 'x';
	else if(a==1) 
		return 'i';
}


int num(char c)
{
	if(c=='m')
		return 1000;
	else if(c=='c')
		return 100;
	else if(c=='x')
		return 10;
	else if(c=='i')
		return 1;
}

void encrypt(int a)
{
	int c;
	for(int i=1000;i>0;i=i/10)
	{
		c=a/i;
		if(c>0)
		{
			if(c==1)
			{
				cout<<last(i);
				a=a%i;
			}

			else
			{

				cout<<c<<last(i);
				a=a%i;
			}

		}


	}
	cout<<"\n";
}


int decrypt(char a[])
{
	int sum=0;
	char c,d;
	for(int i=0;i<strlen(a);i++)
	{   	c=a[i];
		if(c>57)
			sum+=num(c);
		else
		{	
			d=c;
			i++;
			c=a[i];
			sum+=(d-48)*num(c);

		}
	}
	return sum;
}


int main()
{
	char a[100],b[100];
	int c,d;
	scanf("%d",&d);
	while(d--)
	{
		scanf("%s %s",a,b);
		c=decrypt(a)+decrypt(b);
		encrypt(c);	
	}
	return 0;
}
