#include <iostream>
#include <vector>

using namespace std;

int main() {
    int rows, cols;

    // Get the number of rows and columns from the user
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    // Create the original matrix
    vector<vector<int>> matrix(rows, vector<int>(cols));

    // Read the matrix elements from the user
    cout << "Enter the matrix elements:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }

    // Print the original matrix
    cout << "Original matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Create the transposed matrix
    vector<vector<int>> transposed_matrix(cols, vector<int>(rows));

    // Transpose the matrix
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            transposed_matrix[j][i] = matrix[i][j];
        }
    }

    // Print the transposed matrix
    cout << "Transposed matrix:" << endl;
    for (int i = 0; i < cols; ++i) {
        for (int j = 0; j < rows; ++j) {
            cout << transposed_matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
