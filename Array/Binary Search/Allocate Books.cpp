#include <bits/stdc++.h> 
bool isPossible(vector<int>& arr,int n,int m,long long mid){
	long long chapSum=0;
	int dayCount=1;
	for(int i=0;i<m;i++){
		if(chapSum+arr[i]<=mid){
			chapSum+=arr[i];
		}
		else{
			dayCount++;
			if(dayCount>n || arr[i]>mid){
				return false;
			}
			chapSum=arr[i];
		}
		if(dayCount>n){
			return false;
		}
	}
	return true;
}


long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{	
	// Write your code here.
	long long sum=0;
	for(int i=0;i<m;i++){
		sum+=time[i];

	}

	long long start=0;
	long long end=sum;
	long long mid=(start)+(end-start)/2;
	long long ans=-1;

	while(start<=end){
		if(isPossible(time,n,m,mid)){
			ans=mid;
			end=mid-1;
		}
		else{
			start=mid+1;
		}
		mid=start+(end-start)/2;
	}
	return ans;
}
