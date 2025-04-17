#include "../src/Node.cpp"

template<class T>
class List{
    private:
        Node<T>* head;
        Node<T>* tail;

        bool remove_helper(Node<T>*, T);  // Done // helper function for remove_instance(), returns true if successfully removed
    public:
        List();
        ~List();

        Node<T>* find(T);               // Done // searches and returns the position of the first instance of an element
        void add(T);                    // Done // adds a new element
        void remove(T);                 // Done // removes all instances of an element
        void remove_instance(T);        // Done // removes the first instance of an element
        void print();                   // Done // prints the list
        bool is_empty();                // Done // checks if the list is empty
        void sort();                    // sorts the elements
        Node<T>* get(int);              // Done // returns the nth node of the list
        int size();                     // Done // returns the number of elements in the list

        // getters
        Node<T>* get_head();
        Node<T>* get_tail();

        // setters
        void set_head(Node<T>*);
        void set_tail(Node<T>*);
};