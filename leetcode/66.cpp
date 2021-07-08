class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if (digits.size() == 1) {  //한자리수의 경우
            if (digits[0] < 9)
                digits[0] += 1;
            else {
                digits[0] = 0;
                digits.insert(digits.begin(), 1);
            }
            return digits;
        }
        else { //한자리수 이상의 경우
            if (digits[digits.size() - 1] >= 9) {
                digits[digits.size() - 1] += 1;
                for (int k = digits.size() - 1; k > 0; k--) {
                    if (digits[k] == 10) {
                        digits[k] = 0;
                        digits[k - 1] += 1;
                    }
                    else {
                        break;
                    }
                }
            }
            else {
                digits[digits.size() - 1] += 1;
            }
            if (digits[0] == 10) {
                digits[0] = 0;
                digits.insert(digits.begin(), 1);
            }
            return digits;
        }
    }
};