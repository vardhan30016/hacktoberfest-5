
void sortColors(int* nums, int numsSize) {
    int i, j, gap, t;

    // Shell sort
    for (gap = numsSize / 2; gap >= 1; gap = gap / 2) {
        for (j = gap; j < numsSize; j++) {
            for (i = j - gap; i >= 0; i = i - gap) {
                if (nums[i] > nums[i + gap]) {
                    // Swap nums[i] and nums[i + gap]
                    t = nums[i];
                    nums[i] = nums[i + gap];
                    nums[i + gap] = t;
                }
            }
        }
    }

    // Print the sorted array
    for (i = 0; i < numsSize; i++) {
        if (i != numsSize - 1) {
            printf("%d,", nums[i]);
        } else {
            printf("%d", nums[i]); // No trailing comma at the end
        }
    }
    printf("\n");
}
