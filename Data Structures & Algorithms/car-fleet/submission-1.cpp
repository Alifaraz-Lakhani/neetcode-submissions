class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> vec;
        for(int i=0; i<position.size(); i++){
            vec.push_back({position[i], speed[i]});
        }
        sort(vec.begin(), vec.end(),[](pair<int, int> a, pair<int, int> b){
            return a.first>b.first;
        });
        int fleets = 0;
        double prevTime = 0;

        for(auto &car : vec){

            double time = (double)(target - car.first) / car.second;

            if(time > prevTime){
                fleets++;
                prevTime = time;
            }
        }
        return fleets;
    }
};
