#include <stdio.h>
#include "Matrix.h"
#include "Matrix.cpp"

#include <iostream>


using namespace std;
int main(int argc, char **argv)
{
   // Matrix<double> *m1;
    Matrix<int> *m1 = new Matrix<int>(3,3,3);
    Matrix<int> *m2 = new Matrix<int>(3,3,'r');
  //  Matrix<int> *m3 = new Matrix<int>(3,4,3);
    m2->MatrixPrint();
    cout<<endl;
    //(*m2) = (*m1) - (*m2);
    //m2->MatrixTranspose();
     //m2->MatrixPrint();
    //m2->MatrixResize(6,3);
    //m2->MatrixPrint();
    //m2->MatrixEmul(*m1);
    //(*m2) = (*m2) ^ 3;
    cout<<endl;
    //cout<<m2->MatrixDeterminant()<<endl;;
    m2->MatrixInverse();
    //m2->MatrixPrint();

	return 0;
}  

	
