int removeElement(vector<int>& nums, int val) {
    int firstOccurence = -1;
    for(int i=0;i<nums.size();i++){
        if(nums[i] == val){
            firstOccurence = i;
            break;
        }
    }

    if(firstOccurence == -1){
        return nums.size();
    }
    int lastNonOccurenceVal = -1;
    for(int i=nums.size()-1;i>=0;i--){
        if(nums[i] != val){
            lastNonOccurenceVal = i;
            break;
        }
    }


    while(firstOccurence < lastNonOccurenceVal){
        swap(nums[firstOccurence],nums[lastNonOccurenceVal]);
        while(firstOccurence < nums.size() && nums[firstOccurence] != val){
            firstOccurence++;
        }
        while(lastNonOccurenceVal >= 0 && nums[lastNonOccurenceVal] == val){
            lastNonOccurenceVal--;
        }
    }


    return firstOccurence;
    
}
