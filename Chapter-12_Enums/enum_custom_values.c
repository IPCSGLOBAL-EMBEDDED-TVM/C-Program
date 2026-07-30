#include <stdio.h>

enum HttpStatus {
    OK = 200,
    CREATED = 201,
    BAD_REQUEST = 400,
    UNAUTHORIZED = 401,
    NOT_FOUND = 404,
    SERVER_ERROR = 500
};

int main() {
    printf("HTTP status codes assigned custom values:\n\n");

    printf("OK            = %d\n", OK);
    printf("CREATED       = %d\n", CREATED);
    printf("BAD_REQUEST   = %d\n", BAD_REQUEST);
    printf("UNAUTHORIZED  = %d\n", UNAUTHORIZED);
    printf("NOT_FOUND     = %d\n", NOT_FOUND);
    printf("SERVER_ERROR  = %d\n", SERVER_ERROR);

    return 0;
}
