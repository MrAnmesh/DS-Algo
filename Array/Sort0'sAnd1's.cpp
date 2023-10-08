// sort 0's and 1's...

#include<iostream>
using namespace std;

void sortZeroOne(int arr[], int n){
	
	int zeroCount = 0;
	int oneCount = 0;
	
	// Count zero and one...
	
	for(int i = 0; i<n; i++){
		if(arr[i] == 0)
			zeroCount++;
		if(arr[i] == 1)
			oneCount++;
	}
	// Place all zero's first...
	int i;
    for(i =0; i<zeroCount; i++) {
  		arr[i] = 0;
	}
	// Place all one's first...
	for(int j = 0; j<n; j++){
		arr[j] = 1;
	}
}


int main(){
	
	int arr[] = {0,1,1,1,1,0,0,0,1,0,1,0,1,0};
	int n = 14;
	
	sortZeroOne(arr, n);
	
	for(int i = 0; i<n; i++){
	
	cout<<arr[i]<<endl;
}
}
