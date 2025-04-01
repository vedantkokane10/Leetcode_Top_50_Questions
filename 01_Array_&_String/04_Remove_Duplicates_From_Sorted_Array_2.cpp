int removeDuplicates(vector<int>& nums) {
    int i=0;
    int j=0;
    while(j < nums.size()){
        int count = 1;
        while(j+1 < nums.size() && nums[j] == nums[j+1]){
            count++;
            j++;
        }

        int minCount = min(2,count);
        for(int k=0;k<minCount;k++){
            nums[i] = nums[j];
            i++;
        }
        j++;
    }
    return i;
}
