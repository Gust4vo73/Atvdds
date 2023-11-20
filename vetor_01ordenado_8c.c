#include <stdio.h>

int main() {
  int vec[] = {3, 5, 4, 1, 9, 6, 7, 2};
  int tamanho = 8;

  printf("Vetor inicial: ");
  for (int i = 0; i < tamanho; i++) {
    printf("%d ", vec[i]);
  }
  for (int i = 0; i < tamanho - 1; i++) {
    int indiceMin = i;

    for (int j = i + 1; j < tamanho; j++) {
      if (vec[j] < vec[indiceMin]) {
        indiceMin = j;
      }
    }
    if (i != indiceMin) {
      vec[i] = vec[i] + vec[indiceMin];
      vec[indiceMin] = vec[i] - vec[indiceMin];
      vec[i] = vec[i] - vec[indiceMin];
    }
  }
  printf("\nVetor ordenado: ");
  for (int i = 0; i < tamanho; i++) {
    printf("%d ", vec[i]);
  }
  return 0;
}

