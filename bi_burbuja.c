#include <stdio.h>
#include <stdlib.h>

// magia burbuja bidireccional
void Bi(int a[], int n) {
  int intercambio = 1;
  int start = 0;
  int end = n - 1;
  while (intercambio) {
    intercambio = 0;
    // Bubble sort normal
    for (int i = start; i < end; ++i) {
      if (a[i] > a[i + 1]) {
        int tmp = a[i];
        a[i] = a[i + 1];
        a[i + 1] = tmp;

        intercambio = 1;
      }
    }
    // Si no hay intercambios entonces ya terminamos
    if (!intercambio) break;
    // Si hay intercambio, avisame
    intercambio = 0;
    // mueve el punto final 1 unidad, por que ya esta bien
    --end;
    // Bubble sort normal (pero al revez)
    for (int i = end - 1; i >= start; --i) {
      if (a[i] > a[i + 1]) {
        int tmp = a[i];
        a[i] = a[i + 1];
        a[i + 1] = tmp;

        intercambio = 1;
      }
    }
    // Incrementa el punto inicial porfa carnal
    ++start;
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

  // Bubble sort bidireccional
  Bi(arr, n_a_ordenar);

  // Imprimimos array ordenada
  printf("Array ordenada: \n");
  imprimirArray(arr, 1000);

  return 0;
}
