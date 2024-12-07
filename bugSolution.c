#include <stdio.h>

int main() {
  int x = 10;
  int *ptr = &x; // Correctly assigns the address of x to ptr

  if (ptr != NULL) { //Check for null pointer
    *ptr = 20;  // Modify the value at the address pointed to by ptr
  }
  else {
    printf("Error: Null pointer encountered.\n");
    return 1; // Indicate an error
  }

  printf("%d\n", x); // Output: 20
  return 0;
}
