//Write a function to check if a given array is sorted in ascending order
#include <iostream>
bool check_asc_sort(int arr[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		if(arr[i]>arr[i+1])
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int arr[50];
	int n;
	printf("HOW MANY ELEMENT YOU WANT TO ENTER : ");
	scanf("%d",&n);
	printf("ENTER THE ELEMENTS : ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	bool result= check_asc_sort(arr,n);
	if(result == true)
	{
		printf("\n The Input array sorted in ascending oreder");
	}
	else
	{
		printf("\n The Input array Not sorted in ascending oreder");
	}
}

