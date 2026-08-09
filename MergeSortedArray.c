void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)

{

    int i = m - 1;  //last valid element in nums1
    int j = n - 1;  //last element in nums2
    int k = m + n - 1;  //last position in merged array

    while (j >= 0)
    {
        if(i >= 0 && nums1[i] > nums2[j])
        {
            nums1[k--] = nums1[i--];
        }
        else
        {
            nums1[k--] = nums2[j--];
        }
    }

    // If i >= 0 still, those elements are already in place, so no need to copy them
}