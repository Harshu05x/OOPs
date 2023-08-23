#include <iostream>
#include "bird.h"
using namespace std;

void birddoes(Bird* b){
    b->eat();
    b->fly();
}

int main()
{
    Bird* b = new Sparrow;
    birddoes(b);

    Bird* d = new Eagle;
    birddoes(d);

    
    return 0;
}