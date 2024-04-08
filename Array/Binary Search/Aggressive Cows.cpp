bool isPossible(vector<int> &arr,int n,int k,int mid){
    
    int cowCount=1;
    int lastPosition=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]-lastPosition>=mid){
            cowCount++;
            if(cowCount==k){
                return true;
            }
            lastPosition=arr[i];
        }

    }
    return false;

}

int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.
    int n=stalls.size();
    sort(stalls.begin(),stalls.end());
    int start=0;
    int end= stalls[n-1];
    int mid=start+(end-start)/2;
    int ans =-1;
    while(start<=end){
        if(isPossible(stalls,n,k,mid)){
            ans=mid;
            start=mid+1;

        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
