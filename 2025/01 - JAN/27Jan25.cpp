class LRUCache {
  private:
  int n;
  map<int,int>mp;
  map<int,int>freq;
  deque<int>dq;
  public:
    LRUCache(int cap) {
        this->n = cap;
    }

    // Function to return value corresponding to the key.
    int get(int key) {
        if(mp.find(key) == mp.end()){
            return -1;
        }
        dq.push_back(key);
        freq[key]++;
        return mp[key];
    }

    // Function for storing key-value pair.
    void put(int key, int value) {
        if(mp.size() < n){
            mp[key] = value;
            freq[key]++;
            dq.push_back(key);
        }else{
            if(mp.find(key) == mp.end()){
                while(mp.size() == n){
                    freq[dq.front()]--;
                    if(freq[dq.front()] == 0){
                        mp.erase(dq.front());
                    }
                    dq.pop_front();
                }
                mp[key] = value;
                freq[key]++;
                dq.push_back(key);
            }
            else{
                freq[key]++;
                mp[key] = value;
                dq.push_back(key);
            }
        }
    }
};