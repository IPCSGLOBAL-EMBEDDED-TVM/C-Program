#include <stdio.h>

enum Suit { CLUBS, DIAMONDS, HEARTS, SPADES };
enum Rank { TWO = 2, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING, ACE };

const char* suitName(enum Suit s) {
    const char *names[] = {"Clubs", "Diamonds", "Hearts", "Spades"};
    return names[s];
}

const char* rankName(enum Rank r) {
    switch (r) {
        case JACK: return "Jack";
        case QUEEN: return "Queen";
        case KING: return "King";
        case ACE: return "Ace";
        default: {
            static char buffer[3];
            sprintf(buffer, "%d", r);
            return buffer;
        }
    }
}

int main() {
    enum Suit s = HEARTS;
    enum Rank r = QUEEN;

    printf("Card drawn: %s of %s\n", rankName(r), suitName(s));

    enum Suit s2 = SPADES;
    enum Rank r2 = SEVEN;
    printf("Card drawn: %s of %s\n", rankName(r2), suitName(s2));

    return 0;
}
