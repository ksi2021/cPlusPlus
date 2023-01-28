#include <iostream>
#include <array>
#include <vector>
#include <sstream>
#include <math.h>
using namespace std;

// {1} В предыдущих домашних заданиях найти блоки кода, которые возможно выделить в функции и определить их в функции
int getRandom(int min, int max)
{
    return min + rand() % (max - min + 1);
}

/*
    {2} Описать функцию RectPS(x1, y1, x2, y2, P, S), вычисляющую периметр P и площадь
    S прямоугольника со сторонами, параллельными осям координат, по координатам
    (x1, y1), (x2, y2) его противоположных вершин (x1, y1, x2, y2) — входные, P и S —
    выходные параметры вещественного типа.

*/
void RectPS(int x1, int y1, int x2, int y2, int &P, int &S)
{
    int a, b;
    a = abs(x2 - x1);
    b = abs(y2 - y1);

    P = 2 * (a + b);
    S = a * b;
}
/*
    {3} Описать процедуру ShiftLeft3(A, B, C), выполняющую левый циклический сдвиг:
    значение A переходит в C, значение C — в B, значение B — в A (A, B, C —
    вещественные параметры, являющиеся одновременно входными и выходными). С
    помощью этой процедуры выполнить левый циклический сдвиг для двух данных
    наборов из трех чисел: (A1, B1, C1) и (A2, B2, C2).
*/
void ShiftLeft3(float &A, float &B, float &C)
{
    float copyA = A, copyB = B, copyC = C;
    C = copyB;
    A = copyC;
    B = copyA;
}
/*
    {13} Описать процедуру TimeToHMS(T, H, M, S), определяющую по времени T (в
    секундах) содержащееся в нем количество часов H, минут M и секунд S (T —
    входной, H, M и S — выходные параметры целого типа).
*/
void TimeToHMS(int T, int &H, int &M, int &S)
{
    H = T / 3600;
    M = (T - (H * 3600)) / 60;
    S = T - (H * 3600) - (M * 60);
}

// {17 - e} Реализовать функцию y = f(x)
void getY(float x){
    float y;
    if(x > 0){ 
        y = 2 * x - 10;
    }
    else if(x == 0){
            y = 0;
    }
    else if(x < 0){
        y = 2 * abs(x) - 1;
    }

    cout << "x = "<< x << '\t' << "y = " << y <<endl;
}

int main()
{
    // Протабулировать функцию y = f(x) {getY(float x)}
    float x =0, step = 0.1;
    int max = 2;
    while (x < max)
    {
        getY(x);
        x+=step;
    }
    
    system("pause");
    return 0;
}