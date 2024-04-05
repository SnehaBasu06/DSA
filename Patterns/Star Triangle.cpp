void nStarTriangle(int n) {
    // Write your code here.

   for(int i=1;i<=n;i++){
       for(int k=n-i;k>0;k--){
           cout<<" ";
       }
       for(int j=1;j<(2*i);j++){
           cout<<"*";
       }
       cout<<"\n";
   }
}
/*
Input: ‘N’ = 3

Output: 

  *
 ***
*****

*/
