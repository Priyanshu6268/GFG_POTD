//User function Template for C++
class Solution
{
    public:
    int countFractions(int n, int num[], int denom[])
    { 
    vector<double> fractions;
    for (int i = 0; i < n; i++) 
    {
        double fraction = (double)(num[i]) /(double)(denom[i]);
        fractions.push_back(fraction);
    }
    unordered_map<string, int>mp;
    int count = 0;
    for (double fraction : fractions) //string instead of double is trail and error method, double fks up, string doesnt
    {
        double target = 1.0 - fraction;
        string key = to_string(fraction);
        count += mp[key];
        mp[to_string(target)]++;
    }
    return count;
    }
};
