// If Left Rotate -> Reverse Entire Array at last 

// If Right Rotate -> Reverse Entire Array first

// Rest 2 steps of reverse from 0 to k-1 and k-1 to n-1 remains same

void reverse(int start, int end, vector<int>& nums){
    while(start <= end){
        swap(nums[start], nums[end]);
        start++;
        end--;
    }
}
void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k = k % n;
    reverse(0,n-1,nums);
    reverse(0,k-1,nums);
    reverse(k,n-1,nums);
}
