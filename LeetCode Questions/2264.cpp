// 2264. Largest 3 - Same - Digit Number in String

#include "headers/myheaders.h"
using namespace std;

class Solution
{
public:
    string largestGoodInteger(string num)
    {
        string temp, ans;
        for(int i = 0; i< num.size(); i++){
            if((num[i] == num[i+1]) && (num[i] == num[i+2])){
                string temp = num.substr(i, 3);
                if(ans.empty()||temp>ans){
                    ans = temp;
                }
            }
        }
        return ans;   
    }
};

int main()
{

    Solution sol;
    string input = "6777133339";

    string ans = sol.largestGoodInteger(input);

    cout << ans << endl;

    return 0;
}