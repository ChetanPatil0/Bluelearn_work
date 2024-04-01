
//Create a function to search for a target value in a 2D matrix with rows and 
//columns sorted in ascending order
#include<iostream>
#include<string>
using namespace std;
bool search(string arr[10][10],int r,int c)
{
	string s_value;
	int count=0;	
cout<<"\nENTER SEARCH VALUE : ";
cin>>s_value;
 for( int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
            if(s_value == arr[i][j])
            {
            	return true;
			}
		}
	}
	return false;
}
int main()
{
	string arr[10][10];
	int i,j;
	int r,c;
	
	
	cout<<"ENTER ROW AND COLS :";
	cin>>r>>c;
	for( i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<"ENTER ELEMENT : ";
			cin>>arr[i][j];
		}
	}
  while(1)
  {
  	int res = search(arr,r,c);
	if(res == true)
	{
		cout<<"FOUNDED !";
	}
	else{
		cout<<"NOT FOUNDED !";
	}
  }
    
	
}
