template <class T>
class Node{
    private:
        T value;
        Node* next;
        Node* prev;

    public:
        Node(T);
        ~Node();

        // getters
        T get_value();
        Node* get_next();
        Node* get_prev();

        // setters
        void set_value(T);
        void set_next(Node*);
        void set_prev(Node*);
};