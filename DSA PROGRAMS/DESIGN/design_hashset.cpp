class MyHashSet {
public:
bool visited_hashmap[1000001];
    MyHashSet() {
        for(int i=0;i<1000001;i++){
              visited_hashmap[i] = false;
        }
    }
    
    void add(int key) {
          visited_hashmap[key] = true;
    }
    
    void remove(int key) {
        visited_hashmap[key] = false;
    }
    
    bool contains(int key) {
        return visited_hashmap[key];
    }
};
#include<bits/stdc++.h>
using namespace std;            
int main(){
    MyHashSet* obj = new MyHashSet();
    obj->add(1);
    obj->add(2);
    cout<<obj->contains(1)<<endl;
    cout<<obj->contains(3)<<endl;
    obj->add(2);
    cout<<obj->contains(2)<<endl;
    obj->remove(2);
    cout<<obj->contains(2)<<endl;
}