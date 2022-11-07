/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
 
    // Задание 1 
    int count;
    cout<<"Введите кол-во строн Н: ";
    cin >> count;
    for(int i = 0 ; i <= count; i++) {
        for(int j = 0; j < i; j++)
            {
                cout<<"0";
            }
        cout<<endl;
    }
    
    // Задание 2
    float startValue,endValue,step,rezult;
    cout<<endl<<"Введите начальное значение х: ";
    cin >> startValue;
    cout<<endl<<"Введите конечное значение х: ";
    cin >> endValue;
    cout<<endl<<"Введите шаг для х: ";
    cin >> step;
    
    for(startValue; startValue <= endValue; startValue+=step){
        cout<<endl<<"y = "<< -0.23 * pow(startValue,2) + startValue;
    }
    
    // Задание 3
    cout<<endl<<"Введите начальное значение х: ";
    cin >> startValue;
    cout<<endl<<"Введите конечное значение х: ";
    cin >> endValue;
    cout<<endl<<"Введите шаг для х: ";
    cin >> step;
    
    for(startValue; startValue <= endValue; startValue+=step){
        cout<<endl<<"y = "<< sqrt(15 + 4/startValue) + 13 + sin(3 * startValue + 13);
    }
    
    // Задание 4
    int h,m;
    
    cout<<endl<<"Введите начальное значение h: ";
    cin >> h;
    cout<<endl<<"Введите конечное значение m: ";
    cin >> m;
    cout<<endl<<"Введите шаг: ";
    cin >> step;
    
     for(h; h <= m; h+=step){
        cout<<h<<"\t";
    }
    
    // Задание 5
    int factorial,result = 1;
    cout<<endl<<"Введите число для определения его факториала: ";
    cin >> factorial;
    for(int i = 1; i <= factorial; i++) result *= i;
    cout<<"\n factorial = "<<result;
    
    // Задание 6
    float x,yFunc  = 0;
    cout<<endl<<"Введите  h: ";
    cin >> h;
    cout<<endl<<"Введите x: ";
    cin >> x;
    
    for(int i = 1; i <= h; i++)
        yFunc+= i * x;
        
    cout << "\ny = " <<yFunc<<endl; 
    
    // Задание 7
    yFunc = 0;
    cout<<endl<<"Введите  h: ";
    cin >> h;
    cout<<endl<<"Введите x: ";
    cin >> x;
    
    for(int i = 1; i <= h; i++)
        yFunc =  i % 3 == 0 ? yFunc - (1.0/ (i*x)): yFunc + (1.0/ (i*x)) ;
        
    cout << "\ny = " <<yFunc<<endl; 
    
    return 0;
}