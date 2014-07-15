#include<iostream>
#include<cstdio>
#include<algorithm>

int binay_search1(long long int array[],int n,int b)
{

	int end=n-1;
	int start=0;
	int mid;
	while(array[mid]!=b)
	{
		mid=(start+end)/2;
		if(array[mid]<b)
			start=mid+1;
		else	
			end=mid-1;
	}
	return mid;
}


using namespace std;
int main()
{
	int n,p,a,b;
	long int k;
	bool flag=false;
	scanf("%d%li%d",&n,&k,&p);
	long long int array[n];
	for(int i=0;i<n;i++)
		scanf("%lli",&array[i]);
	sort(array,array+n);
	for(int i=1;i<=p;i++)
		scanf("%d%d",&a,&b);
		x=binary_search1(array,n,a);
		y=binary_search(array,n,b);
	for(int i=a;i<=b;i++)
			

	return 0;
}
