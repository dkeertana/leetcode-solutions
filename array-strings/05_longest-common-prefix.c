#include <stdio.h>

char* longestCommonPrefix(char** strs, int strsSize)
{
    int i = 0;

    while (strs[0][i] != '\0')
    {
        for (int j = 1; j < strsSize; j++)
        {
            if (strs[j][i] != strs[0][i] || strs[j][i] == '\0')
            {
                strs[0][i] = '\0';
                return strs[0];
            }
        }

        i++;
    }

    return strs[0];
}

int main(void)
{
    char str1[] = "flower";
    char str2[] = "flow";
    char str3[] = "flight";

    char* strs[] = {str1, str2, str3};

    int strsSize = sizeof(strs) / sizeof(strs[0]);

    char* result = longestCommonPrefix(strs, strsSize);

    printf("Longest Common Prefix: \"%s\"\n", result);

    return 0;
}