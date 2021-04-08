//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int main() 
//{                                         
//    int** matrix, * vector, * res_vector, n, m, k;
//    cout << "n = ";
//    cin >> n;                                          
//    cout << "m = ";
//    cin >> m;    
//    cout << "k = ";
//    cin >> k;
//    matrix = new int* [n];                                   
//    for (int i = 0; i < n; ++i)
//        matrix[i] = new int[m];                               
//
//    vector = new int[k];                                    
//
//    cout << "vector:" << endl;
//    for (int i = 0; i < k; ++i) {
//        vector[i] = 1 + rand() % 9;                            
//        cout << setw(3) << vector[i];
//    }
//
//    res_vector = new int[n];                                
//
//    cout << "\nmatrix:" << endl;
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < m; ++j) {
//            matrix[i][j] = 1 + rand() % 9;                      
//            cout << setw(3) << matrix[i][j];          
//        }
//        cout << endl;
//    }
//    std::cout << endl;
//
//    for (int i = 0; i < n; ++i)                            
//        res_vector[i] = 0;
//    cout << "result: " << endl;
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < m; ++j)
//            for (int l = 0; l < k; ++l)
//                res_vector[i] += matrix[i][j] * vector[l];          
//        cout << res_vector[i] << ' ';                    
//    }
//
//
//    delete[] res_vector;                                    
//    delete[] vector;
//    for (int i = 0; i < n; ++i)
//        delete[] matrix[i];
//    delete[] matrix;
//}