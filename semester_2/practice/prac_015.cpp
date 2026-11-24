/* Write a program to convert the Sparse Matrix into non-zero form and vice-versa. */

#include<iostream>
using namespace std;

template <class T>
class sparseMatrix {
private:
    T mat[10][10];
    T sparse[50][3];
    int r, c;

public:
    sparseMatrix() {}

    void readNormal() {
        cout << "Enter rows and columns: ";
        cin >> r >> c;
        cout << "Enter matrix elements:\n";
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                cin >> mat[i][j];
            }
        }
    }

    void toSparse() {
        int count = 0;
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                if(mat[i][j] != 0) {
                    count++;
                }
            }
        }

        sparse[0][0] = r;
        sparse[0][1] = c;
        sparse[0][2] = count;

        int k = 1;
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                if(mat[i][j] != 0) {
                    sparse[k][0] = i;
                    sparse[k][1] = j;
                    sparse[k][2] = mat[i][j];
                    k++;
                }
            }
        }
    }

    void displaySparse() {
        int total = sparse[0][2];
        cout << "\n3-Tuple (Non-zero) Form:\nRow\tCol\tVal\n";
        for(int i = 0; i <= total; i++) {
            cout << sparse[i][0] << "\t" << sparse[i][1] << "\t" << sparse[i][2] << "\n";
        }
    }

    void toNormal() {
        int rows = sparse[0][0];
        int cols = sparse[0][1];
        int total = sparse[0][2];

        T restored[10][10] = {0};
        for(int k = 1; k <= total; k++) {
            int rowIdx = sparse[k][0];
            int colIdx = sparse[k][1];
            restored[rowIdx][colIdx] = sparse[k][2];
        }

        cout << "\nRestored Normal Matrix:\n";
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                cout << restored[i][j] << "\t";
            }
            cout << "\n";
        }
    }

    ~sparseMatrix() {}
};

int main() {
    sparseMatrix<int> obj;
    obj.readNormal();
    obj.toSparse();
    obj.displaySparse();
    obj.toNormal();
    return 0;
}
