
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int randchar();


int randchar(){

    srand ( time(NULL) );


    int i;

    for (i = 0;i<7;i++) {
        char rletter = "ABCDEFGHIJKLMNOPQRSTUVWXYZ" [rand() % 26];
        printf("%c", rletter);
    }

    return 0;
}

