// Replace character on given string
#include<iostream>
#include<string.h>
using namespace std;
void replace_char(string str)
{
	char oldchar,newchar;
	cout<<"ENTER WHICH CHARACTER YOU REPLACE FROM GIVEN STRING: ";
	cin>>oldchar;
	cout<<"ENTER NEW CHARACTER : ";
	cin>>newchar;
	
	for(int i=0;i<str.length();i++)
	{
		if(str[i]== oldchar)
		{
			str[i]=newchar;
		}
	}
	cout<<"NEW STRING : "<<str;
}
int main()
{
	string str;
	
	cout<<"ENTER THE STRING : ";
	cin>>str;
	replace_char(str);
}
