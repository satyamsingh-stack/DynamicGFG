//Time O(m*n)
#include<iostream>
using namespace std;
int ed(string s1,string s2,int m,int n){
	int dp[m+1][n+1];
	for(int i=0;i<=m;i++)
		dp[i][0]=i;
	for(int i=0;i<=n;i++)
		dp[0][i]=i;
	for(int i=1;i<=m;i++){
		for(int j=0;j<=n;j++){
			if(s1[i-1]==s2[j-1])
				dp[i][j]=dp[i-1][j-1];
			else
				dp[i][j]=1+min(dp[i-1][j], min(dp[i][j-1],dp[i-1][j-1]));	
		}
	}
	return dp[m][n];
}
int main(){
	int m,n;
	cin>>m>>n;
	string s1,s2;
	cin>>s1>>s2;
	cout<<ed(s1,s2,m,n);
	return 0;
}