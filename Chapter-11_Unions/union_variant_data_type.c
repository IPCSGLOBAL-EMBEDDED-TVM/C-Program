#include <stdio.h>
#include <string.h>

enum VarType { VAR_INT, VAR_FLOAT, VAR_STRING, VAR_BOOL };

typedef struct {
    enum VarType type;
    union {
        int intVal;
        float floatVal;
        char stringVal[50];
        int boolVal;
    } value;
} Variant;

void printVariant(Variant v) {
    switch (v.type) {
        case VAR_INT:
            printf("(int) %d\n", v.value.intVal);
            break;
        case VAR_FLOAT:
            printf("(float) %.2f\n", v.value.floatVal);
            break;
        case VAR_STRING:
            printf("(string) \"%s\"\n", v.value.stringVal);
            break;
        case VAR_BOOL:
            printf("(bool) %s\n", v.value.boolVal ? "true" : "false");
            break;
    }
}

int main() {
    Variant values[4];

    values[0].type = VAR_INT;
    values[0].value.intVal = 42;

    values[1].type = VAR_FLOAT;
    values[1].value.floatVal = 3.14f;

    values[2].type = VAR_STRING;
    strcpy(values[2].value.stringVal, "Generic value");

    values[3].type = VAR_BOOL;
    values[3].value.boolVal = 1;

    printf("A single array holding mixed data types using a variant:\n");
    for (int i = 0; i < 4; i++)
        printVariant(values[i]);

    return 0;
}
