// лабораторная работа #1
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    float xA = 1;
    float yA = 1;
    float xB = 2;
    float yB = 2;
    float xC = 3;
    float yC = 3;

    //Проверяем, лежат ли все 3 точки на одной прямой
    if (fabs((xB - xA) * (yC - yA) - (yB - yA) * (xC - xA)) == 0)
    {
        cout << "Точки лежат на одной прямой." << endl;

        //Проверяем, лежит ли точка И между точками А и С
        if ((min(xA, xC) <= xB && xB <= max(xA, xC)) && (min(yA, yC) <= yB && yB <= max(yA, yC)))
        {
            cout << "Точка В лежит между точками А и С." << endl;
        }
        else
        {
            cout << "Точка В не лежит между точками А и С." << endl;
        }
    }
    else
    {
        cout << "Точки не лежат на одной прямой." << endl;
    }
}
