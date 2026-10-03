#include <stdio.h>
#include <stdbool.h>

bool isValid(char* s)
{
    char stack[10000];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++)
    {
        char c = s[i];

        if (c == '(' || c == '[' || c == '{')
        {
            stack[++top] = c;
        }
        else
        {
            if (top == -1)
            {
                return false;
            }

            char open = stack[top--];

            if ((c == ')' && open != '(') ||
                (c == ']' && open != '[') ||
                (c == '}' && open != '{'))
            {
                return false;
            }
        }
    }

    return top == -1;
}

int main(void)
{
    char s[] = "([])";

    if (isValid(s))
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }

    return 0;
}