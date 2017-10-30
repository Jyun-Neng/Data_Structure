#ifndef ARRAY_H 
#define ARRAY_H
#include <cstddef>
#include <cstdio>
class Array {
    public:
        // data members
        long *_Array;
        // member functions
        Array() : _Array(NULL) {}
        Array(unsigned int _length){ _Array = new long [_length];}
        ~Array(){ delete [] _Array; _Array = NULL;}
        long *reCreate(unsigned int _length){ return new long [_length];}
};
#endif
