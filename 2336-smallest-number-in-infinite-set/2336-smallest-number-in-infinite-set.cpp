class SmallestInfiniteSet {
public:
    vector<bool> nums;
    int i;

    SmallestInfiniteSet() {
        nums= vector<bool> (1001,true);
        i=1;
    }
    
    int popSmallest() {
        int result=i;
        nums[i]=false;
        while (i<=1000 && !nums[i]) i++;

        return result;
    }
    
    void addBack(int num) {
        if(num<i){
            i=num;
        }
        nums[num]=true;
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */