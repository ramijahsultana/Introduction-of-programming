#include <stdio.h>

int main() {
    char X[21], Y[21];
    int i = 0;

    // Read the two strings
    scanf("%s %s", X, Y);

    // Compare character by character
    while (X[i] != '\0' && Y[i] != '\0') {
        if (X[i] < Y[i]) {
            printf("%s\n", X);
            return 0;
        } else if (X[i] > Y[i]) {
            printf("%s\n", Y);
            return 0;
        }
        i++;
    }

    // If one string is a prefix of the other
    if (X[i] == '\0') {
        printf("%s\n", X);
    } else {
        printf("%s\n", Y);
    }

    return 0;
}