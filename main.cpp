
# include <stdio.h>
#include <cstring>
# include "Palindrom.h"

int main(int argc, char *argv[]) {
    char wort[] = " derfreibierfred ";
    char unwort[] = " derfreibiersepp ";
    char satz[] = " Ein Schwarzer mit Gazelle zagt im Regen nie ";

    if (palin(wort, 0, strlen(wort) - 1) == 1)
        printf("\"% s\" ist ein Palindrom \n", wort);
    else printf("\"% s\" ist kein Palindrom \n", wort);

    if (palin(unwort, 0, strlen(unwort) - 1) == 1)
        printf("\"% s\" ist ein Palindrom \n", unwort);
    else printf("\"% s\" ist kein Palindrom \n", unwort);

    if (palin(satz, 0, strlen(satz) - 1) == 1)
        printf("\"% s\" ist ein Palindrom \n", satz);
    else printf("\"% s\" ist kein Palindrom \n", satz);


    return 0;

}
