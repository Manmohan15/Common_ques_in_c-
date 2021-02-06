class Solution{
public:		

		
	int lps(string s)
	{
	    // Your code goes here
	    int lps[s.size()];
	    
	    int len=0;
	    int i=1;
	    int m=0;
	    lps[0]=0;
	    while(i<s.size())
	    {
	        if(s[i]==s[len])
	        {
	            len+=1;
	            lps[i]=len;
	            if(lps[i]>m)
	            {
	                m=lps[i];
	            }
	            i+=1;
	            
	        }
	        else
	        {
	            if(len!=0)
	            {
	                len=lps[len-1];
	            }
	            else
	            {  lps[i]=0;
	                i+=1;
	            }
	        }
	    }
	    return (lps[s.size()-1]);
	}
};
