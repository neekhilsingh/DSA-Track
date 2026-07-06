class MyCircularDeque {
public:
    deque<int> dq;
    int sze;
    MyCircularDeque(int k) {
        deque<int> dq(k);
        sze=k;
    }
    
    bool insertFront(int value) {
        if(dq.size()<sze){
            dq.push_front(value);
            return true;
        }
        return false;
    }
    
    bool insertLast(int value) {
        if(dq.size()<sze){
            dq.push_back(value);
            return true;
        }
        return false;
    }
    
    bool deleteFront() {
        if(!dq.empty()) {
            dq.pop_front();
            return true;
        }
        return false;
    }
    
    bool deleteLast() {
        if(!dq.empty()) {
            dq.pop_back();
            return true;
        }
        return false;
    }
    
    int getFront() {
        if(dq.size()>0) return dq.front();
        return -1;
    }
    
    int getRear() {
        if(dq.size()>0) return dq.back();
        return -1;
    }
    
    bool isEmpty() {
        if(dq.size()==0) return true;
        return false;
    }
    
    bool isFull() {
        if(dq.size()==sze) return true;
        return false;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */