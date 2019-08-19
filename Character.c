// C program to check if the character is a vowel or consonant using switch case

#include <stdio.h>
void vowel_consonant(char);
int main()
{
char ch;
printf("Enter the Input a character :");
scanf("%c",&ch);
printf("%c is a ",ch);
vowel_consonant(ch);
return 0;
}

void vowel_consonant(char ch)
{
  switch(ch)
     {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U': printf("Vowel\n");
        break;
        default : printf("Consonant\n");
  }
}
