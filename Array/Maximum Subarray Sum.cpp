long long maxSubarraySum(vector<int> arr, int n)
{
    // Write your code here.
    long long max_sum=LONG_MIN;
    long long sum=0;
    for(int i=0;i<n;i++){
        sum=max((long long)arr[i],sum+arr[i]);
        max_sum=max(max_sum,sum);
    }
    if(max_sum<0){
        max_sum=0;
    }
    return max_sum;
}
