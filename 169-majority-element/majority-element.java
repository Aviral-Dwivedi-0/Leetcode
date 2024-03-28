class Solution {
    public int majorityElement(int[] nums) {
        Arrays.sort(nums); // Sort the list in ascending order
        return nums[(nums.length)/2];
    }
}