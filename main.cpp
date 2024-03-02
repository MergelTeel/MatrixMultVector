#include <iostream>

int main() {
    int matrixA [4][4];
    int vector [4];
    std::cout << " Enter matrix data \n";
    for (int i = 0; i<4; i++){
        for(int j =0; j <4; j++){
            std::cin >> matrixA[i][j];
        }
    }
    std::cout << " Enter vector data \n";
    for (int i = 0; i<4; i++){
        std::cin >> vector[i];
    }
    for (int i = 0; i<4; i++){
        int controlNumber = 0;
        for(int j =0; j <4; j++){
            controlNumber = (vector[i]* matrixA[i][j]) +controlNumber ;
            vector[i-1] =controlNumber;

        }
    }

    for (int i = 0; i<4; i++){
        std::cout <<vector[i] << std::endl;
    }
}
