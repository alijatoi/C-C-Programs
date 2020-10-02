#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
	string alphabe;int A[30],i=0;
	cout<<"Enter Any Alphabet"<<endl;
getline(cin,alphabe);

	//gets(alphabe) function for character array ;
do{
	
	A[i]=alphabe[i];

	if(A[i]==32) //for excluding space
	{
		
	}
	else
	{
	
	cout<<A[i]<<" ";}
	i++;

}while(alphabe[i]!='\0');
	
	/*cout<<endl<<"Asc|| : ";
	for(int j=0;j<i;j++)
	cout<<A[j]<<" ";*/
}

