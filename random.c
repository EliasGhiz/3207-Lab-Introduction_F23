
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
char randchar();



char randchar(){

    srand ( time(NULL) );
    char rletter = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"[rand() % 26];




    return rletter;
}


