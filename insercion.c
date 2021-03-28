#include <stdio.h>
#include <stdlib.h>

// Magia incersion
void insertionSort(int arr[], int n)
{
    int i, k, j;
    for (i = 1; i < n; i++) {
        k = arr[i];
        j = i - 1;
 
        while (j >= 0 && arr[j] > k) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = k;
    }
}

void imprimirArray(int arr[], int size) {
  int i;
  for (i = 0; i < size; i++) printf("%d ", arr[i]);
  printf("\n");
}

int main() {
  int n_a_ordenar = 0;
  printf("\nIngrese el numero de enteros a ordenar:\n");
  scanf("%d", &n_a_ordenar);

  // creamos arreglo con N elementos
  int *arr;
  arr = (int *)malloc(n_a_ordenar * sizeof(int));

  // lo llenamos con numeros random
  int k = 0;
  for (k; k < n_a_ordenar; k++) {
    arr[k] = rand() % 999;
  }

  // Insertion
  insertionSort(arr, n_a_ordenar);

  // Imprimimos array ordenada
  printf("Array ordenada: \n");
  imprimirArray(arr, n_a_ordenar);

  return 0;
}
