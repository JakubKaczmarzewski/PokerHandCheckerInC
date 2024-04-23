
#ifndef BIBLIOTEKA_LIBRARY_H
#define BIBLIOTEKA_LIBRARY_H
#endif //BIBLIOTEKA_LIBRARY_H

enum cardRank {jack = 11, queen, king, ace};
enum cardSuit {clubs, diamonds, hearts, spades};

struct Card
{
    enum cardRank type_of_card;
    enum cardSuit type_of_collor;
};

typedef struct Card Card;

int isFlush(struct Card *hand, int handSize);

void sort(struct Card *hand, int handSize);

int isStraight(struct Card *hand, int handSize);

int isPoker(struct Card *hand, int handSize);

int isRoyalFlush(struct Card *hand, int handSize);

int isQuads(struct Card *hand, int handSize);

int isTreeOfAKind(struct Card *hand, int handSize);

int is0nePair(struct Card *hand, int handSize);

int isTwoPairs(struct Card *hand, int handSize);