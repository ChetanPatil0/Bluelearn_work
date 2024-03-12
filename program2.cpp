//Design an algorithm to find the maximum and minimum elements in an array
#include<iostream>
using namespace std;
void find_min_max(int arr[],int n)
{
	int max=arr[0], min=arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
		if(min>arr[i])
		{
			min=arr[i];
		}
	}
	cout<<"MAX NUMBER IN ARRAY : "<<max<<endl;
	cout<<"MIN NUMBER IN ARRAY : "<<min;
}
int main()
{
	int arr[50],n;
	cout<<"Enter how many element you want to enter";
	cin>>n;
	cout<<"Enter elemets : ";
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
	find_min_max(arr,n);
}
