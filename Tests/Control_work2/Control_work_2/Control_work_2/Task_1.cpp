//#include <iostream>
//using namespace std;
//
//int main()
//{
//
//    int n, k = 0;
//    cout << "enter n= ";
//    cin >> n;
//
//    int* arr = new int [n];
//    int* arr1 = new int[n];
//
//    //read array
//    for (int i = 0; i < n; i++)
//    {
//            cout << "enter array[" << i << "]=";
//            cin >> arr[i];
//    }
//
//    //print array
//    for (int i = 0; i < n; i++)
//    {
//            cout << arr[i] << '\t';
//    }
//    cout << endl;
//
//    //елементи, більші ніж сума сусідніх
//    for (int i = 0; i < n - 1; i++)
//    {
//        if (arr[i] > (arr[i - 1] + arr[i + 1]))
//        {
//            arr1[k] = arr[i];
//            k++;
//        }
//    }
//    //print array1
//    for (int i = 0; i < k; i++)
//    {
//        cout << arr1[i] << '\t';
//    }
//    cout << endl;
//
//    //delete array
//    delete[] arr;
//    system("pause");
//    return 0;
//
//}