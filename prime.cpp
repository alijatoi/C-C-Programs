#include<iostream>
using namespace std;
int main()
{
	int start=212,end=300,i,sum=0,ans;
	do
	{
		for(i=2;i<=start/2;i++)
		{
			ans=start%i;
	if(ans==0)
			{
			break;
			}
		}
		if(ans!=0)
		{
			sum+=start;
		}
		start++;
	}while(start<=end);

	cout<<sum;
}
