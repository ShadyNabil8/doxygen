#include "Book.h"
Book::Book()
{
}

Book::~Book()
{
}

void Book::PrintName()
{
    std::cout << this->name << std::endl;
}

Book::Book(std::string name)
{
    this->name = name;
}