class NumberContainers {
    map<int,int>x;
public:
    NumberContainers() {
        return;
    }
    
    void change(int index, int number) {
        x[index]=number;
    }
    
    int find(int number) {
        for(auto i:x){
            if(i.second==number)
                return i.first;      
        }
        return -1;
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */