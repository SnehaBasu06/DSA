void nStarTriangle(int n) {
    // Write your code here.
    for(int i=n;i>0;i--){
        for(int k=0;k<n-i;k++){
            cout<<" ";
        }
        for(int j=1;j<2*i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}
/*
Input: ‘N’ = 3

Output: 

*****
 ***
  *

*/

