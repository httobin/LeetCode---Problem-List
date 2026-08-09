void reverse(int* nums, int start, int end)

{
    while (start < end)
    {
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
        start++;
        end--;
    }
}

void rotate(int* nums, int numsSize, int k)

{
    k = k % numsSize;
    int* temp = (int*)malloc(numsSize * sizeof(int));
    
    for (int i = 0; i < numsSize; i++)
    {
        temp[(i + k) % numsSize] = nums[i];
    }
    for (int i = 0; i < numsSize; i++)
    {
        nums[i] = temp[i];
    }
    
    free(temp);
}