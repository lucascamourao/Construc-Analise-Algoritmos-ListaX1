// Ordenation 0-1-2
// Ordenação 0-1-2 

#include <iostream>

void swap(int L[], int i, int j) {
    int aux = L[i];
    L[i] = L[j];
    L[j] = aux;
}

int main() {
    int L[] = {0, 1, 2, 2, 1, 0, 0, 1, 2, 0, 1, 2, 2, 1, 0, 0, 1, 2};
    int n = sizeof(L) / sizeof(L[0]);
    int x = (n/3);
    int y = n - 1;
    int i = 0;
    int j = n - 1; 

    // ordenating 0s
    while (i < n/3 && j >= n/3) {
        if (L[i] != 0) {
            swap(L, i, j);
            j--;
        }
        else {
            i++;
        }
    }

    // ordenating 1s 
    while ((x < (2*n/3)) && (y >= (2*n/3))) {
        if (L[x] != 1) {
            swap(L, x, y);
            y--;
        }
        else {
            x++; 
        }
    }

    std::cout << "\nORDENATION: \n";
    for (int k = 0; k < n; k++) {
        std::cout << L[k] << " ";
    }

    return 0;
}

// Análise do algoritmo em README_ordenacao0-1-2.md
// Algorithm analysis in README_ordenation0-1-2.md
