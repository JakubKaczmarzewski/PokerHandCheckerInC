#include "library.h"
#include <stdlib.h>
#include <stdio.h>

void sort(Card* hand, int handSize)
{
    int i, j;
    Card temp;

    for (i = 0; i < handSize - 1; i++) {
        for (j = 0; j < handSize - 1 - i; j++) {
            if (hand[j].type_of_card > hand[j + 1].type_of_card) {
                temp = hand[j];
                hand[j] = hand[j + 1];
                hand[j + 1] = temp;
            }
        }
    }
}

int isStraight(struct Card *hand, int handSize)
{
    int straight = 1;
    int i = 0;
    sort(hand, 5);
    for(i=0; i < handSize - 1; i++)
    {
        if(hand[i].type_of_card + 1 != hand[i + 1].type_of_card)
        {
            straight = 0;
            break;
        }
    }
    return straight;
}

int isFlush(struct Card *hand, int handSize)
{
    int kolor = 1;
    int i;
    for (i = 1; i < handSize; i++)
    {
        if (hand[i].type_of_collor != hand[0].type_of_collor)
        {
            kolor = 0;
        }
    }
    return kolor;
}

int isPoker(struct Card *hand, int handSize)
{
    int poker = 0;
    if (isStraight(hand, handSize) == 1 && isFlush(hand, handSize) == 1)
    {
            poker = 1;
    }
    return poker;
}

int isRoyalFlush(struct Card *hand, int handSize)
{
    int royalFlush = 0;
    if (isStraight(hand, handSize) == 1 && isFlush(hand, handSize) == 1 && hand[0].type_of_card == 10)
    {
        royalFlush = 1;
    }
    return royalFlush;
}

int isQuads(struct Card *hand, int handSize)
{
    int i=0;
    int differentCards = 0;
    int Quads = 1;
    while (differentCards < 2)
    {
        for (i = 0; i < handSize - 1; i++)
        {
            if (hand[i].type_of_card != hand[i + 1].type_of_card)
            {
                differentCards++;
            }
            if (differentCards == 2)
            {
                Quads = 0;
                break;
            }
        }
    }
    return Quads;
}

int isTreeOfAKind(struct Card *hand, int handSize)
{
    int i;
    int treeOfAKind = 0;
    int sameCards = 1;

    for (i = 0; i < handSize - 1; i++)
    {

        if (hand[i].type_of_card == hand[i + 1].type_of_card)
        {
            sameCards++;
        }
        else
        {
            sameCards = 1;
        }
        if (sameCards == 3)
        {
            treeOfAKind = 1;
            return treeOfAKind;
        }
    }

    return treeOfAKind;
}

int is0nePair(struct Card *hand, int handSize)
{
    int onePair = 0;
    int i;
    for (i = 0; i < handSize - 1; i++)
    {
        if (hand[i].type_of_card == hand[i + 1].type_of_card)
        {
            onePair = 1;
            return onePair;
        }
    }
    return onePair;
}

int isTwoPairs(struct Card *hand, int handSize)
{
    int i;
    int twoPairs = 0;
    int pairsCount = 0;
    Card firstPairCard;

    firstPairCard.type_of_card = -1;
    firstPairCard.type_of_collor = -1;

    for (i = 0; i < handSize - 1; i++)
    {
        if (hand[i].type_of_card == hand[i + 1].type_of_card && hand[i].type_of_card != firstPairCard.type_of_card)
        {
            pairsCount++;
            firstPairCard.type_of_card = hand[i].type_of_card;
            firstPairCard.type_of_collor = hand[i].type_of_collor;
            i++;
        }

        if (pairsCount == 2)
        {
            twoPairs = 1;
            return twoPairs;
        }
    }
    return twoPairs;
}

