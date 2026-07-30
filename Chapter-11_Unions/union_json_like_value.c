#include <stdio.h>
#include <string.h>

enum JsonType { JSON_NULL, JSON_BOOL, JSON_NUMBER, JSON_STRING };

typedef struct {
    enum JsonType type;
    union {
        int boolValue;
        double numberValue;
        char stringValue[100];
    } data;
} JsonValue;

void printJsonValue(JsonValue v) {
    switch (v.type) {
        case JSON_NULL:
            printf("null\n");
            break;
        case JSON_BOOL:
            printf("%s\n", v.data.boolValue ? "true" : "false");
            break;
        case JSON_NUMBER:
            printf("%.2f\n", v.data.numberValue);
            break;
        case JSON_STRING:
            printf("\"%s\"\n", v.data.stringValue);
            break;
    }
}

int main() {
    JsonValue values[4];

    values[0].type = JSON_NULL;

    values[1].type = JSON_BOOL;
    values[1].data.boolValue = 1;

    values[2].type = JSON_NUMBER;
    values[2].data.numberValue = 99.99;

    values[3].type = JSON_STRING;
    strcpy(values[3].data.stringValue, "hello world");

    printf("Simulated JSON-like values using a tagged union:\n");
    for (int i = 0; i < 4; i++)
        printJsonValue(values[i]);

    return 0;
}
