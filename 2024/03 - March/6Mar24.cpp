class Solution
{
    public:
        vector <int> search(string pattern, string text)
        {
            //code here.
                          vector<int> ans;
            for(int i = 0; i < text.size(); i++)
            {
                string temp = text.substr(i,pattern.size());
                if(temp == pattern)
                {
                    ans.push_back(i+1);
                }
            }
            return ans;

        }
     
};
