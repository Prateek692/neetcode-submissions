
class MyHashSet {
    struct LinkedListNode{
        int key;
        LinkedListNode * next;
        LinkedListNode(int key){
            this->key = key;
            this->next = nullptr;
        }
    };
    vector<LinkedListNode*>arr;
    int hash(int key){
        return key % arr.size();
    }

public:
    MyHashSet() {
        arr.resize(10000);
        for(auto & ele:arr)
            ele = new LinkedListNode(0);
    }
    
    void add(int key) {
        LinkedListNode* current = arr[hash(key)];
        while(current->next){
            if(current->next->key == key)
                return;
            current = current->next;
        }
        current->next = new LinkedListNode(key);
    }
    
    void remove(int key) {
        LinkedListNode* current = arr[hash(key)];
        while(current->next){
            if(current->next->key == key){
                LinkedListNode* temp = current->next;
                current->next = temp->next;
                delete temp;
                return;
            }
            current = current->next;   
        }
    }
    
    bool contains(int key) {
        LinkedListNode* current = arr[hash(key)];
        while(current->next){
            if(current->next->key == key){
                return true;
            }
            current = current->next;   
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