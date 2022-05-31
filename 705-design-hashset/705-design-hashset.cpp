class MyHashSet {
public:
    vector<int> v;
    MyHashSet() {
        
    }
    
    void add(int key) {
        vector<int>::iterator it;
        it = find(v.begin(),v.end(),key);
        if(it == v.end()){
            v.push_back(key);
        }
    }
    
    void remove(int key) {
        vector<int>::iterator it;
        it = find(v.begin(),v.end(),key);
        if(it != v.end()){
            v.erase(it);
        }
    }
    
    bool contains(int key) {
        for(auto i : v){
            if(i == key){
                return true;
            }
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */