void getNumberPattern(int n) {
    // Write your code here.
    int size=2*n-1;
    int front =0;
    int back = size-1;
    int a[size][size];
    while(n!=0){
    for(int i=front;i<=back;i++){
        for(int j=front;j<=back;j++){
          if (i == front || i == back || j == front || j == back) 
            a[i][j] = n;
        }
    }
    ++front;
    --back;
    --n;
    }

    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout<<a[i][j];
        }
        cout<<"\n";
    }
}
/*
Input: ‘N’ = 4

Output: 

4444444
4333334
4322234
4321234
4322234
4333334
4444444
*/
