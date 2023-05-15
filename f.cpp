#include<bits/stdc++.h>
using namespace std;
int total = 0;

void findSubsets(vector<int>&nums, int target, vector<int>&subset, int pos, int sum)
{
    total++;
    if (sum == target)
    {
        cout << "Subset: ";
        for (auto it : subset)
            cout << it << " ";
        cout << endl;
    }
    for (int i = pos; i < nums.size(); i++)
    {
        if (sum + nums[i] <= target)
        {
            subset.push_back(nums[i]);
            findSubsets(nums, target, subset, i + 1, sum + nums[i]);
            subset.pop_back();
        }
    }

}

int main()
{
    vector<int> nums = {2, 4, 6, 8, 10};
    int target = 16;
    vector<int >subset;

    findSubsets(nums, target, subset, 0, 0);
    cout<<total<<endl;
}
