# Doubly Linked List in C++

This is a generic implementation of a doubly linked list using templates in C++. The list supports adding, searching, printing, and removing elements.

## Features
- Add elements to the list
- Remove the first instance of a value
- Remove all instances of a value
- Search for a value
- Print the entire list
- Get size of the list
- Check if the list is empty

## Structure
```
doubly-linked-list/
├── include/
│   ├── Node.h
│   └── List.h
├── src/
│   ├── Node.cpp
│   └── List.cpp
├── main.cpp
└── README.md
```

## How to compile and run

Create the build directory if it doesn't exist
```
mkdir -p build
```
Compile
```
g++ -o build/list_example main.cpp -Iinclude
```
Run
```
./build/list_example
```
