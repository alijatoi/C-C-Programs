#include<iostream>
using namespace std;
int main()
{
int choice ,num1,num2,temp;
num1=0,num2=1;
cout<<"How Much Fibbonacci Series Range You Want  : ";
cin>>choice;
do {
	cout<<num1<<endl; //0  1  1  2 3 5
	temp=num1+num2;  // 1  1  2  3 5 8
	num2=num1;       // 0  1  1  2 3 5 
	num1=temp;       // 1   1  2  3 5
	              
	
	
}	while(num1<=choice);
	
	
	
}
