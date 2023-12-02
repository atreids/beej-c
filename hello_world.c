#include <stdio.h>
#include <stdbool.h>

int main(void) {
    bool x = true;
    int i = 2;
    float f = 3.14;
    char *s = "Hello, world!";
    int k = 999;

    printf("%zu\n", sizeof(bool));

    // int y = 2 * ++k;
    // printf("%d\n", k);
    // printf("%d\n", y);

    i = 0;

    while (i < 10) {
        printf("i is now %d!\n", i);
        i++;
    }

    int r;

    do {
        r = rand() % 100; // Get a random number between 0 and 99
        printf("%d\n", r);
    } while (r != 37);    // Repeat until 37 comes up


    if(x){
        printf("%s i = %d and f = %f!\n", s, i, f);
    }
}
