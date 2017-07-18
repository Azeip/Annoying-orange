#include <stdio.h>
#include <stdlib.h>

int main (){

    srand(time(NULL));

    int randnum = (rand() % 6) + 1;
    printf("%s", randnum);
}
