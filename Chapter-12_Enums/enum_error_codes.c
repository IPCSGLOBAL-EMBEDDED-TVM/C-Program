#include <stdio.h>

enum ErrorCode {
    SUCCESS = 0,
    ERROR_FILE_NOT_FOUND = 1,
    ERROR_INVALID_INPUT = 2,
    ERROR_OUT_OF_MEMORY = 3,
    ERROR_PERMISSION_DENIED = 4
};

const char* errorMessage(enum ErrorCode code) {
    switch (code) {
        case SUCCESS: return "Operation successful";
        case ERROR_FILE_NOT_FOUND: return "File not found";
        case ERROR_INVALID_INPUT: return "Invalid input provided";
        case ERROR_OUT_OF_MEMORY: return "Out of memory";
        case ERROR_PERMISSION_DENIED: return "Permission denied";
        default: return "Unknown error";
    }
}

enum ErrorCode openFile(int fileExists) {
    if (!fileExists)
        return ERROR_FILE_NOT_FOUND;
    return SUCCESS;
}

int main() {
    enum ErrorCode result = openFile(0);

    printf("Result code: %d\n", result);
    printf("Message: %s\n", errorMessage(result));

    if (result != SUCCESS)
        printf("\nAn error occurred, aborting operation.\n");

    return 0;
}
