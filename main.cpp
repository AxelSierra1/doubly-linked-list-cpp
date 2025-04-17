#include "src/List.cpp"
#include <iostream>

using namespace std;

int main(){

    // Creating a new list of integers
    List<int>* list1 = new List<int>();
    list1->add(3);
    list1->add(4);
    list1->add(8);
    list1->add(9);
    list1->add(2);
    list1->add(1);
    list1->add(4);
    list1->add(4);
    list1->add(8);
    list1->add(4);
    list1->add(2);
    list1->add(4);

    // Printing the list after adding elements
    list1->print();
    cout << "\n";

    // Removing the first instance of 4 and printing
    list1->remove_instance(4);
    list1->print();
    cout << "\n";

    // Removing the first instance of 3 and printing
    list1->remove_instance(3);
    list1->print();
    cout << "\n";

    // Removing the first instance of 1 and printing
    list1->remove_instance(1);
    list1->print();
    cout << "\n";

    // Removing all instances of 4 and printing
    list1->remove(4);
    list1->print();
    cout << "\n";

    // Trying to remove non-existing value (11) and printing
    list1->remove(11);
    list1->print();
    cout << "\n";

    // Creating a new list of strings
    List<string>* list2 = new List<string>();
    list2->add("Java");
    list2->add("Python");
    list2->add("C++");
    list2->add("Rust");
    list2->add("HTML");

    // Printing the string list
    list2->print();
    cout << "\n";

    return 0;
}