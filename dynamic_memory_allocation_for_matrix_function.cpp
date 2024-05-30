#include <iostream>
using namespace std;

//  adding two 2x2 matrices
void addMatrices(int** matrix1, int** matrix2, int** result) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

//  subtracting two 2x2 matrices
void subtractMatrices(int** matrix1, int** matrix2, int** result) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}

//  printing a 2x2 matrix
void printMatrix(int** matrix) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    // allocating memory for 2x2 matrices
    int** matrix1 = new int*[2];
    int** matrix2 = new int*[2];
    int** result = new int*[2];

    for (int i = 0; i < 2; i++) {
        matrix1[i] = new int[2];
        matrix2[i] = new int[2];
        result[i] = new int[2];
    }

    // Initialize matrices
    matrix1[0][0] = 1; matrix1[0][1] = 2;
    matrix1[1][0] = 3; matrix1[1][1] = 4;

    matrix2[0][0] = 5; matrix2[0][1] = 6;
    matrix2[1][0] = 7; matrix2[1][1] = 8;

    cout << "Matrix 1:" << endl;
    printMatrix(matrix1);
    cout << "Matrix 2:" << endl;
    printMatrix(matrix2);
    cout << "Matrix 1 + Matrix 2:" << endl;
    addMatrices(matrix1, matrix2, result);
    printMatrix(result);

  
    cout << "Matrix 1 - Matrix 2:" << endl;
    subtractMatrices(matrix1, matrix2, result);
    printMatrix(result);

    // deallocating memory
    for (int i = 0; i < 2; i++) {
        delete[] matrix1[i];
        delete[] matrix2[i];
        delete[] result[i];
    }
    delete[] matrix1;
    delete[] matrix2;
    delete[] result;

    return 0;
}
