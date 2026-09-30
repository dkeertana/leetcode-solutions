#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target)
{
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                return {i, j};
            }
        }
    }

    return {};
}

int main()
{
    // Test Case 1
    vector<int> nums1 = {2, 7, 11, 15};
    int target1 = 9;

    vector<int> result1 = twoSum(nums1, target1);

    cout << "Test Case 1: ["
         << result1[0] << ", " << result1[1] << "]" << endl;

    // Test Case 2 - duplicate values
    vector<int> nums2 = {3, 3};
    int target2 = 6;

    vector<int> result2 = twoSum(nums2, target2);

    cout << "Test Case 2: ["
         << result2[0] << ", " << result2[1] << "]" << endl;

    return 0;
}