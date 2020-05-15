#include<stdio.h>
#include<stdlib.h>

size_t maxSeq(int * array, size_t n);

int main() {
  int array1[] = {2, 3, 4, 2};
  int array2[] = {2, 1, 3, 4, 5};
  int array3[] = {-1};
  int array4[] = {1, 2, 3, 6, 13, 15, 7, -3, 9, 2};
  int array5[] = {4};
  int array6[] = {5, 5, 5, 6};
  if (maxSeq(NULL, 0)) {
    printf("Failed on NULL\n");
    exit(EXIT_FAILURE);
  }
  if (maxSeq(array1, 0)) {
    printf("Failed on 2, 3, 4, 2 for NULL\n");
    exit(EXIT_FAILURE);
  }
  if (maxSeq(array1, 4) != 3) {
    printf("Failed on 2, 3, 4, 2\n");
    exit(EXIT_FAILURE);
  }
  if (maxSeq(array2, 5) != 4) {
    printf("Failed on 2, 1, 3, 4, 5\n");
    exit(EXIT_FAILURE);
  }
  if (maxSeq(array3, 1) != 1) {
    printf("Failed on -1\n");
    exit(EXIT_FAILURE);
  }
  if (maxSeq(array4, 10) != 4) {
    printf("Failed on 1, 2, 3, 6, 13, 15, 7, -3, 9, 2\n");
    exit(EXIT_FAILURE);
  }
  if (maxSeq(array5, 1) != 1) {
    printf("Failed on 4\n");
    exit(EXIT_FAILURE);
  }
  if (maxSeq(array6, 4) != 2) {
    printf("Failed on 5, 5, 5, 6\n");
    exit(EXIT_FAILURE);
  }
  return EXIT_SUCCESS;
}
