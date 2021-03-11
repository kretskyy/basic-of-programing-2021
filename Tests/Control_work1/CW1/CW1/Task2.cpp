#include <iostream>
using namespace std;
int main() 
{
    int num;
    cout << "Number:";
    cin >> num;
    cout << "Number of terms" <<" "<< num / 2 << endl; //Максимальна к-сть простих доданків
    while (num > 3) 
    {
        cout << 2 << " ";
        num = num - 2;
    }
    cout << num; //Перелік простих доданків
    return 0;
}
//Number:99
//Number of terms 49
//2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 3
//Number:45
//Number of terms 22
//2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 3
