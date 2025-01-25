#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // vector<int> vec;             // first type of vector declaration
    // vector<int> vec = {1, 2, 3}; // second type of vector declaration

    // // vector<int> vec(3, 0);
    // vec.push_back(1);
    // cout << vec.size() << endl;

    // for (int i : vec)
    // {
    //     cout << i << endl;
    // }

    vector<int> v;

    v.push_back(0);
    v.push_back(3);
    v.push_back(2);
    v.push_back(21);
    v.push_back(2);

    cout << v.size() << endl;
    cout << v.capacity() << endl;

    // single number - leetcode 136
    //  logic is like

    // doing bitwise operation XORs
    // ans = 0
    // for : i=1 to n
    // ans ^= nums[i]

    return 0;
}