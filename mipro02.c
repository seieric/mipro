#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int height;
    int width;
    scanf("%d %d\n", &height, &width);

    double *nums = (double *)malloc(sizeof(double) * width * height);
    for (int i = 0; i < height * width; ++i)
    {
        scanf("%lf", &nums[i]);
    }

    printf("%d %d\n", width, height);
    for (int i = 0; i < width; ++i)
    {
        for (int j = 0; j < height; ++j)
        {
            printf("%lf ", nums[i + j * width]);
        }
        printf("\n");
    }
    return 0;
}