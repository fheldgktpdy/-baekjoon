class Solution {
public:
    int lengthOfLastWord(string s) {
        int sum = 0;
        int k = 0;//문자열의 시작
        if (s[s.length() - 1] == ' ') {
            for (int i = s.length() - 1; i >= 0; i--)
                if (s[i] != ' ') {
                    k = i;
                    break;
                }
            for (int j = k; j >= 0; j--) {
                if (s[j] != ' ')
                    sum += 1;
                else
                    break;
            }
        }
        else {
            for (int i = s.length() - 1; i >= 0; i--) {
                if (s[i] != ' ')
                    sum += 1;
                else
                    break;
            }
        }
        return sum;
    }
};