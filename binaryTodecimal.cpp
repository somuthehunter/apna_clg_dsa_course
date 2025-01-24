#include <iostream>
using namespace std;

int binaryTodecimal(int binaryNum)
{
    int ans = 0, pow = 1;
    while (binaryNum > 0)
    {
        int rem = binaryNum % 10;
        ans += pow * rem;
        binaryNum /= 10;
        pow *= 2;
    }
    return ans;
}

int main()
{
    int binaryNum = 111000;
    cout << "The decimal number is : " << binaryTodecimal(binaryNum) << endl;
    return 0;
}