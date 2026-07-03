class MyHashSet {
public:

    bool table[1000001];

    MyHashSet() {

        for(int i = 0; i <= 1000000; i++) {
            table[i] = false;
        }

    }

    void add(int key) {

        table[key] = true;

    }

    void remove(int key) {

        table[key] = false;

    }

    bool contains(int key) {

        return table[key];

    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */