//
// Created by Anastasia on 29.09.2019.
//
#include <vector>
#include <iostream>
#include <algorithm>
#include <chrono>
using namespace std;

int main() {

    int nRow, nCol;
    std::cout << "Add nRow: ";
    std::cin >> nRow;
    std::cout << "Add nCol: ";
    std::cin >> nCol;


    std::vector<double> aMatrix(nRow*nCol), bMatrix(nRow*nCol), cMatrix(nRow*nRow);
    // int rang = std::min(nRow, nCol); std:: vector<double> cMatrix(nRow*nCol); std:: vector<double> cMatrix(rang);

    std::generate(aMatrix.begin(), aMatrix.end(), std::rand);
    std::generate(bMatrix.begin(), bMatrix.end(), std::rand);

    auto begin = std::chrono::steady_clock::now();

    for (int i = 0; i < nRow; ++i) {
        for (int j = 0; j < nCol; ++j) {
            for (int k = 0;k < nCol; ++k) {
                cMatrix[i * nCol + j] += aMatrix[i * nCol + k] * bMatrix[k * nCol + j];
            }
        }
    }

    /*
    for (int i = 0; i < rang; ++i) {
        for (int j = 0; j < rang; ++j) {
            for (int k = 0;k < rang; ++k) {
                cMatrix[i * rang + j] += aMatrix[i * rang + k] * bMatrix[k * rang + j];
            }
        }
    }

     for (int i = 0; i < res.rows_; ++i) {
            for (int j = 0; j < res.cols_; ++j) {
                for (int k = 0; k < lhs.cols_; ++k) {
                    res(i, j) += lhs(i, k) * rhs(k, j);
*/
    auto end = std::chrono::steady_clock::now();

    auto elapsed_ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);
    std::cout << "The time: " << elapsed_ms.count() << " ms\n";

    return 0;
}
