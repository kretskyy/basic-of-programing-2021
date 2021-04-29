#include <iostream>
#define MAX 100
using namespace std;

char* inputstr()
{
    char* line = new char[MAX];
    cout << "Enter a string: ";

    cin.getline(line, MAX);
    return line;
}

bool isNum(char sym)
{
    return (sym > '0' && sym < '9');
}

char* remNumberRepeat(char* str)
{
    char* newStr = new char[MAX];
    int j = 0;
    bool isRepeating;

    for (int i = 0; str[i] != '\0'; i++)
    {
        isRepeating = isNum(str[i]) && (str[i] == str[i - 1]);

        if (isRepeating)
        {
            continue;
        }
        newStr[j++] = str[i];
    }

    newStr[j] = '\0';
    return newStr;
}

int main()
{
    char* line = new char[MAX];
    line = inputstr();
    cout << remNumberRepeat(line) << endl;

    system("pause");
    return 0;
}