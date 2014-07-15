#include<iostream>
#include<cstdio>
using namespace std;
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

int decrypt(char a[])
{
	char c,d;
int sum=0;
c=gc();
c=gc();
cout<<c<<endl;
	for(;(47<c && c<58) || (c=='m') || (c=='c')||(c=='x')||(c=='i') ;c=gc())
	{
	cout<<sum<<c<<endl;	
		if(c>57)
			sum+=num(c);
		else
			d=c;
			c=gc();
			sum+=(d-48)*num(c);
	
	}
return sum;
}

int main()
{
char a[100];
cin>>a;

cout<<decrypt(a)<<endl;	

return 0;
}
