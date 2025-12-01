#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <stack>
#include <vector>
#include <list>
#include <deque>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <utility>
#include <memory>
#include <chrono>
#include <cstdio>
using namespace std;

class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int counter = 0; int flag = 0;
        for (int i = (s.size()-1);i>=0; i--)
        {
            if(s[i] != ' '){

                counter++;
                flag = 1;
            }
            else if(flag) break;
        }
        return counter;
    }
};

int main()
{

    Solution sol;
    string s = "   fly me   to   the moon  ";
    int ans = sol.lengthOfLastWord(s);
    cout << ans << endl;
    return 0;
}