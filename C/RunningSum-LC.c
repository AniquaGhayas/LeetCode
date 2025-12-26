//Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).Return the running sum of nums.
//Example 1:
//Input: nums = [1,2,3,4]
//Output: [1,3,6,10]
//Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].


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
