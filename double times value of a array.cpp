#include<iostream>
using namespace std;
int main()
{
	int a[10]={1,2,3,4,5};//={1,2,3,4,5};
	int b[5],i=0,j=0,k=0;
	cout<<"Enter Array Elements";
	for(i=0;i<=4;i++)
	{
		b[i]=a[i];
	}
	for(i=0;i<=4;i++)
	{
		while(k<2)
		{
			a[j]=b[i];
			k++;
			j++;
		}
		k=0;
	}
	for(i=0;i<10;i++)
	{
		cout<<a[i];
	}
}
