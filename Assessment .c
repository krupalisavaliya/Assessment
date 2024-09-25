// Assessment.
#include <stdio.h>
#include <string.h>

void reverseString(const char str[]) 
{ int i;
    for (i = strlen(str) - 1; i >= 0; i--) {
        putchar(str[i]);
    }
    putchar('\n');
}

void concatenateStrings(char str1[], const char str2[]) {
    strcat(str1, str2);
    printf("---> Combined string = %s\n", str1);
}

void checkPalindrome(const char str[]) 
{ int i;
    int length = strlen(str);
    for ( i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            printf("---> String is Not Palindrome\n");
            return;
        }
    }
    printf("---> String is Palindrome\n");
}

void copyString(const char str1[], char str2[]) {
    strcpy(str2, str1);
    printf("---> Copied string = %s\n", str2);
}

void findLength(const char str[]) {
    printf("---> Length of the string = %lu\n", strlen(str));
}

void findFrequency(const char str[], char ch) {
    int count = 0,i;
    for (i = 0; str[i]; i++) {
        if (str[i] == ch) count++;
    }
    printf("---> Frequency of '%c' = %d\n", ch, count);
}

void findVowelsAndConsonants(const char str[]) {
    int vowels = 0,i, consonants = 0;
    for ( i = 0; str[i]; i++) {
        char c = tolower(str[i]);
        if (c >= 'a' && c <= 'z') {
            if (strchr("aeiou", c)) vowels++;
            else consonants++;
        }
    }
    printf("---> Vowels = %d, Consonants = %d\n", vowels, consonants);
}

void findBlankSpacesAndDigits(const char str[]) {
    int spaces = 0,i, digits = 0;
    for ( i = 0; str[i]; i++) {
        if (str[i] == ' ') spaces++;
        else if (isdigit(str[i])) digits++;
    }
    printf("---> Blank spaces = %d, Digits = %d\n", spaces, digits);
}

int main() {
    char str1[100], str2[100];
    int choice;

    while (1) {
        printf("\n1. Reverse a string\n"
               "2. Concatenate two strings\n"
               "3. Check Palindrome\n"
               "4. Copy a string\n"
               "5. Length of the string\n"
               "6. Frequency of character in a string\n"
               "7. Find number of vowels and consonants\n"
               "8. Find number of blank spaces and digits\n"
               "9. Exit\n"
               "Enter Your Choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Enter a string: ");
                scanf(" %[^\n]", str1);
                printf("---> The string after reversing: ");
                reverseString(str1);
                break;
            case 2:
                printf("Enter first string: ");
                scanf(" %[^\n]", str1);
                printf("Enter second string: ");
                scanf(" %[^\n]", str2);
                concatenateStrings(str1, str2);
                break;
            case 3:
                printf("Enter a string: ");
                scanf(" %[^\n]", str1);
                checkPalindrome(str1);
                break;
            case 4:
                printf("Enter a string: ");
                scanf(" %[^\n]", str1);
                copyString(str1, str2);
                break;
            case 5:
                printf("Enter a string: ");
                scanf(" %[^\n]", str1);
                findLength(str1);
                break;
            case 6:
                printf("Enter a string: ");
                scanf(" %[^\n]", str1);
                printf("Enter a character: ");
                char ch;
                scanf(" %c", &ch);
                findFrequency(str1, ch);
                break;
            case 7:
                printf("Enter a string: ");
                scanf(" %[^\n]", str1);
                findVowelsAndConsonants(str1);
                break;
            case 8:
                printf("Enter a string: ");
                scanf(" %[^\n]", str1);
                findBlankSpacesAndDigits(str1);
                break;
            case 9:
                return 0;
            default:
                printf("Invalid choice\n");
        }
        
        printf("Do you want to continue? (1 for Yes, 0 for No): ");
        int continueChoice;
        scanf("%d", &continueChoice);
        if (continueChoice != 1) break;
    }
    return 0;
}
