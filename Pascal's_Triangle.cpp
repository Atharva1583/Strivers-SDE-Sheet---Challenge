#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
  vector<vector<long long>> ans;
  vector<long long> a;
  a.push_back(1);
  ans.push_back(a);
  if(n==1){
    return ans;
  }
  vector<long long> dp;
  dp.push_back(1);
  dp.push_back(1);
  ans.push_back(dp);
  for(int i=3;i<=n;i++){
    vector<long long> b(i);
    b[0]=1;
    b[i-1]=1;
    for(int j=1;j<i-1;j++){
      b[j]=dp[j-1]+dp[j];
    }
    dp=b;
    ans.push_back(b);
  }
  return ans;
}

