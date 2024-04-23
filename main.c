#include <stdio.h>
#include "library.h"

//PN[POKER]



int main()
{
    Card reka[5];

    Card k1 = {2, clubs};
    Card k2 = {1, clubs};
    Card k3 = {3, clubs};
    Card k4 = {3, clubs};
    Card k5 = {2, clubs};

    reka[0] = k1;
    reka[1] = k2;
    reka[2] = k3;
    reka[3] = k4;
    reka[4] = k5;

    int checkForTwoPairs;
    sort(reka, 5);
    checkForTwoPairs = isTwoPairs(reka, 5);
    printf("%d", checkForTwoPairs);



    return 0;
}
