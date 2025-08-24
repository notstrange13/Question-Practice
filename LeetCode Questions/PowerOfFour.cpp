#include <iostream>
using namespace std;

void isPowerOfFour(int n){
    if (n == 1)
    {
        cout<<"true"<<endl;
    }
    else
    {
        while (((n != 0 )&&(n % 4 == 0)) || n==1)
        {
            n = n / 4;
        }
        if(n==0){
            cout<<"true"<<endl;
        }
    }
    cout<<"false"<<endl;
}

int main()
{
    int n = -2147483648;
    isPowerOfFour(n);

    return 0;
}