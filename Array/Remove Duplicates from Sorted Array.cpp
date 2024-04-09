#include <bits/stdc++.h>
int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	sort(arr.begin(),arr.end());
	int ans=1;
    int i=0;
	while(i<n){
		if(i>0 && arr[i]!=arr[i-1]){
			ans++;

		}
		i++;
	}
	return ans;
		
		
	
}
