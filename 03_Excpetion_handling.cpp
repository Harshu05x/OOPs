#include <iostream>
using namespace std;

class Publication{
    protected:
    string title;
    float price;
    public:

    void set_zero(){
        this->title = "None";
        this->price = 0.0;
    }

    void get_data(){
        cout<<"Enter Title: ";
        getline(cin>>ws,this->title);
        cout<<"Enter price: ";
        cin>>this->price;
    }

    void display(){
        cout<<"Title: "<<this->title<<endl;
        cout<<"Price: "<<this->price<<" rs"<<endl;
    } 
};

class Book : protected Publication{
    int page_count;
    public:
    void set_zero(){
        Publication :: set_zero();
        page_count = 0;
    }

    void get_data(){
        cout<<"Enter Book Details = \n";
        Publication :: get_data();
        cout<<"Enter page count: ";
        cin>>this->page_count;

        try
        {
            if(this->price < 0) throw (0.0);
            if(this->page_count < 0) throw (0);
        }
        catch(double x)
        {
           cout<<"\n\t***Expection Caught***"<<endl;
           cout<<"Price can not hold a negative value.\nSetting all values to zero."<<endl;
           this->set_zero();
        }
        catch(int x)
        {
           cout<<"\n\t***Expection Caught***"<<endl;
           cout<<"Page count can not hold a negative value.\nSetting all values to zero."<<endl;
           this->set_zero();
        }
        
    }

    void display(){
        cout<<"\n\tBook Details-->\n";
        Publication :: display();
        cout<<"Page count: "<<this->page_count<<" pages"<<endl;
    }
};

class Tape : protected Publication{
    double play_time;
    public:
    void set_zero(){
        Publication :: set_zero();
        play_time = 0.0;
    }

    void get_data(){
        cout<<"Enter Tape Details = \n";
        Publication :: get_data();
        cout<<"Enter play time(min): ";
        cin>>this->play_time;

        try
        {
            if(this->price < 0) throw(0);
            if(this->play_time< 0) throw(0.0);
        }
        catch(int x){
            cout<<"\n\t***Exception Caught***"<<endl;
            cout<<"Price can not hold a negative value.\nSetting all values to zero."<<endl;
            this->set_zero();
        }
        catch(double x){
            cout<<"\n\t***Exception Caught***"<<endl;
            cout<<"Play time can not hold a negative value.\nSetting all values to zero."<<endl;
            this->set_zero();
        }
    }

    void display(){
        cout<<"\n\tTape Details-->\n";
        Publication :: display();
        cout<<"Play time: "<<this->play_time<<" min\n";
    }
};

int main()
{
     
    Book B1;
    B1.get_data();
    B1.display();
    cout<<endl;
    Tape T1;
    T1.get_data();
    T1.display();
    return 0;
}