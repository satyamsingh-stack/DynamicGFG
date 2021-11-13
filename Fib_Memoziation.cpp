//time 0(n)
#include<iostream>
using namespace std;
int memo[1000000];
int fib(int n){
	if(memo[n]==0){
		int res;
		if(n==1 || n==0)
			return n;
		else{
			res=fib(n-1)+fib(n-2);
		}
		memo[n]=res;
	}
	return memo[n];
}
int main(){
	int n;
	cin>>n;
	cout<<fib(n)<<endl;
	return 0;
}
