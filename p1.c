#include <stdio.h>

void copyMemory(char* destination, const char* source, int numBytes) {
    for (int i = 0; i < numBytes; i++) {
        destination[i] = source[i];
    }
}
int main() {
    char buffer[256];
    const char* message = "Hello, world!";
    int numBytes = sizeof(message);      
    copyMemory(buffer, message, numBytes);
    printf("Copied message: %s\n", buffer);
    return 0;
}
