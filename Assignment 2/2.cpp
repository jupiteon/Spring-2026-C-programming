#include <iostream>
using namespace std;

const int SIZE = 3;

void InputMatrices(int A[][SIZE], int B[][SIZE]);
void Display(int M[][SIZE]);
void Add(int A[][SIZE], int B[][SIZE], int Result[][SIZE]);
void Subtract(int A[][SIZE], int B[][SIZE], int Result[][SIZE]);
void Multiply(int A[][SIZE], int B[][SIZE], int Result[][SIZE]);

void InputMatrices(int A[][SIZE], int B[][SIZE]) {
    cout << "Enter elements for Matrix A (3x3):\n";
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++) {
            cout << "  A[" << i << "][" << j << "]: ";
            cin  >> A[i][j];
        }
    cout << "Enter elements for Matrix B (3x3):\n";
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++) {
            cout << "  B[" << i << "][" << j << "]: ";
            cin  >> B[i][j];
        }
}

void Display(int M[][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++)
            cout << "\t" << M[i][j];
        cout << "\n";
    }
}

void Add(int A[][SIZE], int B[][SIZE], int Result[][SIZE]) {
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            Result[i][j] = A[i][j] + B[i][j];
}

void Subtract(int A[][SIZE], int B[][SIZE], int Result[][SIZE]) {
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            Result[i][j] = A[i][j] - B[i][j];
}

void Multiply(int A[][SIZE], int B[][SIZE], int Result[][SIZE]) {
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++) {
            Result[i][j] = 0;
            for (int k = 0; k < SIZE; k++)
                Result[i][j] += A[i][k] * B[k][j];
        }
}

int main() {
    int A[SIZE][SIZE], B[SIZE][SIZE], Result[SIZE][SIZE];
    int choice;

    InputMatrices(A, B);

    cout << "\nMatrix A:\n";  Display(A);
    cout << "\nMatrix B:\n";  Display(B);

    cout << "\nSelect operation:\n";
    cout << "  1. Addition (+)\n  2. Subtraction (-)\n  3. Multiplication (*)\n";
    cout << "Your choice: ";  cin >> choice;

do {                                                                                           
    cout << "\nSelect operation:\n";                      
    cout << "  1. Addition (+)\n  2. Subtraction (-)\n  3. Multiplication (*)\n";
    cout << "Your choice: ";                                                                   
    cin >> choice;
                                                                                                 
    switch (choice) {                                     
        case 1: Add(A, B, Result);      cout << "\nResult (A + B):\n"; break;
        case 2: Subtract(A, B, Result); cout << "\nResult (A - B):\n"; break;                  
        case 3: Multiply(A, B, Result); cout << "\nResult (A * B):\n"; break;                  
        default: cout << "Invalid choice! Try again.\n";                                       
    }
} while (choice < 1 || choice > 3);                       
                                                                                                
Display(Result); 

 
    return 0;
}
