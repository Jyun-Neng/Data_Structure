#include "List.h"
#include <cstdio>
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, const char *argv[])
{
    ifstream myfile(argv[1]);
    ofstream result("RESULT.txt");
    int lines, len;
    

    myfile >> lines;    // List size.
    len = lines;

    List l1(len);
    myfile >> l1;   // input data to list l1.
    result << "l1 = " << l1;     // print out the data in list l1.

    List l2, l3(l1), l4(len);
    result << "l3 = " << l3;
    l2 = l1;
    result << "l2 = " << l2;
    l4 = l1;
    result << "l4 = " << l4;
    l4 = l1 + l2;
    result << "l4 = l1 + l2 = " << l4;
    ++l1;
    result << "++l1 = " << l1;
    l3++;
    result << "l3++ = " << l3;
    l4 += l1;
    result << "l4 += l1 = " << l4;
    --l1;
    result << "--l1 = " << l1;
    l2--;
    result << "l2-- = " << l2;

    return 0;
}
