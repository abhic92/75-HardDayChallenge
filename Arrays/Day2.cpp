Ques1. #Check if an Array is Sorted#

solution:- 
int isSorted(int n, vector<int> a) {
   
    for (int i = 0; i < n - 1; i++) {
        if (a[i + 1] < a[i]) {
            return 0;
        }
    }

    return 1;
}

Ques2. #Remove Duplicates from Sorted Array#

  solution:- class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        for(int j=1; j<nums.size(); j++){
            if(nums[i] != nums[j]){
                i++;
                nums[i] = nums[j];
            }
        }
        return i+1;
    }
};
