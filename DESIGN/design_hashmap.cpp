class MyHashMap {
public:
int visited_hashmap[1000001];
    MyHashMap() {
        for(int i=0;i<1000001;i++){
            visited_hashmap[i] = -1;
        }
    }
    void put(int key, int value) {
        visited_hashmap[key] = value;
    }
    
    int get(int key) {
        return visited_hashmap[key];
    }
    
    void remove(int key) {
        visited_hashmap[key] = -1;
    }
};

#include<bits/stdc++.h>
using namespace std;
int main(){
    MyHashMap* obj = new MyHashMap();
    obj->put(1, 1);
    obj->put(2, 2);
    cout<<obj->get(1)<<endl;
    cout<<obj->get(3)<<endl;
    obj->put(2, 1);
    cout<<obj->get(2)<<endl;
    obj->remove(2);
    cout<<obj->get(2)<<endl;
}