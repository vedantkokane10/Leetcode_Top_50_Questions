int majorityElement(vector<int>& nums) {
    int count = 0;
    int element = -1;
    for(auto x:nums){
        if(count == 0){
            element = x;
            count = 1;
        }
        else if(element == x){
            count++;
        }
        else{
            count--;
        }
    }
    return element;
}
