class TimeMap {
public:
    unordered_map<string, vector<pair<int, string>>>bro;
    TimeMap() {
    }
    
    void set(string key, string value, int timestamp) {
        bro[key].push_back({timestamp, value});
    }
    
    string get(string key, int timestamp) {
        int l = 0;
        int r = bro[key].size() - 1;
        string laado = "";
        while(l<= r){
            int mid = (l+r)/2;
            if(bro[key][mid].first <= timestamp){
                laado = bro[key][mid].second;
                l = mid+1;
            }else{
                r = mid-1;
            }
        }
        return laado;
    }
};
