/*
Name: Prashant Sah
ID: 24130745
MAC 125, Section 8512
Assignment_1, program_1
program of two matrix multiplication
*/
#include <iostream>
using namespace std;

int main() {
    int r1,c1,r2,c2,mat1[5][5],mat2[5][5],mult[5][5];
    
    cout<<"----------------Matrix multiplication-----------------"<<endl;
    flag:
    cout<<"Enter the row and column for the first matrix: \n";
    cin>>r1>>c1;
    cout<<"Enter the row and column for the second matrix: \n";
    cin>>r2>>c2;
    //verifying if the matrixes are eliglible for multiplication or not
    if(c1 != r2){
        cout<<"The number of columnss for the first martix should equal with the rows of second matrix";
        goto flag;
    }
    //taking input for the first matrix
        cout<<"enter the first matrix: \n";
        for(int i=0; i<r1;i++){
            for(int j=0; j<c1;j++){
                cin>>mat1[i][j];
            }
        }
    //taking input for the second matrix
        cout<<"enter the second matrix: \n";
        for(int i=0; i<r2;i++){
            for(int j=0; j<c2;j++){
                cin>>mat2[i][j];
            }
        }
    //initializing the matrix mult
    for(int i=0; i<r1;i++){
        for(int j=0; j<c2;j++){
            mult[i][j]=0;
        }
    }
    //multiplying mat1 and mat2 and storing in array mult
    for(int i=0; i<r1;i++){
        for(int j=0;j<c2;j++){
            for(int k=0;k<c1;k++){
                mult[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    cout<<endl<<"The output matrix is: "<<endl;
    //since the number of r1 and c2 should be equal for multiplication, the resulted matrix is also of size r1Xc2 so...
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<" "<<mult[i][j];
        }
        cout<<endl;
    }
    
    return 0;
}
