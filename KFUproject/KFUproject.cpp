#include <iostream>
#include <fstream>
#include <string>

namespace calc
{
    namespace scal
    {
        inline int sum(int x, int y)
        {
            return x + y;
        }

        inline int sub(int x, int y)
        {
            return x - y;
        }

        inline int mul(int x, int y)
        {
            return x * y;
        }

        inline int divv(int x, int y)
        {
            return x / y;
        }
    }
    namespace vect
    {
        int dot(int v1[], int v2[], int n)
        {
            int out_dot = 0;
            for (int i = 0; i < n; ++i)
            {
                out_dot += v1[i] * v2[i];
            }
            return out_dot;
        }

        void fill(int v[], int n)
        {
            for (int i = 0; i < n; ++i)
            {
                std::cin >> v[i];
            }
        }

        void read_from_file(std::string path, int amount, int* out_vect)
        {
            std::ifstream file;
            file.open(path);
            if (file.is_open())
            {
                std::string line;
                int i = 0;
                while (std::getline(file, line))
                {
                    out_vect[i] = std::stoi(line);
                }
                file.close();
            }
        }
    }
}

int main()
{
    /*int x, y;
    while (1)
    {
        std::cout << "Enter x and y" << std::endl;
        std::cin >> x >> y;
        std::cout << calc::scal::sum(x, y) << std::endl;
        std::cout << calc::scal::sub(x, y) << std::endl;
        std::cout << calc::scal::mul(x, y) << std::endl;
        std::cout << calc::scal::divv(x, y) << std::endl;
    }*/

    /*const int n = 3;
    int v1[n], v2[n];
    
    std::cout << "Enter v1" << std::endl;
    calc::vect::fill(v1, n);

    std::cout << "Enter v2" << std::endl;
    calc::vect::fill(v2, n);

    std::cout << calc::vect::dot(v1, v2, n) << std::endl;*/

    int out_vect[9];

    calc::vect::read_from_file("D:\\Scripts\\KFUproject\\KFUproject\\Text.txt", 9, out_vect);

    for (int i = 0; i < 9; ++i)
    {
        std::cout << out_vect[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}

