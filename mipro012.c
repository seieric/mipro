#include <stdio.h>

int main(void)
{
    int num;
    scanf("%d", &num);
    if (num < 2)
        return 0;
    printf("2\n");
    for (int i = 3; i <= num; i += 2)
    {
        int is_prime = 1;
        for (int j = 2; j * j <= i; ++j)
        {
            if (i % j == 0)
            {
                is_prime = 0;
                break;
            }
        }
        if (is_prime)
            printf("%d\n", i);
    }
    return 0;
}