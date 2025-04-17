#include "List.h"

template<class T>
List<T>::List(){
    head = NULL;
    tail = NULL;
}

template<class T>
List<T>::~List(){
    delete head;
    delete tail;
}

// Helper to delete a node with a specific value
template<class T>
bool List<T>::remove_helper(Node<T>* node, T value){
    if(node->get_value() == value){
        if(head == tail){
            head = NULL;
            tail = NULL;
        }else if(node == head){
            head = node->get_next();
            head->set_prev(NULL);
        }else if(node == tail){
            tail = node->get_prev();
            tail->set_next(NULL);
        }else{
            node->get_next()->set_prev(node->get_prev());
            node->get_prev()->set_next(node->get_next());
        }
        return true;
    }
    return false;
}

// Search for a node with a specific value
template<class T>
Node<T>* List<T>::find(T value){
    Node<T>* temp = head;
    while(temp){
        if(temp->get_value() == value){
            return temp;
        }
        temp = temp->get_next();
    }
    return temp;
}

// Add a new element at the end
template<class T>
void List<T>::add(T value){
    Node<T>* new_node = new Node<T>(value);
    if(is_empty()){
        head = new_node;
        tail = head;
    }else{
        tail->set_next(new_node);
        new_node->set_prev(tail);
        tail = new_node;
    }
}

// Remove all instances of a value
template<class T>
void List<T>::remove(T value){
    Node<T>* temp = head;
    while(temp){
        remove_instance(value);
        temp = temp->get_next();
    }
}

// Remove first instance of a value
template<class T>
void List<T>::remove_instance(T value){
    if(!is_empty()){
        Node<T>* temp = head;
        while(temp){
            if(remove_helper(temp, value)){
                return;
            }
            temp = temp->get_next();
        }
    }
}

// Print the list
template<class T>
void List<T>::print(){
    std::cout << "[ ";
    Node<T>* temp = head;
    while(temp){
        if(temp->get_next()){
            std::cout << temp->get_value() << ", ";
        }else{
            std::cout << temp->get_value() << " ";
        }
        temp = temp->get_next();
    }
    std::cout << "]";
}

// Check if the list is empty
template<class T>
bool List<T>::is_empty(){
    return !head;
}

// Get element by index
template<class T>
Node<T>* List<T>::get(int index){
    if(index < 0){
        return NULL;
    }
    Node<T>* temp = head;
    int i = 0;
    while(temp && i < index){
        temp = temp->get_next();
        i++;
    }
    if(!temp){
        return NULL;
    }
    return temp;
}

// Get size of the list
template<class T>
int List<T>::size(){
    int count = 0;
    Node<T>* current = head;
    while(current != nullptr){
        count++;
        current = current->get_next();
    }
    return count;
}

// Getters
template<class T>
Node<T>* List<T>::get_head(){
    return head;
}

template<class T>
Node<T>* List<T>::get_tail(){
    return tail;
}

// Setters
template<class T>
void List<T>::set_head(Node<T>* new_head){
    head = new_head;
}

template<class T>
void List<T>::set_tail(Node<T>* new_tail){
    tail = new_tail;
}