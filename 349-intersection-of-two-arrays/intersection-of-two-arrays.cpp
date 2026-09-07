class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
    {
        int n1 = nums1.size();
        int n2 = nums2.size();
        vector <int> nums3;

        for(int i = 0; i<n1; i++)
        {
            for(int j = 0; j<n2; j++)
            {
                if(nums1[i] == nums2[j])
                {    nums3.push_back(nums1[i]);
                     break;
                }    
            }
        }

        sort(nums3.begin(), nums3.end());
        nums3.erase(unique(nums3.begin(), nums3.end()), nums3.end());

        return nums3;
    }
};