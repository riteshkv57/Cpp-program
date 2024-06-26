#include <iostream>
#include <vector>
#include<algorithm>

void reverseMatrix(std::vector<std::vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();

    int up=0,down=rows-1;
    while(up<down){
        std::swap(matrix[up], matrix[down]);
        up++;
        down--;
    }
}

int main() {
    std::vector<std::vector<int>> matrix = {
        {1},
        {4, 5, 6},
        {7, 8, 9}
    };

    std::cout << "Original Matrix:" << std::endl;
    for (const auto& row : matrix) {
        for (int num : row) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    reverseMatrix(matrix);

    std::cout << "Reversed Matrix:" << std::endl;
    for (const auto& row : matrix) {
        for (int num : row) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}