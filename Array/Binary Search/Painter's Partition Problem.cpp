bool isPossible(vector<int> &arr,int n, int k,int mid){

    int painterCount=1;
    int lenSum=0;
    for(int i=0;i<n;i++){
        if(lenSum+arr[i]<=mid){
            lenSum+=arr[i];
        }
        else{
            painterCount++;
            if(painterCount>k || arr[i]>mid){
                return false;
            }
            lenSum=arr[i];
        }
        if(painterCount>k){
            return false;
        }
    }
    return true;

}

int findLargestMinDistance(vector<int> &boards, int k)
{
    //    Write your code here.
    int n=boards.size();
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=boards[i];
    }
    int start=0;
    int end=sum;
    int mid=start+(end-start)/2;
    int ans=-1;

    while(start<=end){
        if(isPossible(boards,n,k,mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-mid)/2;

    }
    return ans;
}
