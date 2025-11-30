#include "headers/myheaders.h"
using namespace std;

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.size() != t.size())
            return false;
        unordered_map<char, int> freq;
        for (int i = 0; i < s.size(); i++)
        {
            freq[s[i]]++;
            freq[t[i]]--;
        }
        for (auto &p : freq)
        {
            if (p.second != 0)
                return false;
        }
        return true;
    }
};

int main()
{
    Solution sol;
    string s = "aacc";
    string t = "ccac";
    if (sol.isAnagram(s, t))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}