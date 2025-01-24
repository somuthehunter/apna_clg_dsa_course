#include <iostream>

using namespace std;

int decToBinary(int n)
{
    int pow = 1;
    int ans = 0;

    while (n > 0)
    {
        int rem = n % 2;
        n = n / 2;
        ans += (rem * pow);
        pow = pow * 10;
    }
    // cout << "The final value is : " << ans;
    return ans;
}

int main()
{
    int decNum = 56;

    for (int i = 2; i <= 10; i++)
    {
        cout << decToBinary(i) << " is the binary number of " << i << endl;
    }

    return 0;
}