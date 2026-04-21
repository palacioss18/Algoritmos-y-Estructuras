# 📊 Arrays (Arreglos)

Los **arrays** (o arreglos) son una estructura de datos lineal que permite almacenar múltiples valores del **mismo tipo** en una sola variable.

---

## 🧠 Concepto

Un array es una colección de elementos organizados de forma **secuencial** en memoria.

Cada elemento se accede mediante un **índice**, que comienza desde **0**.

📌 Ejemplo:

#include <iostream>
using namespace std;

int main(){
    int numeros[5] = {1,2,3,4,5};

    for(int i = 0; i < 5; i++){
        cout << numeros[i] << endl;
    }

    return 0;
}
