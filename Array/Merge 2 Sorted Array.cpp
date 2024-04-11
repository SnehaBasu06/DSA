vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
    int n=a.size();
    int m=b.size();
    vector<int> temp(n+m);
    for(int i=0;i<n;i++){
        temp[i]=a[i];
    }
    for(int j=0;j<m;j++){
        temp[n+j]=b[j];

    }
    sort(temp.begin(),temp.end());
    vector<int> ans;
    int k=0;
    while(k<n+m){
        if(k>0 && temp[k]==temp[k-1]){
            k++;
            continue;
        }
        else{
            ans.push_back(temp[k]);
            k++;
        }

    }
    return ans;
    
}
