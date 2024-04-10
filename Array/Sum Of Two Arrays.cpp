#include <bits/stdc++.h> 
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.
	vector<int> ans;
	int num1=0;
	for(int i=0;i<n;i++){
		num1=num1+(a[i]*pow(10,(n-1-i)));

	}
	int num2=0;
	for(int i=0;i<m;i++){
         num2=num2+(b[i]*pow(10,(m-1-i)));
	}
	int num3=num1+num2;
	while(num3>0){
		ans.push_back(num3%10);
		num3=num3/10;
	}
	reverse(ans.begin(),ans.end());
    return ans;

}
