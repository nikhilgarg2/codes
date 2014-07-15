#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
using namespace std;

int main()
{
	int t;
	int n;
	scanf("%d",&t);
	int array[127];
	bool check,check2;
	//bool check[1000001];
	int u=0;
	char c,d;
	string x;
	while(t--)
	{
		check=false;
		check2=false;
		//memset(check,false, sizeof(check));
		memset(array,0,sizeof(array));
		scanf("%d",&n);
		while(n--)
		{
			cin>>c>>d;
			if(d=='.')
			check2=true;
			array[int(c)]=int(d);
		}
		cin>>x;
		for(int k=0;k<x.length();k++)
		{
		if(x[k]=='.')
		 	{
			 check2=true;	
			//cout<<check2<<endl;
			}
		if(array[int(x[k])]!=0)
			x[k]=char(array[int(x[k])]); 
		}
		int i=0;				
		while(x[i]=='0')
			{
			x[i]='$';
			i++;
			}
		if(check2)
		{
		i=x.length()-1;
		while(x[i]=='0')
			{
			x[i]='$';		
			i--;
			}
		
		if(x[i]=='.')
		{
		x[i]='$';
		}
		}
		for(int j=0;j<x.length();j++)
		{
		if(x[j]!='$')	
		{	
			printf("%c",x[j]);	
			check=true;
		}
		}		
	if(!check)
	printf("%d",u);
	printf("\n");
	}

	return 0;
}
