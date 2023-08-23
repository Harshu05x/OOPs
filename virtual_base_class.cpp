#include <iostream>
using namespace std;

class A{
    int a;
    public :
    void show(){ cout<<"Hello form A\n";}
};

class B: virtual public A{};

class C: public virtual A{};

class D: public B , public C{};

int main()
{
    D d1;
    d1.show();    
    return 0;
}