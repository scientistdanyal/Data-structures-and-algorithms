class Solution {
    public int[] getConcatenation(int[] nums) {
        int len = nums.length; // getting the length of an array
        int [] arr = new int[2*len];
        for(int i=0; i<nums.length; i++) {
            arr[i] = nums[i];
            arr[i + len] = nums[i];
        }
        return arr;
    }
}