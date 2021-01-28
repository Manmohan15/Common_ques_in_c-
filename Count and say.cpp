class Solution {
public:
    string countAndSay(int n) {
        string prev="1";
        int i=1;
        while(i<n){
            prev+='x';
            
            string s="";
            int j=0;
            int count=1;
            while(j<prev.size()-1)
            {
                // cout<<"j"<<j<<endl;
                
                while(prev[j]==prev[j+1])
                {
                    count+=1;
                    j+=1;
                }
                if(count>1)
                {
                s+=count+'0';
                s+=prev[j];
                count=1;
                // cout<<"jsnfis"<<s<<endl;
                j+=1;
                    
                }
                else
                {
                    s+=count+'0';
                    s+=prev[j];
                    count=1;
                    // cout<<"kmf"<<s<<endl;
                   
                    j+=1;
                }
                
                
            }
            // cout<<"prev"<<prev<<endl;
            prev=s;
            // cout<<"s"<<s<<endl;
            s="";
            cout<<s<<endl;
            i+=1;
                
        }
        return prev;
    }
};
