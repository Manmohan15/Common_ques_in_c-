bool ispar(string x)
{
    // Your code here
stack<int>s;
map<char,char>m;
m['{']='}';
m['[']=']';
m['(']=')';
for(int i=0;i<x.size();i++)
{   if(m.find(x[i])!=m.end()){
    s.push(x[i]);
}
    else if(m.find(x[i])==m.end())
    { 
        if(s.empty())
        {
        return false;
    }
    else if(m[s.top()]!=x[i]){
        return false;
    }
    else{
        s.pop();
    }
    
    }
    
}
if(!s.empty())
{
    return false;
}
return true;
}
