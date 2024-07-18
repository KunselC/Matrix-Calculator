#include <iostream>
using namespace std;

int compute(int [2][2], int [2][2], char);

int main()
{
    compute();
    return 0;
}

int compute() {
    array1[2][2] = { 0 };
    array2[2][2] = { 0 };
    cout << "Enter the elements of the 2x2 array, array 1, left to right, top to bottom" << endl;
    for (int i = 0; i < 2; i++) { //loop runs through each element and assigns user's input as value
        for (int j = 0; j < 2; j++) {
            cin >> array1[i][j];
        }
    }
    cout << "Enter the elements of the 2x2 array, array 2, left to right, top to bottom" << endl;
    for (int i = 0; i < 2; i++) {  //loop runs through each element and assigns user's input as value
        for (int j = 0; j < 2; j++) {
            cin >> array2[i][j];
        }
    }

    char oper;
    int output;
    cout << "Enter the operation (+ or -) you want applied" << endl;
    cin >> oper;
    int result[2][2] = { 0 };
    switch (oper) {
        case '+':
            for (int i = 0; i < 2; i++) {
                for (int j = 0; j < 2; j++) {
                    result[i][j] = array1[i][j] + array2[i][j];
                    cout << "{" << result[0][0] << "," << result[0][1] << "}" << endl;
                    cout << "{" << result[1][0] << "," << result[1][1] << "}" << endl;
                }
            }
        case '-':
            for (int i = 0; i < 2; i++) {
                for (int j = 0; j < 2; j++) {
                    result[i][j] = array1[i][j] - array2[i][j];
                    cout << "{" << result[0][0] << "," << result[0][1] << "}" << endl;
                    cout << "{" << result[1][0] << "," << result[1][1] << "}" << endl;
                }
            }
    }
    return result;
}