#include <iostream>
#include "vector.h"

class User {
public:
    User() {
        std::cout << "User constructor" << std::endl;
    }

    ~User() {
        std::cout << "User destructor" << std::endl;
    }
};

void add_user(Vector<User> & vector) {
    User user;
    vector.push_back(user);
}

int main(int argc, char *argv[]) {
    Vector<User> users;
    add_user(users);

    Vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.insert(0, 40);
    v.insert(2, 20);
    v.insert(7, 30);
    v.insert(5, 50);
    v.erase(0);
    v.erase(1);
    v.erase(3);
    v.erase(5);

    for (int i=0; i < v.size(); i++) {
        std::cout << v[i] << " ";
    }

    std::cout << std::endl;

    std::cout << "size: " << v.size() << std::endl;
    std::cout << "capacity: " << v.capacity() << std::endl;

    return 0;
}