#include <stdio.h>

enum TokenType { TOKEN_NUMBER, TOKEN_OPERATOR };

typedef struct {
    enum TokenType type;
    union {
        double number;
        char operatorSymbol;
    } value;
} Token;

int main() {
    Token tokens[5];

    tokens[0].type = TOKEN_NUMBER;
    tokens[0].value.number = 10;

    tokens[1].type = TOKEN_OPERATOR;
    tokens[1].value.operatorSymbol = '+';

    tokens[2].type = TOKEN_NUMBER;
    tokens[2].value.number = 5;

    tokens[3].type = TOKEN_OPERATOR;
    tokens[3].value.operatorSymbol = '*';

    tokens[4].type = TOKEN_NUMBER;
    tokens[4].value.number = 2;

    printf("Expression tokens: ");
    for (int i = 0; i < 5; i++) {
        if (tokens[i].type == TOKEN_NUMBER)
            printf("%.0f ", tokens[i].value.number);
        else
            printf("%c ", tokens[i].value.operatorSymbol);
    }
    printf("\n");

    return 0;
}
