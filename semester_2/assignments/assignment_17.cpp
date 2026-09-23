#include <iostream>
using namespace std;

class SparseMatrix {
private:
    int rows;
    int cols;
    int **standardMatrix;
    int **triplet;
    int nonZeroCount;

    void allocateStandard(int r, int c) {
        rows = r;
        cols = c;
        standardMatrix = new int*[rows];
        for (int i = 0; i < rows; i++) {
            standardMatrix[i] = new int[cols];
            for (int j = 0; j < cols; j++) standardMatrix[i][j] = 0;
        }
    }

    void freeStandard() {
        if (standardMatrix != nullptr) {
            for (int i = 0; i < rows; i++) delete[] standardMatrix[i];
            delete[] standardMatrix;
            standardMatrix = nullptr;
        }
    }

    void freeTriplet() {
        if (triplet != nullptr) {
            for (int i = 0; i <= nonZeroCount; i++) delete[] triplet[i];
            delete[] triplet;
            triplet = nullptr;
        }
    }

public:
    SparseMatrix() {
        rows = 0; cols = 0; nonZeroCount = 0;
        standardMatrix = nullptr;
        triplet = nullptr;
    }

    void inputStandardMatrix() {
        freeStandard();
        freeTriplet();
        cout << "Enter number of rows: "; cin >> rows;
        cout << "Enter number of columns: "; cin >> cols;
        if (rows <= 0 || cols <= 0) { cout << "Invalid matrix dimensions!\n"; rows = cols = 0; return; }
        allocateStandard(rows, cols);
        cout << "Enter matrix elements (" << rows << " x " << cols << "):\n";
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++) cin >> standardMatrix[i][j];
    }

    void convertToTriplet() {
        if (standardMatrix == nullptr) { cout << "No standard matrix available!\n"; return; }
        freeTriplet();
        nonZeroCount = 0;
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                if (standardMatrix[i][j] != 0) nonZeroCount++;

        triplet = new int*[nonZeroCount + 1];
        for (int i = 0; i <= nonZeroCount; i++) triplet[i] = new int[3];

        triplet[0][0] = rows;
        triplet[0][1] = cols;
        triplet[0][2] = nonZeroCount;

        int k = 1;
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                if (standardMatrix[i][j] != 0) {
                    triplet[k][0] = i;
                    triplet[k][1] = j;
                    triplet[k][2] = standardMatrix[i][j];
                    k++;
                }
    }

    void inputTripletForm() {
        freeStandard();
        freeTriplet();
        int r, c, count;
        cout << "Enter total rows: "; cin >> r;
        cout << "Enter total columns: "; cin >> c;
        cout << "Enter number of non-zero elements: "; cin >> count;
        if (r <= 0 || c <= 0 || count < 0 || count > r * c) { cout << "Invalid input parameters!\n"; return; }

        rows = r; cols = c; nonZeroCount = count;
        triplet = new int*[nonZeroCount + 1];
        for (int i = 0; i <= nonZeroCount; i++) triplet[i] = new int[3];

        triplet[0][0] = rows;
        triplet[0][1] = cols;
        triplet[0][2] = nonZeroCount;

        cout << "Enter (row, col, value) for each non-zero element:\n";
        for (int i = 1; i <= nonZeroCount; i++) cin >> triplet[i][0] >> triplet[i][1] >> triplet[i][2];
    }

    void convertToStandard() {
        if (triplet == nullptr) { cout << "No 3-tuple representation found!\n"; return; }
        freeStandard();
        rows = triplet[0][0];
        cols = triplet[0][1];
        nonZeroCount = triplet[0][2];
        allocateStandard(rows, cols);

        for (int i = 1; i <= nonZeroCount; i++) {
            int r = triplet[i][0];
            int c = triplet[i][1];
            int val = triplet[i][2];
            if (r >= 0 && r < rows && c >= 0 && c < cols) standardMatrix[r][c] = val;
        }
    }

    void displayStandard() {
        if (standardMatrix == nullptr) { cout << "Standard matrix is empty!\n"; return; }
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) cout << standardMatrix[i][j] << " ";
            cout << endl;
        }
    }

    void displayTriplet() {
        if (triplet == nullptr) { cout << "3-Tuple representation is empty!\n"; return; }
        for (int i = 0; i <= nonZeroCount; i++)
            cout << triplet[i][0] << " " << triplet[i][1] << " " << triplet[i][2] << endl;
    }

    ~SparseMatrix() {
        freeStandard();
        freeTriplet();
    }
};

int main() {
    SparseMatrix sm;
    int choice;

    while (true) {
        cout << "1.InputMatrix 2.ToTriplet 3.DisplayTriplet \n4.InputTriplet 5.ToStandard 6.DisplayMatrix -1.Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: sm.inputStandardMatrix(); break;
            case 2: sm.convertToTriplet(); break;
            case 3: sm.displayTriplet(); break;
            case 4: sm.inputTripletForm(); break;
            case 5: sm.convertToStandard(); break;
            case 6: sm.displayStandard(); break;
            case -1: cout << "Exiting...\n"; return 0;
            default: cout << "Wrong choice.\n";
        }
    }
}