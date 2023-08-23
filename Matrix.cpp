#include <iostream>
#include <vector>
using namespace std;


class Matrix {

	vector<vector<int>> arr;
    int n;
    public:
    Matrix(int n){
        this->n = n;
        vector<vector<int>> temp(n,vector<int>(n,0));
        arr = temp;
    }
	friend istream& operator >> (istream& is, Matrix& mat);
	friend ostream& operator << (ostream& os, Matrix& mat);
	
	Matrix operator+(Matrix& mat);
	Matrix operator-(Matrix& mat);
	Matrix operator*(Matrix& mat);
};

istream& operator >> (istream& is ,Matrix& mat){
    for (int i = 0; i < mat.n; i++) {
		for (int j = 0; j < mat.n; j++) {
			is>>mat.arr[i][j];
		}
	}
    return is;
}

ostream& operator << (ostream& os, Matrix& mat){   
    
    for (int i = 0; i < mat.n; i++) {
		for (int j = 0; j < mat.n; j++) {
			os << mat.arr[i][j] << " ";
		}
		cout << endl;
	}
    return os;
}

Matrix Matrix::operator + (Matrix& mat){
    
    Matrix temp(mat.n);
	for (int i = 0; i < mat.n; i++) {
		for (int j = 0; j < mat.n; j++) {
			temp.arr[i][j] = this->arr[i][j] + mat.arr[i][j];
		}
	}
    return temp;
}

Matrix Matrix::operator - (Matrix& mat){
	Matrix temp(mat.n);
	for (int i = 0; i < mat.n; i++) {
		for (int j = 0; j < mat.n; j++) {
			temp.arr[i][j] = this->arr[i][j] - mat.arr[i][j];
		}
	}    
    return temp;
}

Matrix Matrix::operator*(Matrix& mat){
	
    Matrix temp(mat.n);
	for (int i = 0; i < mat.n; i++) {

		for (int j = 0; j < mat.n; j++) {
			temp.arr[i][j] = 0;
			for (int k = 0; k < mat.n; k++) {
				temp.arr[i][j] += this->arr[i][k] * (mat.arr[k][j]);
			}
		}
	}
    return temp;
}

// Driver Code
int main(){
	int n = 3;

	Matrix mat1(n), mat2(n);

    cout<<"Enter First Matix: \n";
	cin>>mat1;
    cout<<"Enter Second Matix: \n";
	cin>>mat2;

    cout<<"First Matix: \n";
    cout<<mat1;
    cout<<"Second Matix: \n";
    cout<<mat2;

     
    Matrix mat3 = mat1 + mat2;
	cout << "Addition of two given Matrices is : \n" << mat3 << endl;
    mat3 = mat1 - mat2;
	cout << "Subtraction of two given Matrices is : \n" << mat3 << endl;
    mat3 = mat1 * mat2;
	cout << "Multiplication of two given Matrices is : \n" << mat3 << endl;

	return 0;
}
