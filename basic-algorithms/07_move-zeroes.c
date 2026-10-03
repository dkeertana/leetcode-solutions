#include <stdio.h>

void moveZeroes(int* nums, int numsSize)
{
    int position = 0;

    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] != 0)
        {
            nums[position] = nums[i];
            position++;
        }
    }

    while (position < numsSize)
    {
        nums[position] = 0;
        position++;
    }
}

int main(void)
{
    int nums[] = {0, 1, 0, 3, 12};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    moveZeroes(nums, numsSize);

    printf("Output: [");

    for (int i = 0; i < numsSize; i++)
    {
        printf("%d", nums[i]);

        if (i < numsSize - 1)
        {
            printf(",");
        }
    }

    printf("]\n");

    return 0;
}