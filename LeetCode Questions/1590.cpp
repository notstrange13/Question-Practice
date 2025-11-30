#include "headers/myheaders.h"

class Solution
{
public:
    int minSubarray(vector<int> &nums, int p)
    {
        long long sum1, sum2 = 0;
        int diff = 0;
        int ans = -1;
        int counter = 0;
        int rem = 0;
        int prefix =0;
        vector<int> cArr;
        unordered_map<int, int> hmap;
        if (nums.size() == 0)
        {
            return 0;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            sum1 = sum1 + nums[i];
        }
        rem = sum1 % p;
        if(rem == p){
            return 0;
        }
        for(int i = 0; i<nums.size(); i++){
            int j = 0;
            sum2 += (nums[i]%p);
            cArr.push_back(sum2%p);
            prefix = abs(sum2-rem)%p;
            auto bol = hmap.find(sum2);
            if(bol != hmap.end()){
                continue;
            }
            else{
                hmap[sum2] = j;
            }
            j++;
            cout<<"1end"<<endl;
        }
        for(int i = 0; i<cArr.size(); i++){
            if(rem == (sum1-cArr[i])){
                cout<<"2end"<<endl;
                return ++i;
            }
            else continue;
        }
        return ans; 
          
    }   
};

int main()
{
    Solution sol;
    vector<int> testArr = {6, 3, 5, 2};
    int testP = 9;
    int ans = sol.minSubarray(testArr, testP);
    cout<<ans;
    //ans = 2
}