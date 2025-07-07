//solution 1
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) {
 int sum=0;
 *returnSize = numsSize;
 for(int i=1;i<numsSize;i++){
    nums[i]+=nums[i-1];
 }
 return nums;
}

//solution 2
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) {
    int sum=0; //initialize sum
    *returnSize = numsSize;
    int* result = (int*)malloc(numsSize * sizeof(int)); //output array

    for (int i=0;i<numsSize;i++){
        sum+=nums[i]; //add elements
        result[i]=sum; 
    }
    return result;
}
