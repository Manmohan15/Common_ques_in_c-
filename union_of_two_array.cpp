
int doUnion(int a[], int n, int b[], int m1)  {
    //code here
    map<int,int> m;
    for(int i=0;i<n;i++)
    {
        m[a[i]]+=1;
    }
    for(int i=0;i<m1;i++)
    {
        m[b[i]]+=1;
    }
    int count=0;
    for(auto it=m.begin();it!=m.end();it++)
    {
        if(it->second!=0)
        {
            count+=1;
        }
    }
    return count;
    
}
