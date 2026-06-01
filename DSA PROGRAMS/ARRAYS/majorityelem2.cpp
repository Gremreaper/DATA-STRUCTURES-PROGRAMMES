class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int res = nums.size() / 3 + 1;
        int counter1 = 0;
        int counter2 = 0;

        int e1 = INT_MIN;
        int e2 = INT_MIN;

        //Moore Voting Algorithm

        for(int i=0;i<nums.size();i++){
            if(counter1 == 0 && e2 != nums[i]){
                counter1 = 1;
                e1 = nums[i];
            }
            else if(counter2 == 0 && e1 != nums[i]){
                counter2 = 1;
                e2 = nums[i];
            }

            else if(e1 == nums[i]) counter1++;
            else if(e2 == nums[i]) counter2++;
            else{
                counter1--,counter2--;
            }
        }

        counter1 = 0,counter2 = 0;
        
        for(int i=0;i<nums.size();i++){
            if(e1 == nums[i]) counter1++;
            if(e2 == nums[i]) counter2++;
        }

        vector<int>m;
        if(counter1 >= res) m.push_back(e1);
        if(counter2 >= res) m.push_back(e2);

        return m;
    }
};

int main()
{
  Solution s;
  vector<int>nums={1,1,1,3,3,2,2,2};
  vector<int>ans=s.majorityElement(nums);
  for(int i=0;i<ans.size();i++)
  {
    cout<<ans[i]<<" ";
  }
}