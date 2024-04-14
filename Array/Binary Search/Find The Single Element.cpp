#include<vector>

int getSingleElement(vector<int> &arr){
	// Write your code here.
	int low=0;
	int high=arr.size()-1;
	int mid=low+(high-low)/2;

	while(low<high){
		if(mid%2==1){
			mid--;
		}
		if(arr[mid]!=arr[mid+1]){
			high=mid;
		}
		else{
			low=mid+2;
		}
		mid=low+(high-low)/2;
	}	
	return arr[mid];
}
