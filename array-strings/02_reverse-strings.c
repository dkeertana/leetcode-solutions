#include <stdio.h>
#include <string.h>

void reverseString(char* s, int sSize)
{
    int left = 0;
    int right = sSize - 1;

    while (left < right)
    {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
}

int main(void)
{
    char s[100];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    printf("Before: %s\n", s);

    reverseString(s, strlen(s));

    printf("After:  %s\n", s);

    return 0;
}