//write a cpp program to swap 2 number without using third variable
#include<iostream>
using namespace std;
void swapNum(int a,int b)
{
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"\nAFTER SWAP : Num1="<<a<<", Num2 = "<<b;
 } 
int main()
{  int a,b;
    cout<<"ENTER NUM 1 : ";
    cin>>a;
    cout<<"ENTER NUM 2 : ";
    cin>>b;
	cout<<"ORIGNAL : Num1="<<a<<", Num2 = "<<b;
	swapNum(a,b);
}
