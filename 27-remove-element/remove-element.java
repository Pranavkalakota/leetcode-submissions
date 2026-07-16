/* Read pointer (for loop), write pointer 
   check for all the values < val
   increment every single value even if duplicate
   return that value
*/

class Solution {
    public int removeElement(int[] nums, int val) {
        Arrays.sort(nums);
        // int readPointer = 0;
        int writePointer = 0;
        int count = 0;
        /* while (readPointer < nums.length) {
            if (nums[readPointer] != val) {
                readPointer++;
                writePointer++;
                count++;
            } else {
                /* see how long window is, just move read pointer
                advance until number != target
                if window ended, next number != target via readPointer, then swap writePointer and readPointer. 
                writePointer goes to next element, and then readPointer goes to next element, if number != target, then swap write and readPointer*/
                /* while (nums[readPointer + 1] == val) {
                    readPointer++;
                } 
                readPointer++;
                

            }
        } */
        int j;
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] == val) {
                for (j = i; j < nums.length; j++) {
                    if (nums[j] != val) {
                        break;
                    }
                }
                if (j < nums.length) {
                    int temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                    count++;
                }
            } else {
                count++;
            }
        }
        return count;
    }
}