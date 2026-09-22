#include <iostream>
using namespace std;
void display(int A[][10], int r1, int c1,
             int B[][10], int r2, int c2,
             int R[][10], int r3, int c3,
             int operation)
{
    int i, j;
    cout << "\nInput Matrix M1:\n";
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }
    if (operation != 4)
    {
        cout << "\nInput Matrix M2:\n";
        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                cout << B[i][j] << "\t";
            }
            cout << endl;
        }
    }
    cout << "\nResultant Matrix:\n";
    for (i = 0; i < r3; i++)
    {
        for (j = 0; j < c3; j++)
        {
            cout << R[i][j] << "\t";
        }
        cout << endl;
    }
}
void addition(int M1[][10], int M2[][10], int R[][10],
              int r, int c)
{
    int i, j;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            R[i][j] = M1[i][j] + M2[i][j];
        }
    }
}
void subtraction(int M1[][10], int M2[][10], int R[][10],
                 int r, int c)
{
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            R[i][j] = M1[i][j] - M2[i][j];
        }
    }
}
void multiplication(int M1[][10], int M2[][10], int R[][10],
                    int r1, int c1, int c2)
{
    int i, j, k;
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            R[i][j] = 0;

            for (k = 0; k < c1; k++)
            {
                R[i][j] = R[i][j] + M1[i][k] * M2[k][j];
            }
        }
    }
}
void transpose(int M[][10], int R[][10], int r, int c)
{
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            R[j][i] = M[i][j];
        }
    }
}
int main()
{
    int M1[10][10], M2[10][10], R[10][10];
    int r1, c1, r2, c2;
    int choice, matrixChoice;
    char again;
    cout << "Enter rows and columns of Matrix M1: ";
    cin >> r1 >> c1;
    cout << "\nEnter elements of Matrix M1:\n";
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> M1[i][j];
        }
    }
    cout << "\nEnter rows and columns of Matrix M2: ";
    cin >> r2 >> c2;
    cout << "\nEnter elements of Matrix M2:\n";
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin >> M2[i][j];
        }
    }
    do
    {
        cout << "\n MATRIX MENU \n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Transpose\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
            case 1:
                if (r1 == r2 && c1 == c2)
                {
                    addition(M1, M2, R, r1, c1);
                    display(M1, r1, c1,
                            M2, r2, c2,
                            R, r1, c1, 1);
                }
                else
                {
                    cout << "\nAddition is not possible...\n";
                    cout << "Both matrices must have the same order...\n";
                }
                break;
            case 2:
                if (r1 == r2 && c1 == c2)
                {
                    subtraction(M1, M2, R, r1, c1);
                    display(M1, r1, c1,
                            M2, r2, c2,
                            R, r1, c1, 2);
                }
                else
                {
                    cout << "\nSubtraction is not possible...\n";
                    cout << "Both matrices must have the same order...\n";
                }
                break;
            case 3:
                if (c1 == r2)
                {
                    multiplication(M1, M2, R,
                                   r1, c1, c2);
                    display(M1, r1, c1,
                            M2, r2, c2,
                            R, r1, c2, 3);
                }
                else
                {
                    cout << "\nMultiplication is not possible...\n";
                    cout << "Columns of M1 must be equal to rows of M2...\n";
                }
                break;
            case 4:
                cout << "\nWhich matrix do you want to transpose?\n";
                cout << "1. Matrix M1\n";
                cout << "2. Matrix M2\n";
                cout << "Enter your choice: ";
                cin >> matrixChoice;
                if (matrixChoice == 1)
                {
                    transpose(M1, R, r1, c1);
                    cout << "\nInput Matrix M1:\n";
                    for (int i = 0; i < r1; i++)
                    {
                        for (int j = 0; j < c1; j++)
                        {
                            cout << M1[i][j] << "\t";
                        }
                        cout << endl;
                    }
                    cout << "\nResultant Matrix (Transpose of M1):\n";
                    for (int i = 0; i < c1; i++)
                    {
                        for (int j = 0; j < r1; j++)
                        {
                            cout << R[i][j] << "\t";
                        }
                        cout << endl;
                    }
                }
                else if (matrixChoice == 2)
                {
                    transpose(M2, R, r2, c2);
                    cout << "\nInput Matrix M2:\n";
                    for (int i = 0; i < r2; i++)
                    {
                        for (int j = 0; j < c2; j++)
                        {
                            cout << M2[i][j] << "\t";
                        }
                        cout << endl;
                    }
                    cout << "\nResultant Matrix (Transpose of M2):\n";
                    for (int i = 0; i < c2; i++)
                    {
                        for (int j = 0; j < r2; j++)
                        {
                            cout << R[i][j] << "\t";
                        }
                        cout << endl;
                    }
                }
                else
                {
                    cout << "\nInvalid matrix choice...\n";
                }
                break;
            case 5:
                cout << "\nProgram terminated...\n";
                return 0;
            default:
                cout << "\nInvalid choice...\n";
        }
        if (choice != 5)
        {
            cout << "\nDo you want to continue? (Y/N): ";
            cin >> again;
        }
    } while (again == 'Y' || again == 'y');
    cout << "\nProgram ended...\n";
    return 0;
}