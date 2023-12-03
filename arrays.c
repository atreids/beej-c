#include <stdio.h>


void pointers(void){
    int a[5] = {1,2,3,4,5};
    int *p;

    printf("%d", *p);
}

void arrays(void){
    char a[5] = {'a'};
    int i;
    int *p;

    for(i = 0; i < 5; i++){
        printf("%c\n", a[i]);
    }
}

int main(void)
{
    arrays();
    // int i;
    // float f[4];  // Declare an array of 4 floats

    // f[0] = 3.14159;  // Indexing starts at 0, of course.
    // f[1] = 1.41421;
    // f[2] = 1.61803;
    // f[3] = 2.71828;

    // // Print them all out:

    // for (i = 0; i < 4; i++) {
    //     printf("%f\n", f[i]);
    // }

    // int x[12];

    // printf("%zu\n", sizeof(int [12]));
    // printf("%zu\n", sizeof(int));

    // printf("%zu\n", sizeof x / sizeof(int));
}