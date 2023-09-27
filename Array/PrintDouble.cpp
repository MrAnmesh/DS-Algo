#include<iostream>
using namespace std;

int main()
{
	//declare;
	
	int arr[10];
	
	// Take input from user;
	
	int n = 10;
	cout<<"Enter the values: ";
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	
	//Double up...
	
	for(int i=0; i<n; i++)
	{
		arr[i]= 2*arr[i];
	}
	
	//Printing double ;
	
	cout<<"Print after making double: ";
	for (int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
}
