#include <iostream>

using namespace std;

// função swap por referência
void swap(float &x, float &y)
{
    float temp;
    temp = x;
    x = y;
    y = temp;
}

// função swap por ponteiro
void swap(float *p1, float *p2)
{
    float temp;
    temp = *p1;
    *p1  = *p2;
    *p2  = temp;
}

int main (){
    
    float a = 10.5;
    float b = 12.6;
    float x = 32.1;
    float y = 24.1;
    
    swap(a, b);
    
    // resultados por referência
    cout<<"o valor de a é "<<a<<endl;
    cout<<"o valor de b é "<<b<<endl;
    
    swap(&x, &y);
    
    // resultados por ponteiro
    cout<<"o valor de x é "<<x<<endl;
    cout<<"o valor de y é "<<y<<endl;
    
    return 0;
}
