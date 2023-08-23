#include <iostream>
using namespace std;

class GeneralInfo{
    int age,x;
    string name;
    string address;
    public:
    GeneralInfo(){
        this->name = "None";
        this->age = 0;
        this->address = "None";
    }
    void Accept_01(){
        cout<<"Enter name: ";
        getline(cin,this->name);
        cout<<"Enter age: ";
        cin>>this->age;
        cout<<"Enter address: ";
        cin>>this->address;
    }
    void Accept(){
        cout<<"Enter x: ";
        cin>>this->x;
    }
    void display_01(){
        cout<<"\nGeneral Info-->\n"; 
        cout<<"Name: "<<this->name<<endl;
        cout<<"Age: "<<this->age<<endl;
        cout<<"Address: "<<this->address<<endl;
        cout<<"X: "<<this->x<<endl;
    }
};
class AcademicInfo{
    int marks,y;
    char grade;
    public: 
    void Accept_02(){
        cout<<"Enter marks: ";
        cin>>this->marks;
        cout<<"Enter Grade: ";
        cin>>this->grade;
    }
    void Accept(){
        cout<<"Enter y: ";
        cin>>this->y;
    }
    void display_02(){
        cout<<"\nAcademic Info-->\n";
        cout<<"Marks: "<<this->marks<<" %"<<endl;
        cout<<"Grade: "<<this->grade<<endl;
        cout<<"Y: "<<this->y<<endl;
    }
};
class EmployeeInfo : public GeneralInfo , public AcademicInfo{
    int id,z;
    long salary;
    public: 
    void Accept_03(){
        cout<<"Enter ID: ";
        cin>>this->id;
        cout<<"Enter salary: ";
        cin>>this->salary;
    }
    void Accept(){
        cout<<"Enter z: ";
        cin>>this->z;
    }
    void display_03(){
        cout<<"\nEmployee Info-->\n";
        cout<<"EMP ID: "<<this->id<<endl;
        cout<<"Salary: "<<this->salary<<endl;
        cout<<"Z: "<<this->z<<endl;
    }
    
};

int main()
{
    EmployeeInfo harsh;
    harsh.Accept_01();
    harsh.Accept_02();
    harsh.Accept_03();

    harsh.GeneralInfo::Accept();
    harsh.AcademicInfo::Accept();
    harsh.Accept();
    
    cout<<"\nDetalis-->\n";
    harsh.display_01();
    cout<<endl;
    harsh.display_02();
    cout<<endl;
    harsh.display_03();
    cout<<endl;


    return 0;
}