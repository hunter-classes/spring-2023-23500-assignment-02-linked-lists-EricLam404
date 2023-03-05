#include <iostream>
#include "Node.h"
#include "OList.h"

OList::OList(){
  head = nullptr;
}

OList::~OList(){
    Node *walker, *trailer;
    walker = this->head;
    trailer = nullptr;
  
    while(walker != nullptr){
        trailer = walker;
        walker = walker->getNext();
        delete trailer;
    }
    trailer = nullptr;
    walker = nullptr;
}


void OList::insert(std::string data){
    Node *walker, *trailer;
    walker = this->head;
    trailer = nullptr;
    if(walker == nullptr){
        this->head = new Node(data);
        return;
    }
    else {
        trailer = walker;
        walker = walker->getNext();
        if(data < trailer->getData()){
            this->head = new Node(data, trailer);
            return;
        }
        while(walker != nullptr){
            if(trailer->getData() <= data && data <= walker->getData()){
                Node *newNode = new Node(data, walker);
                trailer->setNext(newNode);
                return;
            }
            trailer = walker;
            walker = walker->getNext();
        }
    }
    Node *newNode = new Node(data);
    trailer->setNext(newNode);
}

int OList::length(){
  int count = 0;
  Node *walker = head;
  while (walker != nullptr){
    count++;
    walker = walker->getNext();
  }
  return count;
}

std::string OList::toString(){
  Node *tmp = this->head;
  std::string result = "";
  while (tmp != nullptr){
    result = result + tmp->getData();
    result = result + "-->";
    tmp = tmp->getNext();
  }
  result = result + "nullptr";
  return result;
}

bool OList::contains(std::string item){
    Node *walker = this->head;
    while (walker != nullptr){
        if(walker->getData() == item){
            return true;
        }
        walker = walker->getNext();
    }
    return false;
}

bool OList::remove(int loc){
    Node *walker, *trailer;
    walker = this->head;
    trailer = nullptr;
  
    while(loc > 0 && walker != nullptr){
        loc = loc - 1;
        trailer = walker;
        walker = walker->getNext();
        
    }

    if (loc > 0 || walker == nullptr){
        return false;
    } 
    else {
        if(trailer == nullptr){
            this->head = walker->getNext();
        }
        else{
            trailer->setNext(walker->getNext());
        }
        delete walker;
        walker = nullptr;
    }
    return true;
}

std::string OList::get(int loc){
    Node *walker = this->head;
    while(loc > 0 && walker != nullptr){
        walker = walker->getNext();
        loc--;
    }
    if(loc > 0){
        return "";
    }

    return walker->getData();
} 

void OList::reverse(){
    Node *oldHead, *newHead, *temp;
    oldHead = this->head;
    newHead = nullptr;
    temp = nullptr;

    while(oldHead != nullptr){
        newHead = oldHead;
        oldHead = oldHead->getNext();
        newHead->setNext(temp);
        temp = newHead;
    }
    this->head = newHead;
}