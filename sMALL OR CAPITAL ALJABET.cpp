#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char alphabet;
	cout<<"enter any alphadet"<<endl;
	cin>> alphabet;
	if(alphabet>=65 && alphabet<=90)
	cout<<"you enter a capital alphabet"<<endl;
	else if(alphabet>=97 && alphabet<=122)
	cout<<"you enter a small alphabet"<<endl;
	else
	cout<<"your entered number is not alphabet"<<endl;
	return 0;
}

