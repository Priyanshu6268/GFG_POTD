class Solution{
    public:
   int mergeSort(vector<int> &v, int s, int mid, int e){
        int n = mid-s+1;
        int m = e-mid;
        
        vector<int> left(n),right(m);
        int i=0, j=0, k=s;
        
        while(i < n) left[i++] = v[k++];
        while(j < m) right[j++] = v[k++];
        
        int cnt = 0;
        i=0, j=0, k=s;
        
        while(i<n && j<m){
            if(left[i] <= right[j]){
                cnt += j;
                v[k] = left[i++];
            }
            else v[k] = right[j++];
            k++;
        }
        
        while(i < n){
            v[k++] = left[i++];
            cnt += j;
        } 
        while(j < m) v[k++] = right[j++];
        
        return cnt;
    }
    
    int merge(vector<int> &v, int s, int e){
        int res = 0;
        if(s < e){
            int m = s+(e-s)/2;
            res += merge(v,s,m);
            res += merge(v,m+1,e);
            res += mergeSort(v,s,m,e);
        }
        return res;
    }
    
    int countPairs(int arr[] , int n ) 
    {
        vector<int> v(n);
        for(int i=0; i<n; i++) v[i] = i*arr[i];
        return merge(v,0,n-1);
    }
};
