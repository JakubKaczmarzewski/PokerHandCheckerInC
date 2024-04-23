
#ifndef BIBLIOTEKA_LIBRARY_H
#define BIBLIOTEKA_LIBRARY_H
#endif //BIBLIOTEKA_LIBRARY_H

enum cardRank {walet = 11, dama, krol, as};
enum cardSuit {trefl, karo, kier, pik};

int isFlush(struct Karta *hand, int handSize);

void sort(struct Karta *hand, int handSize);

int isStraight(struct Karta *hand, int handSize);

int isPoker(struct Karta *hand, int handSize);
