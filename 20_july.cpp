class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
       unordered_map<char,int> umap;
       char rk = '$';
       for(int i = 0 ; i <S.length() ; i++){
           umap[S[i]]++;
       }
        for (int i = 0; i < S.length(); i++)
        {
            if (umap[S[i]] == 1)
            {
                return S[i];
            }
        }
       
return rk;}

};
