#include <stdio.h>
#include <stdlib.h>

// Magia selection
void selectionSort(int arr[], int n) {
  int i, j, min_idx;

  for (i = 0; i < n - 1; i++) {
    // Encuentra el elemento minimo
    min_idx = i;
    for (j = i + 1; j < n; j++)
      if (arr[j] < arr[min_idx]) min_idx = j;

    // Cambia el minimo con el primer elemento
    int tmp = arr[min_idx];
    arr[min_idx] = arr[i];
    arr[i] = tmp;
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

  // Selection Sort!!!!
  selectionSort(arr, n_a_ordenar);

  // Imprimimos array ordenada
  printf("Array ordenada: \n");
  imprimirArray(arr, n_a_ordenar);

  return 0;
}
