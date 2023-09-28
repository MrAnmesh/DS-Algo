// LINEAR SEARCHING IN AN ARRAY ....

#include<iostream>
using namespace std;

int main()
{
	int arr[5] = { 2,4,6,8,10};
	int target = 3;	
	int n = 5;
	
	bool flag = 0; 
	
	for(int i=0; i<n; i++)
	{
		if(arr[i]==target)
		{
			// Found...
			flag = 1;
			break;
		}
	 } 
	 
	 if(flag==1)
	 {
	 	cout<<"Target found";
	 }
	 else{
	 	cout<<"Target not found";
	 }
	
}


// LINEAR SEARCH USING FUNCTIONS:-....


bool linearSearch(int arr[], int size, int target){
	
	for(int i=0; i<size; i++)
	{
		if(arr[i]==target)
		{
			//found
			return true;
		}
	}
	//not found
	return false;
}

int main(){
	
	int arr[] = {2,4,6,8,10};
	int size = 5;
	int target = 10;
	bool ans = linearSearch(arr, size, target);
	
	if(ans==1)
	{
		cout<<"Target Found";
	}
	else{
		"Target not found"
	}
	
}
