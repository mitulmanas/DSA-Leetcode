class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int largest = INT_MIN;
        int secondlargest = INT_MIN;

        for(int x: nums){
            if(x>largest){
                secondlargest = largest;
                largest = x;
            }
            else if ( x > secondlargest){
                secondlargest = x;
            }
        }

        return (largest-1)*(secondlargest-1);
    }
};