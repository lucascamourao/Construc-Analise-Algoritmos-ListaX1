// Ordenation 0-1
// Ordenação 0-1

#include <iostream>

void swap(int L[], int i, int j) {
    int aux = L[i];
    L[i] = L[j];
    L[j] = aux;
}

int main() {
    int L[] = {0, 1, 1, 0, 1, 0, 0, 1, 1, 0, 1, 0, 0, 1, 1, 1, 1, 0, 0, 0, 1, 0, 1, 0};
    int n = sizeof(L) / sizeof(L[0]);
    int i = 0;
    int j = n - 1; 

    while (i < n/2 && j >= n/2) {
        if (L[i] != 0) {
            swap(L, i, j);
            j--;
        }
        else {
            i++;
        }
    }

    for (int i = 0; i < n; i++) {
        std::cout << L[i] << " ";
    }

    return 0; 
}

// Análise do algoritmo em README_ordenacao0-1.md
// Algorithm analysis in README_ordenation0-1.md
