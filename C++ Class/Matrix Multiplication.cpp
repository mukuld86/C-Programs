// Matrix Multiplication
#include<iostream>
using namespace std;
int main(){
	int rowsA,colsA,rowsB,colsB,i,j;
	cout << "Enter the no. of rows and columns for Matrix A: ";
	cin >> rowsA >> colsA;
	int matA[rowsA][colsA];
	cout << "Enter elements of Matrix A:\n";
	for(i=0;i<rowsA;i++){
		cout << "Row " << i+1 << ": ";
		for(j=0;j<colsA;j++){
			cin >> matA[i][j];
		}
	}
	cout << "Enter the no. of rows and columns for Matrix B: ";
	cin >> rowsB >> colsB;
	int matB[rowsB][colsB];
	cout<<"Enter elements of Matrix B:\n";
	for(i=0;i<rowsB;i++){
		cout << "Row " << i+1 << ": ";
		for(j=0;j<colsB;j++){
			cin >> matB[i][j];
		}
	}
	if(colsA!=rowsB){
		cout << "Matrix multiplication not possible!\n";
		return 1;
	}
	int resMat[rowsA][colsB];
	for(i=0;i<rowsA;i++){
		for(j=0;j<colsB;j++){
			resMat[i][j]=0;
			for(int k=0;k<colsA;k++){
				resMat[i][j] += matA[i][k] * matB[k][j];
			}
		}
	}
	cout << "After Multiplication Resultant Matrix is:\n";
	for(i=0;i<rowsA;i++){
		for(j=0;j<colsB;j++){
			cout << resMat[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
