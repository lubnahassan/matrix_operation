#include <iostream>
#include <bits/stdc++.h>
#include "MATRIX.h"

using namespace std;

int main()
{
    //int matrix_1[10]={{1,2,3},{4,5,6},{7,8,9}};
    //int matrix_2[10]={{10,20,30},{40,50,60},{}
   /*int data1 [] = {2,2,2,2,2,2};
   int data2 [] = {2,2,2,2,2,2};
   int data3 [] = {10,100,10,100,10,100,10,100};
   int data4 [] = {0,0,0,0,0,0,0,0,0,0,0,0};*/

   MATRIX<int> mat1;
   MATRIX<int> mat2;
   MATRIX<int> mat3;
   MATRIX<int> mat4;
   cout<<"enter mat1"<<endl;
   cin>>mat1;
   cout<<"enter mat2"<<endl;
   cin>>mat2;
   cout<<"enter mat3"<<endl;
   cin>>mat3;
   cout<<"enter mat4"<<endl;
   cin>>mat4;
   //cout << "Matri  x 1 is :"<< endl ;*/
   //cout << mat1 << endl;
   /*cout << "Matrix 2 is :"<< endl << mat2 << endl;
   cout << "Matrix 3 is :"<< endl << mat3 << endl;
   cout << "Matrix 4 is :"<< endl << mat4 << endl;
*/
   cout << "The Transpose of matrices 1 is : " << endl<< mat1.Transpose() << endl;
   cout << "The addition of two matrices 3 and 3 is : " << endl<< (mat3 + mat3) << endl;
   cout << "The differance of two matrices 2 and 1 is :"<< endl<< (mat2 - mat1) << endl;
   cout << "The multiplication of two matrices 1 and 2 is :"    << endl<< (mat1 * mat2) << endl;

    return 0;
}
