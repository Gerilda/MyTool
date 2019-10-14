//
// Created by Anastasia on 29.09.2019.
//
/*
#include <amp.h>             // заголовочный файл C++ AMP
#include <iostream>
using namespace concurrency;
using std::vector;

void do_it()
{
    // Строки и столбцы для матрицы
    const int M = 1024;
    const int N = 1024;

    // Создаем хранилище для матрицы указанных размеров
    vector<int> vA(M * N);
    vector<int> vB(M * N);

    // Заполняем матричные объекты
    int i = 0;
    std::generate(vA.begin(), vA.end(), [&i](){return i++;});
    std::generate(vB.begin(), vB.end(), [&i](){return i--;});
    // Выходное хранилище для матричных вычислений
    vector<int> vC(M * N);

perform_calculation(vA, vB, vC, M, N);
}

void perform_calculation(
        vector<int>& vA, vector<int>& vB,
vector<int>& vC, int M, int N)
{
for (int i = 0; i < M; i++)
{
for (int j = 0; j < N; j++)
{
vC[i * N + j] = vA[i * N + j] + vB[i * N + j];
}
}
}

int main()
{
do_it();
std::cout << "Hit any key to exit..." << std::endl;
std::cin.get();
}

 */