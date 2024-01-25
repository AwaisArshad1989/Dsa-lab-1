#include <iostream>

using namespace std;

// Function prototypes
void inputMatrix(int A[][100], int m, int n);
void displayMatrix(int A[][100], int m, int n);
int sumOfElements(int A[][100], int m, int n);
void displayRowSum(int A[][100], int m, int n);
void displayColumnSum(int A[][100], int m, int n);
void createTranspose(int A[][100], int m, int n);

int main()
{
    int m, n;
    cout << "Enter the number of rows (m): ";
    cin >> m;
    cout << "Enter the number of columns (n): ";
    cin >> n;

    int matrix[100][100];

    int choice;
    do {
        cout << "\nMenu:\n";
        cout << "1. Input elements into the matrix\n";
        cout << "2. Display elements of the matrix\n";
        cout << "3. Sum of all elements of the matrix\n";
        cout << "4. Display row-wise sum of the matrix\n";
        cout << "5. Display column-wise sum of the matrix\n";
        cout << "6. Create transpose of the matrix\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            inputMatrix(matrix, m, n);
            break;
        case 2:
            displayMatrix(matrix, m, n);
            break;
        case 3:
            cout << "Sum of all elements: " << sumOfElements(matrix, m, n) << endl;
            break;
        case 4:
            displayRowSum(matrix, m, n);
            break;
        case 5:
            displayColumnSum(matrix, m, n);
            break;
        case 6:
            createTranspose(matrix, m, n);
            break;
        case 0:
            cout << "Exiting the program.\n";
            break;
        default:
            cout << "Invalid choice. Please enter a valid option.\n";
        }

    } while (choice != 0);

    return 0;
}

void inputMatrix(int A[][100], int m, int n) {
    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << "Enter element A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }
}

void displayMatrix(int A[][100], int m, int n) {
    cout << "Matrix elements:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

int sumOfElements(int A[][100], int m, int n) {
    int sum = 0;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            sum += A[i][j];
        }
    }
    return sum;
}

void displayRowSum(int A[][100], int m, int n) {
    cout << "Row-wise sum:\n";
    for (int i = 0; i < m; ++i) {
        int rowSum = 0;
        for (int j = 0; j < n; ++j) {
            rowSum += A[i][j];
        }
        cout << "Row " << i + 1 << ": " << rowSum << endl;
    }
}

void displayColumnSum(int A[][100], int m, int n) {
    cout << "Column-wise sum:\n";
    for (int j = 0; j < n; ++j) {
        int colSum = 0;
        for (int i = 0; i < m; ++i) {
            colSum += A[i][j];
        }
        cout << "Column " << j + 1 << ": " << colSum << endl;
    }
}

void createTranspose(int A[][100], int m, int n) {
    cout << "Transpose of the matrix:\n";
    for (int j = 0; j < n; ++j) {
        for (int i = 0; i < m; ++i) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}
