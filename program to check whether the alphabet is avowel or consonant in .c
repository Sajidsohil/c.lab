#include <stdio.h>
#include <ctype.h>

int main() {
    char alphabet;

    printf("Enter an alphabet: ");
    scanf(" %c", &alphabet);

    alphabet = toupper(alphabet); // convert to uppercase to avoid checking lowercase and uppercase separately

    if (alphabet == 'A' || alphabet == 'E' || alphabet == 'I' || alphabet == 'O' || alphabet == 'U') {
        printf("%c is a vowel.\n", alphabet);
    } else if (alphabet >= 'A' && alphabet <= 'Z') {
        printf("%c is a consonant.\n", alphabet);
    } else {
        printf("%c is neither a vowel nor a consonant.\n", alphabet);
    }

    return 0;
}
