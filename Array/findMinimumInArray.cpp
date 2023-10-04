// Minimum number in an Array:-

#include<iostream>
using namespace std;

int findMinimumInArray(int arr[], int size){
	
	int minAns = INT_MAX;
	
	for(int i=0; i<size; i++)
	{
		if (arr[i] < minAns)
		{
			minAns = arr[i];
		}
	}
	return minAns;
}


int main(){
	
	int arr[] = {12,22,34,233,44,55,2};
	int size = 7;
	
	int minimum = findMinimumInArray(arr, size);
	
	cout<<"Minimum number is: "<<minimum<<endl;
	
}
