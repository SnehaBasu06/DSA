int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here

    int n=a.size();
    int left=0;
    int right=0;
    long long sum=0;
    int max_len=0;
    while(right<n){
        sum=sum+a[right];
        
        while(sum>k && left<=right){
            sum=sum-a[left];
            left++;
        }
        if(sum==k){
            max_len=max(max_len,right-left+1);
        }
        right++;
    }
    return max_len;
}
