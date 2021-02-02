#include<bits/stdc++.h>

// A : given string to search
// B : vector of available strings
int f(string A,vector<string> &B,int n)
{
    if(n<=0)
    {
        return true;
    }
    for(int i=1;i<=n;i++)
    {
        if(find(B.begin(),B.end(),A.substr(0,i))!=B.end())
        {
          return f(A.substr(i,n-i),B,n-i);
        }
    }
    return false;
}

int wordBreak(string A, vector<string> &B) {
    //code here
    return f(A,B,A.size());
}
