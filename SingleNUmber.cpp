#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result=0;
            for(int i=0;i<nums.size();i++){
                result=result^nums[i];
            }
        return result;
    }
};

int main(){
		Solution s;
		vector<int> my_vec={1,2,3,4,5,6};
		cout<<s.singleNumber(my_vec)<<endl;	
	return 0;
}

