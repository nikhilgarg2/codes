#include<iostream>
#include<cstdio>
#include<cstring>
#include<set>
using namespace std;
int array[100001];
bool array1[100001];

int main()
{
	int t,j,n,counter;
	scanf("%d",&t);
	long long int a;
	while(t--)
	{
		set<int>myset;
		set<int>::iterator it;
		scanf("%d",&n);
		memset(array,0,sizeof(array));	
		memset(array1,false,sizeof(array1));
		for(int i=1;i<=n;i++)
		{
		scanf("%d",&array[i]);
		}

		for(int i=1;i<=n;i++)
		{
		counter=1;
		if(array1[i]==false)
		j=array[i];
		array1[i]=false;
		while(j!=i)
		{
		array1[j]=false;
		j=array[j];
		counter++;
		}
		myset.insert(counter);
	
		}
		
	a=1;
	for (it=myset.begin(); it!=myset.end(); ++it)
	{
	a=(a*(*it))%1000000007;
	}

	cout<<a<<endl;
	}


	return 0;

}
