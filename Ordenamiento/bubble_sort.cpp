#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Si el elemento actual es mayor al siguiente, los intercambiamos
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int numeros[] = {64, 34, 25, 12, 22};
    int n = sizeof(numeros) / sizeof(numeros[0]);

    cout << "Arreglo original: ";
    for(int i=0; i<n; i++) cout << numeros[i] << " ";

    bubbleSort(numeros, n);

    cout << "\nArreglo ordenado: ";
    for(int i=0; i<n; i++) cout << numeros[i] << " ";

    return 0;
}
