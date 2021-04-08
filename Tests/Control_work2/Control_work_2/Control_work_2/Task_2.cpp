#include <iostream>

using namespace std;

int main()
{
    int n, m, sum = 0;
    double matrix[100][100] = {};
    bool matrix1[100][100] = {};
    cout << "enter n= ";
    cin >> n;
    cout << "enter m= ";
    cin >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            {
                cout << "Matrix[" << i << "][" << j << "]= ";
                cin >> matrix[i][j];
            }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            {
                cout << "Matrix1[" << i << "][" << j << "]= ";
                cin >> matrix1[i][j];
            }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (matrix1[i][j]) 
                sum += matrix[i][j];
    cout << "Sum is = ";
    cout << sum;
    return 0;
}