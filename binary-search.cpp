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

int binarySearch(int arr[], int size, int target)
{
    int left = 0;
    int right = size - 1;
    while (left <= right)
    {
        int mid = left + ((right - left) / 2);
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
}

int main()
{

    int data[] = {12, 23, 34, 56, 78, 89};
    int size = sizeof(data) / sizeof(data[0]);
    int target = 56;
    int result = binarySearch(data, size, target);
    if (result != -1)
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;
    return 0;
}