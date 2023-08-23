#include <iostream>
using namespace std;

class Complex{
    int x,y;

    public:
    Complex(){
        this->x = 0;
        this->y = 0;
    }
    friend istream & operator >> (istream &is, Complex &u);
    friend ostream & operator << (ostream &os, Complex &u);

    Complex operator + ( Complex &v );
    Complex operator - ( Complex &v );
    Complex operator * ( Complex &v );

};
istream & operator >> (istream &is, Complex &u){
    cout<<"Enter X1: ";
    cin>>u.x;
    cout<<"Enter Y1: ";
    cin>>u.y;
}
ostream & operator << (ostream &os, Complex &u){
    if(u.y > 0)
        cout<<"complex num : "<<u.x<<" + "<<u.y<<"i\n";
    else
        cout<<"complex num : "<<u.x<<" - "<<abs(u.y)<<"i\n";

}

Complex Complex :: operator+ ( Complex &v){
    Complex add;
    add.x = x + v.x;
    add.y = y + v.y;

    if(add.y > 0) cout<<"Addition: "<<add.x<<" + "<<add.y<<"i"<<endl;
    else cout<<"Addition: "<<add.x<<" - "<<abs(add.y)<<"i"<<endl;
}
Complex Complex :: operator- ( Complex &v){
    Complex minus;
    minus.x = x - v.x;
    minus.y = y - v.y;

    if(minus.y > 0) cout<<"Subtraction: "<<minus.x<<" + "<<minus.y<<"i"<<endl;
    else cout<<"Subtraction: "<<minus.x<<" - "<<abs(minus.y)<<"i"<<endl;
}
Complex Complex :: operator* ( Complex &v){
    Complex multi;
    multi.x = x * v.x - y * v.y;
    multi.y = x * v.y + y * v.x;
    
    if(multi.y > 0) cout<<"Multiplication: "<<multi.x<<" + "<<multi.y<<"i"<<endl;
    else cout<<"Multiplication: "<<multi.x<<" - "<<abs(multi.y)<<"i"<<endl;
}

int main (){
    Complex S1,S2;
    cin>>S1;
    cout<<S1;
    cin>>S2;
    cout<<S1;

    Complex S3;
    int ch;
    char des;

    do{
        cout<<"\n\tMenu"<<endl;
        cout<<"1. Addition"<<endl;
        cout<<"2. Subtraction"<<endl;
        cout<<"3. Multiplication"<<endl;
        cout<<"Enter your choice: ";
        cin>>ch;

        switch(ch){
            case 1: S3 = S1 + S2;
                    break;

            case 2: S3 = S1 - S2;
                    break;

            case 3: S3 = S1 * S2;
                    break;

            default : cout<<"Invalid Option";
        }
        cout<<"Do u want to continue(y/n): ";
        cin>>des; 

    }while(des == 'y');

    return 0;

}