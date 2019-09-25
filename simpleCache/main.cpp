//
//  main.cpp
//  simpleCache
//
//  Created by Benjamin Boyle on 9/24/19.
//  Copyright © 2019 Benjamin Boyle. All rights reserved.
//

#include <iostream>
#include <map>
using namespace std;

class val {
public:
    int value;
    val(int n) { value = n; }
};

class simpleCache {
    map<int, int> mp;
    int cp;
    void set(int, val);
    int get(int);
};

void simpleCache::set(int key, val value) {
    if (mp.find(key) != mp.end()) {
        if (mp.size() == cp) {
            mp[0] = key;
            
        }
        else {
            mp.insert();
        }
    }
}

int simpleCache::get(int key) {
    if(mp.find(key) != mp.end()) {
        return mp[key];
    }
    else {
        return -1;
    }
}


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
