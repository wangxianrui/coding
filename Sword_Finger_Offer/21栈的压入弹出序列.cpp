class Solution {
public:
    bool IsPopOrder(vector<int> pushV, vector<int> popV) {
        if (pushV.size() != popV.size())
            return false;
        vector<int> temp;
        for (int i = 0; i < pushV.size(); i++) {
            temp.push_back(pushV[i]);
            while (!temp.empty() && temp.back() == popV.front()) {
                temp.pop_back();
                popV.erase(popV.begin());
            }
        }
        return temp.empty();
    }
};