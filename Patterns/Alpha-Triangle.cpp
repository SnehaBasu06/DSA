void alphaTriangle(int n) {
    // Write your code here.
    char ch1='A';
    for(int i=1;i<=n;i++){
        char ch = ch1+n-1;
        for(int j=1;j<=i;j++){
            cout<<ch<<" ";
            ch--;

        }
        cout<<"\n";
    }
}
/*
Input: ‘N’ = 3

Output: 
C
C B 
C B A
*/
