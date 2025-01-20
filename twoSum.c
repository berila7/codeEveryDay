#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int i = 0;
    int *result = NULL;
    while (i < numsSize)
    {
        int j = i + 1;
        while (j < numsSize)
        {
            if (nums[j] == target - nums[i])
            {
                result = malloc(sizeof(int) * 2);
                if (result == NULL)
                {
                    *returnSize = 0;
                    return (NULL);
                }
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return (result);
            }
            j++;
        }
        i++;
    }
    *returnSize = 0;
    return (result);
}

int main()
{
    int numsSize = 7;
    int target = 9;
    int nums[7] = {1, 3, 4, 6, 3, 6, 2};
    int *returnSize;
    int *res;

    returnSize = malloc(sizeof(int));
    if (returnSize == NULL)
    {
        perror("Failed to allocate memory for returnSize");
        return (1);
    }    
    res = twoSum(nums, numsSize, target, returnSize);
    if (res != NULL)
    {
        if(*returnSize == 2)
        {
            printf("[%d, %d]", res[0], res[1]);
        }
        free(res);
    }
    else
        printf("no Solution");
    free(returnSize);
}