#include <stdio.h>
#include <ctype.h>

int countWords(char *str) {
    int count = 0;
    while (*str != '\0') {
        if (!isspace(*str) && (str == str || isspace(*(str - 1)))) {
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    char str[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Number of letters: %d\n", countWords(str));
    return 0;
}
