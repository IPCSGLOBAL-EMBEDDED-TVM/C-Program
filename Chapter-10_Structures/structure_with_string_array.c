#include <stdio.h>
#include <string.h>

struct Team {
    char teamName[50];
    char players[5][50];
};

int main() {
    struct Team t;
    strcpy(t.teamName, "Titans");

    strcpy(t.players[0], "Arjun");
    strcpy(t.players[1], "Vikram");
    strcpy(t.players[2], "Rahul");
    strcpy(t.players[3], "Suresh");
    strcpy(t.players[4], "Manoj");

    printf("Team: %s\n", t.teamName);
    printf("Players:\n");
    for (int i = 0; i < 5; i++)
        printf("%d. %s\n", i + 1, t.players[i]);

    return 0;
}
