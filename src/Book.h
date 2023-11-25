#ifndef _BOOK_H_
#define _BOOK_

#include "Paper.h"
#include <iostream>

class Book : Paper
{
private:
    
public:
    Book();
    Book(std::string name);
    ~Book();
    std::string name;
    void PrintName();
};

#endif