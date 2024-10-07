/**************************************
* Автор: Алексеев Д.К.                *
* Дата: 07.10.2024                    *
* Название: Лаба 5 Обработка массивов *
**************************************/
#include<iostream>
using namespace std;

int main() {

    int matrix[3][3] = {
        {1, -2, 3},
        {4, 5, -6},
        {7, -8, 9}
    } ;

    cout << "Исходная матрица" << endl ;
    for (int i = 0 ; i < 3 ; i++) {
        for (int j = 0 ; j < 3 ; j++) {
            cout << matrix[i][j] << " " ;
        }
        cout << endl ;
    }
    
    int sums[3] = {0} ;
    
    for (int j = 0; j < 3; j++) {
        for (int i = 0; i < 3; i++) {
            if (matrix[i][j] > 0) {
                sums[j] += matrix[i][j] ;
            }
        }
    }
    
    cout << "Суммы положительных элементов по столбцам:" << endl ;
    for (int j = 0; j < 3; j++) {
        cout << sums[j] << " " ;
    }
    cout << endl;
    
    return 0;
}
