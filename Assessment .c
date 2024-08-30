// Assessment.
#include <stdio.h>
#include <string.h>
void reverseString(char str[]) 
{
    int i;
	int length = strlen(str);
    for ( i = length - 1; i >= 0; i--) 
	{
        printf("%c", str[i]);
    }
    printf("\n");
}
void concatenateStrings(char str1[], char str2[]) 
{
    strcat(str1, str2);
    printf("\n");
    printf("\t\t---> Combined string = %s\n", str1);
}
void checkPalindrome(char str[]) 
{
    int length = strlen(str);
    int i,flag = 1;
    for ( i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) 
		{
            flag = 0;
            break;
        }
    }
    if (flag) 
	{
        printf("\t\t---> String is Palindrome\n");
    }
	 else 
	 {
        printf("\t\t---> String is Not Palindrome\n");
    }
}
void copyString(char str1[], char str2[]) 
{
    strcpy(str2, str1);
    printf("\t\t---> copied string = %s\n", str2);
}

void findLength(char str[]) 
{
    int length = strlen(str);
    printf("\t\t---> Length of the string = %d\n", length);
}
void findFrequency(char str[], char ch) 
{
    int i,count = 0;
    for ( i = 0; str[i] != '\0'; i++) 
	{
        if (str[i] == ch) {
            count++;
        }
    }
    printf("\n");
    printf("\t\t---> Frequency of '%c'= %d\n", ch, count);
}
void findVowelsAndConsonants(char str[]) 
{
    int i,vowels = 0, consonants = 0;
    for ( i = 0; str[i] != '\0'; i++) 
	{
        if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z') 
		{
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
                vowels++;
            }
			 else 
			{
                consonants++;
            }
        }
    }
    printf("\t\t---> Vowels = %d Consonants = %d\n", vowels, consonants);
}
void findBlankSpacesAndDigits(char str[]) 
{
    int i,spaces = 0, digits = 0;
    for ( i = 0; str[i] != '\0'; i++) 
	{
        if (str[i] == ' ') 
		{
            spaces++;
        }
		 else if (str[i] >= '0' && str[i] <= '9') 
		{
            digits++;
        }
    }
    printf("\t\t---> Blank spaces = %d Digits = %d\n", spaces, digits);
}

int main() 
{
    char str1[100], str2[100];
    int choice;
    while (1) 
	{
        printf("\n1. Reverse a string\n");
        printf("2. Concatenate two strings\n");
        printf("3. Check Palindrome\n");
        printf("4. Copy a string\n");
        printf("5. Length of the string\n");
        printf("6. Frequency of character in a string\n");
        printf("7. Find number of vowels and consonants\n");
        printf("8. Find number of blank spaces and digits\n");
        printf("9. Exit\n");
        printf("\nEnter Your Choice = ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("\nEnter a string = ");
                scanf("%s", str1);
                printf("\n");
                printf("\t\t---> The string after reversing = ");
                reverseString(str1);
                break;
            case 2:
                printf("\nEnter first string = ");
                scanf("%s", str1);
                printf("\nEnter second string = ");
                scanf("%s", str2);
                concatenateStrings(str1, str2);
                break;
            case 3:
                printf("\nEnter a string = ");
                scanf("%s", str1);
                checkPalindrome(str1);
                break;
            case 4:
                printf("\nEnter a string = ");
                scanf("%s", str1);
                copyString(str1, str2);
                break;
              case 5:
                printf("\nEnter a string = ");
                scanf("%s", str1);
                printf("\n");
                findLength(str1);
                break;
            case 6:
                printf("\nEnter a string = ");
                scanf("%s", str1);
                printf("\nEnter a character = ");
                char ch;
                scanf(" %c", &ch);
                findFrequency(str1, ch);
                break;
            case 7:
                printf("\nEnter a string = ");
                scanf("%s", str1);
                printf("\n");
                findVowelsAndConsonants(str1);
                break;
            case 8:
                printf("\nEnter a string = ");
                scanf("%s", str1);
                printf("\n");
                findBlankSpacesAndDigits(str1);
                break;
            case 9:
                return 0;
            default:
                printf("\nInvalid choice\n");
        }
        printf("\n\t   Do you want to continue?<Press 1 To continue 0 to exit>");
        scanf("%d", &choice);
        if (choice != 1) 
		{
            break;
        }
    }
    getch();
}    
