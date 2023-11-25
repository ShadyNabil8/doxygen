#include "Paper.h"

Paper::Paper()
{
    this->dimentions = 10;
    this->weight = 20;
}

Paper::~Paper()
{
}

int Paper::GetDimention()
{
    return this->dimentions;
}
int Paper::GetWeight()
{
    return this->weight;
}