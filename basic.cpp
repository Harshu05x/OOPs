#include <iostream>
using namespace std;

class Animal{
    public:
    Animal(){
        cout<<"Animal ctor called"<<endl;
    }
    virtual void speak(){
        cout<<"Speaking"<<endl;
    }
    virtual ~Animal(){
        cout<<"Animal dtor called"<<endl;
    }
};

class Dog : public Animal{
    public:
    Dog(){
        cout<<"Dog ctor called"<<endl;
    }
    void speak(){
        cout<<"Barking"<<endl;
    }
    ~Dog(){
        cout<<"Dog dtor called"<<endl;
    }
};

int main()
{
    // Upcasting
    Animal* a = new Dog();
    a->speak();

    // // Downcasting
    // Dog* d = (Dog*) new Animal();
    // d->speak();

    // // 1]
    // Animal* a = new Animal();
    // delete a;
    // cout<<endl;
    // // 2]
    // Animal* b = new Dog();
    // delete b;
    // cout<<endl;
    // // 3]
    // Dog* c = new Dog();
    // delete c;
    // cout<<endl;
    // // 4]
    // Dog* d = (Dog*) new Animal;
    // delete d;
    // cout<<endl;
    // // 5]
    // Animal e;
    // cout<<endl;
    // // 6]
    // Dog f;
    // cout<<endl;
    
    return 0;
}