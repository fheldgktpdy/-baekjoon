class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for (int i = 0; i < n; i++) {
            nums1[i + m] = nums2[i];
        }
        int k = n + m;
        while (k > 1) {
            for (int j = 0; j < k - 1; j++) {
                int tmp = 0;
                if (nums1[j] > nums1[j + 1]) {
                    tmp = nums1[j];
                    nums1[j] = nums1[j + 1];
                    nums1[j + 1] = tmp;
                }
            }
            k--;
        }

    }
};