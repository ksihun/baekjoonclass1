#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main()
{
    char S[1000], tmp1[1000], tmp2[1000];
    int result = 0, tmp = 0;

    scanf("%s", S);

    result = strlen(S) * (strlen(S) + 1) / 2;

    for (int i = 1; i < strlen(S); i++)
    {
        strncpy(tmp1, S + i, strlen(S) + 1);

        for (int k = 0; k < i; k++)
        {
            strncpy(tmp2, S + k, strlen(S) + 1);

            for (int r = 1; r <= strlen(S) - i; r++)
            {
                if (strncmp(tmp1, tmp2, r) == 0) strncpy(tmp1, tmp1 + 1, strlen(tmp1) + 1), strncpy(tmp2, tmp2 + 1, strlen(tmp2) + 1), r = 0, result--;
                else break;

                if (strlen(tmp1) == 0 || strlen(tmp2) == 0) break;
            }
        }
    }

    printf("%d", result);

    return 0;
}