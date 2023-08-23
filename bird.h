#if !defined(Bird_h)
#define Bird_h
#include <iostream>
using namespace std;

// Interface
class Bird{
    public:
    virtual void eat() = 0;
    virtual void fly() = 0;
    // classes that inherits this class
    // has to implement pure virtual func
};

// Implementation
class Sparrow : public Bird{
    private: 
    void eat(){
        cout<<"Sparrow is eating"<<endl;
    }
    void fly(){
        cout<<"Sparrow is flying"<<endl;
    }
};
class Eagle : public Bird{
    private: 
    void eat(){
        cout<<"Eagle is eating"<<endl;
    }
    void fly(){
        cout<<"Eagle is flying"<<endl;
    }
};

#endif // Bird_h
