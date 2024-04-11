vector<int> moveZeros(int n, vector<int> a) {
    // Write your code here.
    int i=0;
    for(int j=0;j<n;j++){
        if(a[j]!=0){
            swap(a[i],a[j]);
            i++;
        }
    }
    return a;
}
