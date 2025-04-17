#include "Node.h"
#include <iostream>

using namespace std;

template <class T>
Node<T>::Node(T data){
    value = data;
    next = NULL;
    prev = NULL;
}

template <class T>
Node<T>::~Node(){
    delete next;
    delete prev;
}

// get
template <class T>
T Node<T>::get_value(){
    return value;
}

template <class T>
Node<T>* Node<T>::get_next(){
    return next;
}

template <class T>
Node<T>* Node<T>::get_prev(){
    return prev;
}

// set
template <class T>
void Node<T>::set_value(T data){
    value = data;
}

template <class T>
void Node<T>::set_next(Node* new_node){
    next = new_node;
}

template <class T>
void Node<T>::set_prev(Node* new_node){
    prev = new_node;   
}