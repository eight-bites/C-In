//Запрограммировать следующее выражение: 
//(а + b — f / а) + f * a * a — (a + b) 
//Числа а, b, f вводятся с клавиатуры. 
//Организовать пользовательский интерфейс, таким образом,
//чтобы было понятно, в каком порядке должны вводиться числа.

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a,b,f;
    float vir;
    
    cout << "Vvedite chisla a, b, f" << endl;
    cin >> a >> b >> f;
    
    vir = (a + b - f / a) + f * pow(a,2) - (a + b) ;
    
    cout << vir;
    
    return 0;
}
