void nLetterTriangle(int n) {
    // Write your code here.
    for(int i=n;i>0;i--){
        char ch= 'A';
        for(int j=1;j<=i;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<"\n";
    }
}
/*
Input: ‘N’ = 3

Output: 

A B C
A B
A
*/
