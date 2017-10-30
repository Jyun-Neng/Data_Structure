#include "List.h"
#include <cstdio>
#include <cstddef>

using namespace std;

List::List()
    : _len(0)
{}

List::List(unsigned int _length)
    : Array(_length), _len(_length)
{}

List::List(const List &other){
    _len = other._len;
    if (_len>0) {
        _Array = new long [_len];
        for (int i=0; i < _len; i++) _Array[i] = other._Array[i];
    }
    else _Array = NULL;
}

List::~List() {
    _len = 0;
}

int List::setLength(unsigned int _length){
    if (!_len) {
        _Array = reCreate(_length);
        _len = _length;
        return 1;
    }
    else return 0;
}

int List::setElement(unsigned int pos, long val){
    if (pos<_len) { 
        _Array[pos] = val;
        return 1;
    }
    else {
        printf("pos is illegal.\n");
        return 0;
    } 
}

List& List::operator=(const List &list){
    this -> setLength(list._len);
    for (int i = 0; i < list._len; i++)
        this -> _Array[i] = list._Array[i];
    return *this;
}

List List::operator+(const List &other){
    unsigned int min_len = (_len < other._len) ? _len : other._len;
    List result(min_len);
    for (int i = 0; i < min_len; i++)
        result._Array[i] = _Array[i] + other._Array[i];
    return result;
}

List& List::operator+=(const List &other){
    unsigned int min_len = (_len < other._len) ? _len : other._len;
    for (int i = 0; i < min_len; i++){
        this->_Array[i] += other._Array[i];
    }
    return *this; 
}

List& List::operator++(){
    for (int i = 0; i < _len; i++) {
        ++_Array[i];
    }
    return *this;

}

List& List::operator++(int){
    for (int i = 0; i < _len; i++)
        _Array[i]++;   // postfix++
    return *this;
}

List& List::operator--(){
    for (int i = 0; i < _len; i++) {
        --_Array[i];
    }
    return *this;

}
List& List::operator--(int){
    for (int i = 0; i < _len; i++) {
        _Array[i]--;
    }
    return *this;

}
ostream& operator<<(ostream &out, List &list){
    for (int i = 0; i < list._len; i++) 
        out << list._Array[i] << " ";
    out << endl;
    return out;
}

istream& operator>>(istream &in, List &list){
    for (int i = 0; i < list._len; i++)
        in >> list._Array[i];
    return in;
}


