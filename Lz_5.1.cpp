// 1. Знайти найбільший елемент одновимірного масиву.//

#include <iostream>
#include <windows.h>

using namespace std;

int main() {

    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int k;
    int* arr;

   
    cout << "Розмір масиву: ";
    cin >> k;
    arr = new int[k];

    cout << "Введіть " << k << " елементів масиву:" << endl;
    for (int i = 0; i < k; i++) {
        cout << "Елемент " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Mасив:" << endl;
    for (int i = 0; i < k; i++) {
        cout << arr[i] << " ";
    }

    int maxElement = arr[0]; 
    for (int i = 1; i < k; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    cout << "\nНайбільший елемент масиву: " << maxElement << endl;

    delete[] arr;

    return 0;
}