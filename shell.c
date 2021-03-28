#include <stdio.h>
#include <stdlib.h>

// Magia Shell
int shellSort(int arr[], int n) {
  // Ve reduciendo el espacio de busqueda
  for (int gap = n / 2; gap > 0; gap /= 2) {
      
      //Busca dentro del espacio
    for (int i = gap; i < n; i += 1) {
      // pon a[i] en el espacio ya ordenado
      // guarda temp y has un hueco en la posicion i
      int temp = arr[i];

      // intercambia hasta que el a[i] correcto sea encontrado
      int j;
      for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
        arr[j] = arr[j - gap];

      // pon el valor temporal en la posicion correcta
      arr[j] = temp;
    }
  }
  return 0;
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

  // Shell!!!!
  shellSort(arr, n_a_ordenar);

  // Imprimimos array ordenada
  printf("Array ordenada: \n");
  imprimirArray(arr, n_a_ordenar);

  return 0;
}
