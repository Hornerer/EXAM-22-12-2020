#include <iostream>
int main()
{
    setlocale(LC_ALL,"rus");
    int s = 3, st = 15;
    int a[s][st];
    float x=0, y=0, z=0;
    for (int i = 0; i < s; ++i) {
        if (i == 0) {
                std::cout << "����" <<std::endl;
        }
        else if (i == 1) {
                std::cout << "���" <<std::endl;
        }
        else {
                std::cout << "���-��" <<std::endl;
        }
        for (int j = 0; j < st; ++j) {
            a[i][j] = rand()%4+2;
            std::cout << a[i][j]<<",";
            if (i == 0) {
                x+=a[i][j];
            }
            else if (i == 1) {
                y+=a[i][j];
            }
            else if (i == 2) {
                z+=a[i][j];
            }
        }
        std::cout<<std::endl;
    }
    if (x > y && x > z) {
        std::cout<<"���������� ����� ������ �� �������-����";
    }
    else if (y > x && y > z) {
        std::cout<<"���������� ����� ������ �� �������-���";
    }
    else {
        std::cout<<"���������� ����� ������ �� �������-���-��";
    }
    return 0;
}

