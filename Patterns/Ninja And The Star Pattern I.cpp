void getStarPattern(int n) {
    // Write your code here.
    for(int i=1;i<=n;i++){
        if(i==1 || i==n){
          for (int j = 1; j <= n; j++) {
            cout << "*";
          }
        }
        else{
            cout<<"*";
            for(int k=n-2;k>0;k--){
                cout<<" ";
            }
            cout<<"*";

        }
        cout<<"\n";
        
    }
}
/*
Input: ‘N’ = 4

Output: 

****
*  *
*  *
****
*/
