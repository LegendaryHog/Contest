#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* code (char* dst, const char* src, char* alphabetA, char* alphabetB);

int main (void)
{
    char dst[100];
    printf("_%s_\n", code(dst, "mama myla ramu", "qwertyuiopasdfghjklzxcvbnm", "qazwsxedcrfvtgbyhnujmikolp"));

    return 0;
}

char* code (char* dst, const char* src, char* alphabetA, char* alphabetB)
{
    int find = 0;

    for (int i = 0; src[i] > '\0'; i++)
    {
        for (int j = 0; alphabetA[j] > '\0'; j++)
        {
            if (alphabetA[j] == src[i])
            {
                dst[i] = alphabetB[j];
                find = 1;
                break;
            }
        }
        if (find == 0)
        {
            dst[i] = src[i];
        }
        else
        {
            find = 0;
        }
    }

    return dst;
}
