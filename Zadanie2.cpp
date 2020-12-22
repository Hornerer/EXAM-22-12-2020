#include <iostream>
#include <cmath>
int main () {
    setlocale(LC_ALL,"rus");
    float k,b,x1,x2,y1,y2;
    std::cout<<"Координаты 1-ой точки"<<std::endl;
    std::cin>>x1>>y1;
    std::cout<<"Координаты 2-ой точки"<<std::endl;
    std::cin>>x2>>y2;
    k=(y1-y2)/(x1-x2);
    b=y2-k*x2;
    std::cout<<"y="<<k<<"*x+"<<b;
}
