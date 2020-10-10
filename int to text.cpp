#include<iostream>
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number: ";
	cin>>n;
	string str;
	
	string ones[] = {"  ","twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninty"};
	string twos[] = {"  ", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelive", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "ninteen"};
	
	if(n==0)
		str="zero";
	if(n<0)
		{
		str="-";
		cout<<"Sorry Negative Number";}
		if(n>=1000)
		{
			if(n>=20000)
			{
				str+=ones[n/10000-1];
				n=n%10000;
			}
			str+=twos[n/1000]+" Thousand ";
			n%=1000;
		}
		
	
	
	if(n>=100)
	{
		str+=twos[n/100]+" Hundred ";
		n%=100;
	}
	
	if(n>=20)
	{
		str+=ones[n/10-1]+" "+twos[n%10];
	}
	else
		str+=twos[n];
		
	cout<<str;
}

