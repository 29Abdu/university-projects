#include <stdio.h>

int main() {
    char str[100];
    int key, i = 0;

    // Prompt the user for input
    printf("Enter a string (without spaces): ");
    scanf("%s", str);

    // Prompt the user for the key
    printf("Enter the key: ");
    scanf("%d", &key);

    // Caesar Cipher logic: Shift each letter by the given key
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            // For uppercase letters
            str[i] = ((str[i] - 'A' + key) % 26) + 'A';
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            // For lowercase letters
            str[i] = ((str[i] - 'a' + key) % 26) + 'a';
        }
        i++;
    }

    // Output the modified string (encrypted or decrypted)
    printf("Modified string: %s\n", str);

    return 0;
}
