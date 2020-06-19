#include <iostream>

//void print(int** matrix, int size){
//    for(int j = 0; j < size; j++){
//        for(int i = 0; i < size; i++){
//            std::cout << matrix[i][j] << ' ';
//        }
//        std::cout << std::endl;
//    }
//}

int ribsInSupplemented(int** matrix, int size){
    int numberOfZeros = 0;

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(matrix[i][j] == 0) numberOfZeros++;
        }
    }

    numberOfZeros -= size;
    numberOfZeros /= 2;

    return numberOfZeros;
}

//int main() {
//    const int SIZE = 4;
//
//    int** matrix = new int*[SIZE];
//    for(int i = 0; i < SIZE; i++){
//        matrix[i] = new int[SIZE];
//        for(int j = 0; j < SIZE; j++)
//            matrix[i][j] = 0;
//    }
//
//    matrix[0][2] = 1;
//    matrix[2][0] = 1;
//    matrix[2][3] = 1;
//    matrix[3][2] = 1;
//    matrix[3][0] = 1;
//    matrix[0][3] = 1;
//
//    print(matrix, SIZE);
//    std::cout << ribsInSupplemented(matrix, SIZE);
//    return 0;
//}
