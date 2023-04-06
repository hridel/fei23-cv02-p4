#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int randomNumber;
    int attempts = 1, repeats = 1, estimate, iterator;
    int maxR = 20;

    iterator = maxR;
    estimate = iterator / 2;
    iterator = iterator / 2;

    srand(time(NULL));
    randomNumber = rand() % maxR + 1;
    while (repeats) {
        if (estimate < randomNumber) {
            printf("Zadej VĚTŠÍ číslo, hledané: %d\n", estimate);
            attempts++;
            estimate = estimate + iterator / 2;
        } else {
            if (estimate > randomNumber) {
                printf("Zadej MENŠÍ číslo, hledané: %d\n", estimate);
                attempts++;
                estimate = estimate - iterator / 2;
            } else {
                printf("A je to na %d. pokus, nalezené: %d", attempts, estimate);
                repeats = 0;
            }
        }
        iterator = iterator / 2;

        if (iterator == 1) {
            iterator = 2;
        }
    }
    return 0;
}
