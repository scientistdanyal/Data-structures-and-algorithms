class Solution {
    public int[] smallerNumbersThanCurrent(int[] nums) {
        
        int[] list = new int[nums.length];
        for (int i = 0; i < nums.length; i++) {
            int count = 0;
            for (int j = 0; j < nums.length; j++) {
                if (i != j && nums[j] < nums[i]) {
                    count++;
                }
            }
            list[i] = count;
        }
        return list;
       
    }
}