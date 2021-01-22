int findLongestConseqSubseq(int arr[], int N)
{
  //Your code here
  map<int,int>m;
  int max_e=INT_MIN;
  for(int i=0;i<N;i++)
  {
      m[arr[i]]++;
      max_e=max(max_e,arr[i]);
  }
  int i=0;
  int max_count=0;
  while(i<=max_e)
  {
      int count=0;
      if(m[i]!=0)
      {
          count+=1;
          i++;
          while(m[i]!=0 && i<=max_e)
          {
              count++;
              i++;
          }
          max_count=max(max_count,count);
      }
      else
      {
          i++;
      }
      
  }
  return max_count;
}
