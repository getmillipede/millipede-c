#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  unsigned int i;
  size_t size = 20;
  char *padding_offsets[8] = {"  ", " ", "", " ", "  ", "   ", "    ", "   "};

  if (argc > 1) {
    size = abs(atoi(argv[1]));
  }

  printf("    ╚⊙ ⊙╝\n");
  for (i = 0; i < size; i++) {
    printf("%s╚═(███)═╝\n", padding_offsets[i % 8]);
  }
  return 0;
}
