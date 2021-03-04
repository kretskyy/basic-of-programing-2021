#include <iostream>

using namespace std;

int main()
{
    int n, k = 0, l = 1, rem;
    cout << "Input number in binary system:";
    cin >> n;
    while (n != 0)
    {
        rem = n % 10;
        n = n / 10;
        if (rem == 1)
        {
            k += l;
        }
        l *= 2;
    }
    cout << "Output number in decimial system:" << k;
    return 0;
}
//Input number in binary system:1010
//Output number in decimial system:10
//Input number in binary system:10
//Output number in decimial system:2
//Input number in binary system:101
//Output number in decimial system:5

