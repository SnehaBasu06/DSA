long long int binarySearch(int n){
    int s=0;
    int e=n;
    int ans=-1;
    long long int mid=s+(e-s)/2;
    while(s<=e){
        long long int square=mid*mid;
        if(square==n){
            return mid;
        }
        if(square<=n){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;

    }
    return ans;
}

int floorSqrt(int n)
{
    // Write your code here.
    return binarySearch(n);
}