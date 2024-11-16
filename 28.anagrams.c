#include <stdio.h>
#include <string.h>
#include <ctype.h>

int areAnagrams(char *str1, char *str2) {
    int count[256] = {0};

    while (*str1 != '\0') {
        count[tolower(*str1)]++;
        str1++;
    }
    
    while (*str2 != '\0') {
        count[tolower(*str2)]--;
        str2++;
    }

    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            return 0;  // Not anagrams
        }
    }
    return 1;  // Anagrams
}

int main() {
    char str1[100], str2[100];

    // Ask the user to input two strings
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    if (areAnagrams(str1, str2)) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}
