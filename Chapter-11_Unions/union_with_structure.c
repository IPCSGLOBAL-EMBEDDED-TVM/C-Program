#include <stdio.h>
#include <string.h>

enum ValueType { TYPE_INT, TYPE_FLOAT, TYPE_STRING };

union Payload {
    int i;
    float f;
    char str[30];
};

struct TaggedValue {
    enum ValueType type;
    union Payload payload;
};

void printTaggedValue(struct TaggedValue tv) {
    switch (tv.type) {
        case TYPE_INT:
            printf("Integer value: %d\n", tv.payload.i);
            break;
        case TYPE_FLOAT:
            printf("Float value: %.2f\n", tv.payload.f);
            break;
        case TYPE_STRING:
            printf("String value: %s\n", tv.payload.str);
            break;
    }
}

int main() {
    struct TaggedValue v1;
    v1.type = TYPE_INT;
    v1.payload.i = 100;

    struct TaggedValue v2;
    v2.type = TYPE_STRING;
    strcpy(v2.payload.str, "Hello, Union!");

    printTaggedValue(v1);
    printTaggedValue(v2);

    return 0;
}
