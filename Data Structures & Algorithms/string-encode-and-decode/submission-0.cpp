class Solution {
   public:
    string encode(vector<string>& strs) {
        string encoded = "";
        for (auto n : strs) {
            encoded += to_string(n.size()) + "-" + n;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> decoded;
        string num = "";
        string word = "";
        int len = {};
        int i = 0;

        while (i < s.size()) {
            for (i; i != s.size() && s[i] != '-'; i++) {
                num.push_back(s[i]);
            }
            len = stoi(num);
            int j = i + 1;

            for (j; j < len + i + 1; j++) {
                word.push_back(s[j]);
            }

            decoded.push_back(word);
            i = j;
            num = "";
            word = "";
        }
        return decoded;
    }
};
