#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//hello

long long max69number(int num){
    vector<int> digits;
    double answer;
    if(num>0){
        while(num>0){
            digits.push_back(num%10);
            num/=10;
        }
        reverse(digits.begin(), digits.end());
    }
    for(int i =0; i<digits.size()-1; i++){
        if(digits[i]==9 && digits[i+1]==6){
            num [i+1]=9;
            break;
        }
    }
    for (int digit : digits)
    {
        answer = answer * 10 + digit;
    }
    return;
}
int main(){
    int num = 9669;
    vector<int> ans = max69number(num);
    for(int i=0; i<digits.size(); i++){
        cout<<digits[i]<<" ";
    }
    cout<<endl;
    return 0;
}