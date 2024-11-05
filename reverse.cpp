//to reverse a no
#include<iostream>
using namespace std;
int main() {
	int n,r;
	cout<<"enter the natural no\n";
	cin>>n;
	while(n!=0)
	{
		r=n%10;
		cout<<r;
		n=n/10;
	}
}
