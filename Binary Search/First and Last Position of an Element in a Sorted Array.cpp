pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    pair<int,int> ans;
   //for First occurence
    int start=0;
    int end=n-1;
    int mid=(start)+((end-start)/2);
    int left=-1;

    while(start<=end){
        if(arr[mid]==k){
            left=mid;
            end=mid-1;

        }
        else if(k<arr[mid]){
            end=mid-1;

        }
        else{
            start=mid+1;

        }
        mid=(start)+((end-start)/2);
    }
    ans.first=left;
    
    int start1=0;
    int end1=n-1;
    int mid1=(start1)+((end1-start1)/2);
    int right=-1;
//For last occurence
    while(start1<=end1){
        if(arr[mid1]==k){
            right=mid1;
            start1=mid1+1;

        }
        else if(k<arr[mid1]){
            end1=mid1-1;

        }
        else{
            start1=mid1+1;

        }
        mid1=(start1)+((end1-start1)/2);
    }
    ans.second=right;
    return ans;
}

