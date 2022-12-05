#include <iostream>
#include <fstream>
#include "project/include/gauss_method.hpp"

void fileRead(const char path[], V*& vect, Q& rows)
{
    std::ifstream f(path);
    // ���������, ��� ���� ��������
    if (f.is_open())
    {
        // ��������� ���-�� �����
        f >> rows;
        // �������� ������ ��� ������
        createVector(vect, rows);
        // ��������� ������ �������
        for (Q i = 0; i < rows; ++i)
        {
            f >> vect[i];
        }
        // ��������� ����
        f.close();
    }
    else
    {
        std::cout << "Error while opening file" << std::endl;
    }
}
 
int main()
{    
    return 0;
}

