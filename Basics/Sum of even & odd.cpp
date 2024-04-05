#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
	cin>>n;
	int num=n;
	int rem;
	int even=0;
	int odd=0;
	while(num>0){
		rem=num%10;
		if(rem%2==0){
			even=even+rem;
		}
		else{
			odd=odd+rem;
		}
		num=num/10;
		
	}
	cout<<even<<" "<<odd;
	return 0;
	
}
