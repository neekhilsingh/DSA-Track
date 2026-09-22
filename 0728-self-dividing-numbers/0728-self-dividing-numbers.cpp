class Solution {
public:
    bool self(int num){
        int number=num;
        while(num>0){
            int r=num%10;
            if(r==0) return false;
            if(number%r!=0) return false;
            num/=10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left;i<=right;i++) if(self(i)) ans.push_back(i);
        return ans;
    }
};