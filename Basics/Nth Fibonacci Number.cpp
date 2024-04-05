#include<bits/stdc++.h>
using namespace std;

int main()
{
        /*
        *  Write your code here. 
         *  Read input as specified in the question.
         *  Print output as specified in the question.
        */
        int n;
        cin>>n;
        int f1=0;
        int f2=1;
        int ans=f2;

        for(int i=1;i<n;i++){
            ans=f1+f2;
            f1=f2;
            f2=ans;

        }
        cout<<ans;

}
