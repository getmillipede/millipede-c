#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  int i = 0;
  int size = 20;
  const char *padding_offsets[8] = {"  ", " ", "", " ", "  ", "   ", "    ", "   "};

  if (argc > 1) {
    size = strtol(argv[1],NULL,10);
  }

  if (size >= 0) {
    printf("    ╚⊙ ⊙╝\n");
    for (i = 0; i < size; i++) {
      printf("%s╚═(███)═╝\n", padding_offsets[i % 8]);
    }
  } else {
    for (i = size; i <= 0; i++) {
      printf("%s╔═(███)═╗\n", padding_offsets[abs(i)%8]);
    }
    printf("    ╔⊙ ⊙╗\n");
  }
  return 0;
}
