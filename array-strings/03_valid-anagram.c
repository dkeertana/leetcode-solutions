#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isAnagram(char* s, char* t)
{
    int count[26] = {0};

    if (strlen(s) != strlen(t))
    {
        return false;
    }

    for (int i = 0; s[i] != '\0'; i++)
    {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            return false;
        }
    }

    return true;
}

int main(void)
{
    char s[100],t[100];
    printf("Enter the first string: ");
    fgets(s, sizeof(s), stdin);
    printf("Enter the second string: ");
    fgets(t, sizeof(t), stdin);

    if (isAnagram(s, t))
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }

    return 0;
}