#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>


enum menu{
TEA = 10,
BREAD = 20,
MILK = 70,

};


int main()
{
    enum menu mario = BREAD;
    enum menu paul = MILK;

    printf("mario ordered...%d\n", mario);
    printf("paul ordered...%d\n", paul);

    printf("\n\n ===Paul===\n\n");
    

    return EXIT_SUCCESS;
}
