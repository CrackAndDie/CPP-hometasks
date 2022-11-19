#include <iostream>
#include "project/include/gauss_method.hpp"

void fileRead(const char path[], V**& matr, Q& rows, Q& cols) {}
void fileRead(const char path[], V*& vect, Q& rows) {}
V determinant(V** matr, Q rows, Q cols) {}
void deleteMatrix(V** matr, Q rows) {}
void deleteVector(V* vect) {}
void organize(V** matr, V* vect, Q rows, Q cols) {}
void straightCourse(V** A, V* B, Q rows, Q cols) {}
void reverseCourse(V** A, V* B, Q rows, Q cols) {}
void fileWrite(const char path[], V* vect, Q rows) {}

void gaussMethod(const char A[], const char B[], const char X[]) 
{
    V** mat;
    V* vect;
    Q rows, cols;
    fileRead(A, mat, rows, cols);
    fileRead(B, vect, rows);
    if (determinant(mat, rows, cols) != 0)
    {
        organize(mat, vect, rows, cols);
        straightCourse(mat, vect, rows, cols);
        reverseCourse(mat, vect, rows, cols);

        V* result = new V[rows];

        // а тут ручками кринжуем, потому что я не уверен, что на главной диагонали будут единицы
        for (Q i = 0; i < rows; ++i)
        {
            V current = mat[i][i];
            V value = vect[i];
            value /= current;

            result[i] = value;
        }

        // а тут кринжую, потому что ничего не понимаю, зачем так жить, когда это уже закончится
        // ну а на самом деле не понимаю как использовать fileWrite методы, нам же вроде нужно записать только вектор результатов в файл, не?
        fileWrite(X, result, rows);
        deleteVector(result);
    }
    else
    {
        std::cout << "Чел кринжанул, матрица ******" << std::endl;
    }
    deleteMatrix(mat, rows);
    deleteVector(vect);
}
 
int main()
{    
    return 0;
}

