#include <iostream>
using namespace std;

int main1()
{
    cout << "Input 2 numbers" << endl;
    int x, y, arr[10] = { 0 };

    cin >> x;
    cin >> y;
    while (x > 0)
    {
        arr[x % 10]++;
        x /= 10;
    }
    while (y > 0)
    {
        arr[y % 10]++;
        y /= 10;
    }
    for (int i = 0; i < 10; i++)
        if (arr[i] > 1)
            cout << i << "    ";
        else
        {
            cout << "No equal numbers" << endl;
            break;
        }

    system("pause");
    return 0;
}
//Input: Input 2 numbers: 125 and 325
//Output: 2 5
//Input: Input 2 numbers: 4987 and 5301
//Output: No equal numbers