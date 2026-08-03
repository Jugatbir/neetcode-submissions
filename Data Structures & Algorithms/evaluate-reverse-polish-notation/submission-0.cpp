class Solution {
   public:
    int evalRPN(vector<string>& tokens) {
        vector<int> shithole;
        int num;
        int result;
        for (int i = 0; i < tokens.size(); i++) {
            if (tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/") {
                num = stoi(tokens[i]);
                shithole.push_back(num);
            }

            if (tokens[i] == "+") {
            int a = shithole.back();
            int b = shithole[shithole.size() - 2];
                result = (a + b);
                shithole.pop_back();
                shithole.pop_back();
                shithole.push_back(result);
            } else if (tokens[i] == "-") {
            int a = shithole.back();
            int b = shithole[shithole.size() - 2];
                result = (b - a);
                shithole.pop_back();
                shithole.pop_back();
                shithole.push_back(result);
            } else if (tokens[i] == "*") {
            int a = shithole.back();
            int b = shithole[shithole.size() - 2];
                result = (a * b);
                shithole.pop_back();
                shithole.pop_back();
                shithole.push_back(result);
            } else if (tokens[i] == "/") {
            int a = shithole.back();
            int b = shithole[shithole.size() - 2];
                result = (b / a);
                shithole.pop_back();
                shithole.pop_back();
                shithole.push_back(result);
            }
        }
        return shithole.back();
    }
};
