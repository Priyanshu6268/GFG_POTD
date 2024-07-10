class Dis{
  public:
  vector<int> size,p;
  Dis(int n)
  {
      size.resize(n+1,1);
      p.resize(n+1,0);
      for(int i=0;i<=n;i++) p[i]=i;
                            
  }
  int ulp(int node)
  {
      if(p[node]==node) return node;
      return p[node]=ulp(p[node]);
  }
  void ubysize(int u,int v)
  {
      int uu=ulp(u);
      int uv=ulp(v);
      if(uu==uv) return ;
      if(size[uu]>size[uv]) 
      {
          p[uv]=uu;
          size[uu]+=size[uv];
      }
      else
      {
          p[uu]=uv;
          size[uv]+=size[uu];
      }
  }
};
class Solution {
  public:
    int MaxConnection(vector<vector<int>>& grid) {
        // code here
        int ans=0;
        int n=grid.size();
        int nr[]={-1,0,1,0};
        int nc[]={0,-1,0,1};
        Dis dis(n*n);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                
            {   if(grid[i][j]==0) continue;
                int node=i*n+j;
                for(int k=0;k<4;k++)
                {
                    int adjr=i+nr[k];
                    int adjc=j+nc[k];
        
                    if(adjr>=0 && adjr<n && adjc>=0 && adjc<n && grid[adjr][adjc]==1)
                    {
                        int adjnode=adjr*n+adjc;
                        dis.ubysize(node,adjnode);
                    }
                }
                
            }
        }
        //checking with 0-->1 cases
        
           for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {   if(grid[i][j]==1) continue;
               
                int node=i*n+j;
                    set<int> set;
                for(int k=0;k<4;k++)
                {
                    int adjr=i+nr[k];
                    int adjc=j+nc[k];
                    if(adjr>=0 && adjr<n && adjc>=0 && adjc<n && grid[adjr][adjc]==1)
                    {
                        int adjnode=adjr*n+adjc;
                        // dis.ubysize(node,adjnode);
                        set.insert(dis.ulp(adjnode));
                    }
                    int temp=0;
                   for(auto i:set)
                   {
                       temp+=dis.size[i];
                   }
                   ans=max(ans,temp+1);
                }
                
            }
        }
        for(int cn=0;cn<n*n;cn++)
        {
            ans=max(ans,dis.size[dis.ulp(cn)]);
        }
        
        return ans;
        
    }
};

