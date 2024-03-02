// Ordenação 0-1-2 

#include <iostream>

void troca(int L[], int i, int j) {
    int aux = L[i];
    L[i] = L[j];
    L[j] = aux;
}

int main() {
    int L[] = {0, 1, 2, 2, 1, 0, 0, 1, 2, 0, 1, 2, 2, 1, 0, 0, 1, 2};
    int n = sizeof(L) / sizeof(L[0]);
    //ordenacao0_1(L, n); // coloca os 0s nas primeiras n/3 posições (de 0 a n/3 - 1)
    int x = (n/3);
    int y = n - 1;
    int i = 0;
    int j = n - 1; 

    // ordenando 0s 
    while (i < n/3 && j >= n/3) {
        if (L[i] != 0) {
            troca(L, i, j);
            j--;
        }
        else {
            i++;
        }
    }

    // ordenando 1s 
    while ((x < (2*n/3)) && (y >= (2*n/3))) {
        if (L[x] != 1) {
            troca(L, x, y);
            y--;
        }
        else {
            x++; 
        }
    }

    std::cout << "\nORDENACAO: \n";
    for (int k = 0; k < n; k++) {
        std::cout << L[k] << " ";
    }

    return 0;
}

// Análise do algoritmo em README_ordenacao0-1-2.md