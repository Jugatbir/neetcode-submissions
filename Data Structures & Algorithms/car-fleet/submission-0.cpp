class Solution {
   public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        stack<float> tem;
        vector<pair<int, int>> cars;

        int fleets = 0;
        for (int i = 0; i < position.size(); i++) {
            cars.push_back({position[i], speed[i]});
        }
        sort(cars.begin(), cars.end());
        for (int i = position.size() - 1; i >= 0; i--) {
            float distance = target - cars[i].first;
            float time = distance / cars[i].second;

            if (tem.empty()) {
                tem.push(time);
            } else if (time > tem.top()) {
                tem.push(time);
            }
        }
        return tem.size();
    }
};
