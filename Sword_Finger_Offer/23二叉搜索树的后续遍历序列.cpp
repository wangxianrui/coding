class Solution {
public:
    bool VerifySquenceOfBST(vector<int> sequence) {
        if (sequence.empty())
            return false;
        // classify empty case
        return IsBST(sequence);
    }

    bool IsBST(vector<int> sequence) {
        if (sequence.empty())
            return true;
        int root = sequence.back();
        sequence.pop_back();
        int i, mid;
        for (i = 0; i < sequence.size(); i++) {
            if (sequence[i] > root)
                break;
        }
        mid = i;
        for (; i < sequence.size(); i++) {
            if (sequence[i] < root)
                return false;
        }
        vector<int> left(sequence.begin(), sequence.begin() + mid);
        vector<int> right(sequence.begin() + mid, sequence.end());
        return IsBST(left) && IsBST(right);
    }
};