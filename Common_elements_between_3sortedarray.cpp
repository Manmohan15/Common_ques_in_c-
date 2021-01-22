class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            vector<int>v;
            int i,j,k;
            i=j=k=0;
            while(i<n1 && j<n2 && k<n3)
            {
                if(A[i]==B[j] && B[j]==C[k])
                {  bool flag=false;
                    for(auto it=v.begin();it!=v.end();it++)
                {
                    if(*it==A[i])
                    {
                        flag=true;
                    }
                }
                   if(flag==false)
                   {
                    v.push_back(A[i]);
                   }
                    // cout<<v.back();
                    i++;
                    j++;
                    k++;
                }
                else if(A[i]<B[j] )
                {
                    i++;
                }
                 else if(B[j]<C[k])
                {
                    j++;
                }
                 else
                {
                    k++;
                }
            }
            // cout<<v.size();
            // cout<<endl;
            return v;
        }

};
