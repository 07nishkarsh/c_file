#include <stdio.h>

int main() {
    char *fruits[4] = {"Apple", "Banana", "Mango", "Orange"};

    for (int i = 0; i < 4; i++) {
        printf("%s\n", fruits[i]);
    }

    return 0;
}
