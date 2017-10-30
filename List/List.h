#ifndef LIST_H
#define LIST_H
#include <iostream>
#include "Array.h"

using namespace std;

class List : public Array {
    private:
        unsigned int _len;
    public:
        List();  // constructor
        List(unsigned int _length); // constructor with list length
        List(const List &other);    // copy constructor
        ~List(); // deconstructor

        int setLength(unsigned int _length);    // set the length of list if the origin length is 0
        unsigned int getLength(){ return _len;} // return the value of length
        int setElement(unsigned int pos, long val); // _Array[pos] = val
        long getElement(unsigned int pos){ return _Array[pos];}  // return the value of _Array[pos]

        List& operator=(const List &);
        List operator+(const List &);
        List& operator+=(const List &);
        List& operator++();
        List& operator++(int);
        List& operator--();
        List& operator--(int);

        friend ostream& operator<<(ostream &, List &);
        friend istream& operator>>(istream &, List &);
};
#endif
