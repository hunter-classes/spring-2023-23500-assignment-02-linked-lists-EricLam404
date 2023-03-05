#pragma once
#include <iostream>
#include "Node.h"

class OList{
    private:
        Node *head;

    public:
        OList();
        ~OList();
        void insert(std::string data);
        int length();

        std::string toString();
        bool contains(std::string item);
        bool remove(int loc);
        std::string get(int loc);
        void reverse();
};
