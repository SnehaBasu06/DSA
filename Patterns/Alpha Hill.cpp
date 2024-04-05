void alphaHill(int n) {
    // Write your code here.
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            cout<<" ";
        }
        char ch1='A';
        for(int j=1;j<=i;j++){
            cout<<ch1<<" ";
            ch1++;
        }
        char ch2=ch1-2;
        for(int j=2;j<=i;j++){
            cout<<ch2<<" ";
            ch2--;
            

        }
        cout<<"\n";
    }
}

/*
Input: ‘N’ = 3

Output: 
    A
  A B A
A B C B A
*/
