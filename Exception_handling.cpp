#include <iostream>
#include <exception>
using namespace std;

class Error : public exception{
    public:
    const char *what() const throw(){
        return "Yor are not eligible for voting.\n";
    }
};              
int main()
{
    try{
        int age;
        cout<<"Enter age: "<<endl;
        cin>>age;
        if(age <= 18){
            Error e1;
            throw e1;
        }
        else cout<<"You can vote."<<endl;
    }
    catch(Error e) {
        cout<<e.what();
    }
    return 0;
}