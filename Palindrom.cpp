//
// Created by Tom Seeger on 24.01.18.
//

# include "Palindrom.h"

int palin(char *c, int erstes, int letztes) {
    while (c[erstes] == ' ' && letztes - erstes > 2)
        erstes++;
    while (c[letztes] == ' ' && letztes - erstes > 2)
        letztes--;
    if (!(c[erstes] == c[letztes]
          || c[erstes] == c[letztes] + 32
          || c[erstes] == c[letztes] - 32))
        return 0;
    else {
        if (letztes - erstes <= 2)
            return 1;
        return palin(c, erstes + 1, letztes - 1);
    }
}
