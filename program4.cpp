//Write a program to perform exponential search in a sorted array
#include<iostream>
using namespace std;
void expo_search(int arr[],int arrlen,int num)
{
	int c=0;
	for(int i=0;i<=arrlen;i++)
	{
		if(arr[i]==num)
		{
			cout<<"\nELEMENT FOUND AT : "<<arr[i]<<"\t INDEX";
			c=c+1;  
		}
	}
		
if(c==0)
{
	cout<<"\n ELEMENT NOT FOUND !";
}
}
int main()
{
	int num;
	int arr[]={1,2,3,4,5};
	int arrlen = sizeof(arr) / sizeof(arr[0]);

	cout<<"ENTER WHICH ELEMENT YOU FIND : ";
	cin>>num;
	expo_search(arr,arrlen,num);

}
