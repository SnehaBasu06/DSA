#include <iostream>
using namespace std;
int Maximum(int a, int b){
	if(a>b){
		return a;
	}
	else{
		return b;
	}
}

void Swap(int &a,int &b){
	int temp = a;
	a=b;
	b=temp;
}

int main()
{
	int test, a, b, r;
	cin >> test;
	cin >> a >> b;
	switch (test)
	{
	case 1:
		r = Maximum(a, b);
		cout << r;
		break;
	case 2:
		Swap(a, b);
		cout << a << " " << b;
		break;
	default:
		cout << "Invalid test option";
	}
	return 0;
}

