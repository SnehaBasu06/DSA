int getPivot(vector<int> &arr, int n) {

    int s=0;
    int e=n-1;
    int m=s+(e-s)/2;
    while(s<e){
        if(arr[m]>=arr[0]){
            s=m+1;
        }
        else{
            e=m;
        }
        m=s+(e-s)/2;
    }
    return s;
}
int binarysearch(vector<int> &arr,int start, int end,int key){

   
    int mid= start+((end-start)/2);
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid= start+((end-start)/2);
    }
    return -1;
}
int search(vector<int> &arr, int n, int k) {
  // Write your code here.
  // Return the position of K in ARR else return -1.
  int pivot=getPivot(arr,n);
  if(k>=arr[pivot] && k<=arr[n-1]){
      return binarysearch(arr,pivot,n-1,k);
  }
  else{
      return binarysearch(arr, 0,pivot-1, k);
  }
  
}
