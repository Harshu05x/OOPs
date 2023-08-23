// CPP program
#include <algorithm>
#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

class abc{
	public:
	int x;
	int* y;

	abc(int _x, int _y): x(_x), y(new int(_y)){}

    // Samrt Deep copy ctor
	abc(const abc& obj){
		this->x = obj.x;
		this->y = new int (*obj.y);
	}

	void print(){
		cout<<"x: "<<this->x<<endl;
		cout<<"y: "<<this->y<<endl;
		cout<<"Inside y: "<<*y<<endl;
	}
};

int main() {

	abc a(1,2);
	cout<<"\nPrinting a\n";
	a.print();
	
	abc b = a;
	cout<<"\nPrinting b\n";
	b.print();
	
	*b.y = 100;
	cout<<"\nPrinting a\n";
	a.print();
	cout<<"\nPrinting b\n";
	b.print();
	
  return 0;
}
