#include <stdio.h>
#include <stdlib.h>

#define R 1.0

int is_in_circle(double x, double y) {
    return x * x + y * y < R;
}

int main(int argc, char *argv[]) {
    if (argc < 3) {
        fprintf(stderr, "Podaj seed i liczbę iteracji jako argumenty!\n");
        return 1;
    }

    unsigned long seed = strtoul(argv[1], NULL, 10);
    unsigned long N = strtoul(argv[2], NULL, 10);
    srand(seed);

    unsigned long in = 0;

    for (unsigned long i = 0; i < N; i++) {
        double x = (double) rand() / RAND_MAX;
        double y = (double) rand() / RAND_MAX;

        if (is_in_circle(x, y))
            in++;
    }

    printf("%lu\n%lu\n", in, N);
    // printf("%f\n", (double) in * 4.0 / (double) N);
    return 0;
}
