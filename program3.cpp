//Write a program to reverse a given string
#include<iostream>
#include<string.h>
using namespace std;
void str_rev(string str)
{ 
int n=str.length();
int i=0;
 while(i<n)
 {
 	str[i]=str[n];
 	i=i+1;
 	n=n-1;
 }
		
cout<<"Reverse String : "<<str;
}
int main()
{
	string str;
	cout<<"ENTER THE STRING : ";
	cin>>str;
	str_rev(str);
}
