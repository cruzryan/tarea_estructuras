#include <stdio.h>
#include <stdlib.h>

// Magia bubble sort
void bubbleSort(int arr[], int n) {
  int i, j;
  for (i = 0; i < n - 1; i++)
    for (j = 0; j < n - i - 1; j++)
      if (arr[j] > arr[j + 1]) {

        //Intercambio
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
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

  int arr[1000];

  // lo llenamos con numeros random
  int k = 0;
  for (k; k < 1000; k++) {
    arr[k] = rand() % 999;
  }

  // Bubble sort
  bubbleSort(arr, n_a_ordenar);

  // Imprimimos array ordenada
  printf("Array ordenada: \n");
  imprimirArray(arr, 1000);

  return 0;
}
