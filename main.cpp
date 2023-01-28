#include <iostream>
#include <array>
#include <vector>
#include <sstream>
using namespace std;

#if 0
struct Spec
{
    string name;
    int code;
};

struct Fitchman : Spec
{
public:
    Fitchman()
    {
        this->name = "Fitchman";
        this->code = 1047;
    }
};

struct Plumber : Spec
{
    Plumber()
    {
        this->name = "Plumber";
        this->code = 6790;
    }
};

struct Factory
{
    /* data */
    Spec spec;
};
#endif

#if 0
struct Factory
{
    std::string name;
    int MiddleAge;
    string spec;
    int salary;
};
#endif

int main()
{
    // {1} Сгенерировать массив со случайными числами в диапазоне: [0,10]

    {
        array<int, 4> arr;
        const int min = 0;
        const int max = 10;
        for (int i = 0; i < arr.size(); i++)
        {
            arr[i] = min + rand() % (max - min + 1);
        }
        cout << endl;
    }

    // {2 - a} Вычислить сумму элементов массива: [больших 5, меньших 7, больших 3]
    {
        array<int, 5> arr = {6, 4, 5, 7, 4};
        int sum = 0;
        for (auto item : arr)
        {
            if (item > 3 && item > 5 && item < 7)
            {
                sum += item;
            }
        }
    }

    // {3} Вычислить сумму нечётных/чётных элементов массива
    {
        array<int, 11> arr = {6, 4, 5, 7, 4, 3, 34, 45, 90, 10, 34};
        int sumOdd = 0, sumEven = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] % 2 == 0)
            {
                sumEven += arr[i];
                continue;
            }
            sumOdd += arr[i];
        }
    }

    // {13} Увеличить все отрицательные элементы на 5, а положительные уменьшить на 1
    {
        array<int, 11> arr = {-6, 4, -5, 7, 4, 3, -34, 45, 90, 0, -34};
        cout << arr.size() << endl;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] > 0)
            {
                arr[i]--;
                continue;
            }
            arr[i] += 5;
        }
    }

    // {12} Увеличить все нечётные элементы массива на 3, а чётные в 2 раза
    {
        array<int, 11> arr = {-6, 4, -5, 7, 4, 3, -34, 45, 90, 0, -34};
        cout << arr.size() << endl;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] % 2 == 0)
            {
                arr[i] *= 2;
                continue;
            }
            arr[i] += 3;
        }
    }

    // {14 - a} Создать новый массив из двух других массивов путём операций над элементами массивов : перемножение
    {
        array<int, 4> a = {1, 2, 3, 4};
        array<int, 4> b = {9, 8, 7, 6};
        array<int, 4> c;

        for (int i = 0; i < a.size(); i++)
        {
            c[i] = a[i] * b[i];
        }
    }

    // {15 - a,b,c}  Информация по N заводам города задается строкой следующего вида: фамилия,средний возраст, специальность, средний оклад
    {
        array<std::string, 10> arr = {
            "test 35 Fitchman 2000",
            "test1 20 Plumber 3000",
            "test2 54 Plumber 1000",
            "test3 39 Fitchman 1200",
            "test4 19 Plumber 2000",
            "test5 21 Fitchman 4000",
            "test6 68 Plumber 4000",
            "test7 27 Fitchman 5000",
            "test8 32 Fitchman 2800",
            "test9 46 Fitchman 3200",
        };

        // a :  Ввести информацию по заводам, посчитать количество слесарей и токарей. Напечатать эти значения.
        {
            int Fitchman = 0, Plumber = 0;
            vector<string> vecstr;
            for (auto el : arr)
            {
                vecstr.clear();
                string word;
                stringstream s(el);

                while (s >> word)
                    vecstr.push_back(word);

                if (vecstr[2] == "Fitchman")
                {
                    Fitchman++;
                    continue;
                }
                Plumber++;
            }
            std::cout << "Plumber = " << Plumber << std::endl;
            std::cout << "Fitchman = " << Fitchman << std::endl;
        }

        // b : Ввести информацию по заводам. Напечатать номера заводов, где средний возраст выше 35 лет
        {
            vector<int> FactoryNumbers;
            vector<string> vecstr;
            int counter = 0;
            for (auto el : arr)
            {
                vecstr.clear();
                string word;
                stringstream s(el);

                while (s >> word)
                    vecstr.push_back(word);

                if (std::atoi(vecstr[1].c_str()) > 35)
                    cout << "More then 35 \t#" << counter + 1 << endl;
                counter++;
            }
        }

        /* c : Ввести информацию по заводам, посчитать средний оклад по всем заводам.
            Посчитать количество заводов, где средний оклад по заводу выше среднего
            по всем заводам. Напечатать это значение и вывести информацию по этим заводам.
        */
        {
            float MidSalary = 0.0, GenericSalary = 0.0;
            int FactoryCount = 0;
            vector<string> vecstr;
            for (auto el : arr)
            {
                cout << el << std::endl;

                vecstr.clear();
                string word;
                stringstream s(el);

                while (s >> word)
                    vecstr.push_back(word);

                GenericSalary += std::atoi(vecstr[3].c_str());
            }
            MidSalary = GenericSalary / arr.size();
            cout << "Mid salary \t" << MidSalary << std::endl;
            for (auto el : arr)
            {

                vecstr.clear();
                string word;
                stringstream s(el);

                while (s >> word)
                    vecstr.push_back(word);

                if (std::atoi(vecstr[3].c_str()) > MidSalary)
                    cout << "More then mid salary \t" << el << std::endl;
            }
        }
    }
    system("pause");
    return 0;
}
