#include<iostream>
using namespace std;

int main()
{
	// Taking input:-
	
	int arr[5];
	int n = 5;
	cout<<"Enter the values: ";
	for(int i = 0; i<n; i++)
	{
		cin>>arr[i];
	}
	
	//print those values:-
	
	cout<<"Print after taking input: ";
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
}
