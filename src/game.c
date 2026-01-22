#include "stdio.h"
#include "rand.c"

int main() {
    printf("seed: %d", rand_seed);
    return 0;
}