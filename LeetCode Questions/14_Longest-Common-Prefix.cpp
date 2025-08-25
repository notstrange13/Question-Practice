#include "headers/myheaders.h"
using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        if (strs.size() == 0)
            return "";
        string prefix = strs[0];
        for (int i = 1; i < strs.size(); i++)
            while (strs[i].find(prefix) != 0)
            {
                prefix = prefix.substr(0, prefix.length() - 1);
                if (prefix.empty())
                    return "";
            }
        return prefix;
    }
};

int main()
{

    Solution s;
    vector<string> strs;
    strs = {"flower", "flow", "flight"};

    for (int i = 0; i < strs.size(); i++)
        cout << strs[i] << " ";

    cout<<endl;
    
    string ans = s.longestCommonPrefix(strs);

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i];
    return 0;
}