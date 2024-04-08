#include <bits/stdc++.h> 
bool isPossible(vector<int> &arr,int n,int m,int mid){
    int dishes=0;
    for(int i=0;i<n;i++){
        int timeTaken=0;

        int j=1;
        while(timeTaken<mid){
            int t=arr[i]*j;
            timeTaken=timeTaken+t;
            j++;
            if(timeTaken<=mid){
            dishes++;
            }
            
        }
        if(dishes>=m){
            return true;
        }
    
    }
    return false;
       

   }
   


int minCookTime(vector<int> &rank, int m)
{
    // Write your code here
    int n=rank.size();
    sort(rank.begin(),rank.end());
    int start=0;
    int end=rank[n-1]*(m*(m+1)/2);
    int mid=start+(end-start)/2;
    int ans=-1;

    while(start<=end){
        if (isPossible(rank,n,m,mid)){
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
