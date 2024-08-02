// Assessment.
#include <stdio.h>
#include <string.h>

void checkEquality(char str1[], char str2[])
 {
    if (strcmp(str1, str2) == 0) 
	{
        printf("The strings are equal.\n");
    }
	 else 
	{
        printf("The strings are not equal.\n");
    }
}
void stringCopy(char source[], char destination[]) 
{
    strcpy(destination, source);
    printf("String copied: %s\n", destination);
}

void concatenate(char str1[], char str2[]) 
{
    char result[1000]; 
    strcpy(result, str1);
    strcat(result, str2);
    printf("Concatenated string: %s\n", result);
}

void showString(char str[]) 
{
    printf("String: %s\n", str);
}

void reverseString(char str[]) 
{
    int len = strlen(str),i;
    for (i = 0; i < len / 2; ++i) 
	{
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    printf("Reversed string: %s\n", str);
}

void checkPalindrome(char str[]) 
{
    int len = strlen(str),i;
    int is_palindrome = 1;
    for (i = 0; i < len / 2; ++i) 
	{
        if (str[i] != str[len - i - 1]) 
		{
            is_palindrome = 0;
            break;
        }
    }
    if (is_palindrome) 
	{
        printf("The string is a palindrome.\n");
    }
	 else 
	{
        printf("The string is not a palindrome.\n");
    }
}

void getSubstring(char str[], int start, int length) 
{
    int len = strlen(str);
    if (start < 0 || start >= len || length <= 0) 
	{
        printf("Invalid substring parameters.\n");
        return;
    }
    if (start + length > len) 
	{
        length = len - start; 
    }
    char substr[1000]; 
    strncpy(substr, str + start, length);
    substr[length] = '\0'; 
    printf("Substring: %s\n", substr);
}

int main() 
{
    char str1[1000], str2[1000];
    int choice, start, length;

    while (1) 
	{
        printf("Menu:\n");
        printf("1. Equality\n");
        printf("2. String Copy\n");
        printf("3. Concatenate\n");
        printf("4. Show\n");
        printf("5. Reverse\n");
        printf("6. Palindrome\n");
        printf("7. Substring\n");
        printf("8. Exit\n");
        printf("Please enter your choice: ");
        scanf("%d", &choice);
        getchar(); 

        if (choice == 8) break;

        switch (choice) 
		{
            case 1:
                printf("Enter first string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0'; 
                printf("Enter second string: ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = '\0'; 
                checkEquality(str1, str2);
                break;
            case 2:
                printf("Enter source string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0'; 
                stringCopy(str1, str2);
                break;
            case 3:
                printf("Enter first string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0'; 
                printf("Enter second string: ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = '\0'; 
                concatenate(str1, str2);
                break;
            case 4:
                printf("Enter string to show: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0'; 
                showString(str1);
                break;
            case 5:
                printf("Enter string to reverse: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0'; 
                reverseString(str1);
                break;
            case 6:
                printf("Enter string to check for palindrome: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0'; 
                checkPalindrome(str1);
                break;
            case 7:
                printf("Enter string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0'; 
                printf("Enter start index: ");
                scanf("%d", &start);
                printf("Enter length of substring: ");
                scanf("%d", &length);
                getchar(); 
                getSubstring(str1, start, length);
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    }

    printf("Exiting the program.\n");
    return 0;
}
