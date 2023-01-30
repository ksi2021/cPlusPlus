#include <iostream>
#include <array>
#include <vector>
#include <sstream>
#include <cmath>
using namespace std;

int main()
{    
    /*
        {1 - a} Дана функция y=f(x). Найти значение функции по x:

        y = 2x - 10, если x > 0
        y = 0, если x = 0
        y = 2 * |x| - 1, если x < 0
    */
    {
        float y;
        int x;
        std::cin >> x;
        if (x > 0)
        {
            y = 2 * x - 10;
        }
        else if (x == 0)
        {
            y = 0;
        }
        else
        {
            y = 2 * abs(x) - 1;
        }
    }

    /*
        {1 - d} Дана функция y=f(x). Найти значение функции по x:

        y = 3x - 7, если x > 1
        y = 3, если x = 1
        y = 3 * |x+2| - 7, если x < 1
    */
    {
        float y;
        int x;
        std::cin >> x;
        if (x > 1)
        {
            y = 3 * x - 7;
        }
        else if (x == 1)
        {
            y = 3;
        }
        else if (x < 0)
        {
            y = 3 * abs(x + 2) - 7;
        }
    }

    /*
        {2 - a} Напишите программу, которая принимает от пользователя координаты точки и
                определяет, попала ли точка в заштрихованную область
    */
    {
        float x, y;
        std::cin >> x >> y;
        if ((pow(x, 2) + pow(y, 2) > 4) && x > 0 && y > 0)
        {
            if (x <= 2.0)
            {
                if (y <= x)
                {
                    std::cout << "Belong";
                }
                else
                {
                    std::cout << "Not belong";
                }
            }
            else
            {
                std::cout << "Not belong";
            }
        }
        else
        {
            std::cout << "Not belong";
        }
    }

    /*
        {3 - a} Напишите программу, которая принимает от пользователя координаты точки и
                определяет, попала ли точка в заштрихованную область.
    */  
    {
        float x, y;
        std::cin >> x >> y;

       

        if (y < 1.0 || y > 2.0 || std::isnan(sqrt(2*2 - x*x)))
        {
            std::cout<<"Not belong";
            goto next;
        }
        else if (abs(x) < 1.0 || abs(x) > 2.0)
        {
            std::cout<<"Not belong";
            goto next;
        }

        printf("Belonf {x:y} = %2.1f:%2.1f",x,y);
    }

/*
    {4} Пользователь вводит день месяца. Вывести на экран день недели. Считаем, что 1-е
    число месяца это вторник.
*/
next:
    {
        int day;
        int max = 31;
        int min = 1;
        vector<std::string> week = {
            "Tuesday",
            "Wednesday",
            "Thursday",
            "Friday",
            "Saturday",
            "Sunday",
            "Monday",
        };

        if (day <= max && day >= min)
            cout << day << "day of week = " << week[day % 7 > 0 ? day % 7 - 1 : 6] << endl;
        else
            cout << "Out of range" << endl;
    }

    cout<<"Master test";
    system("pause");
    return 0;
}