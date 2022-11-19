#pragma once

using V = double;       // value
using Q = unsigned int; // quantity

void createMatrix(V**& matr, Q rows, Q cols);
void createVector(V*& vect, Q rows);

void deleteMatrix(V** matr, Q rows);
void deleteVector(V* vect);

void consoleRead(V**& matr, Q& rows, Q& cols);
void consoleRead(V*& vect, Q& rows);

void consoleWrite(V** matr, Q rows, Q cols);
void consoleWrite(V* vet, Q rows);

void fileRead(const char path[], V**& matr, Q& rows, Q& cols);
void fileRead(const char path[], V*& vect, Q& rows);

void fileWrite(const char path[], V** matr, Q rows, Q cols);
void fileWrite(const char path[], V* vect, Q rows);

void swap(V& first, V& second);
// first, second - индексы строк, которые меняем местами
void swap(V** matr, V* vect, Q rows, Q cols, Q first, Q second);

// возвращает детерминант для произвольной квадратной матрицы
V determinant(V** matr, Q rows, Q cols);
// исключаем нули на главной диагонали
void organize(V** matr, V* vect, Q rows, Q cols);

// row - номер строки, val - значение
void addition(V** matr, V* vect, Q rows, Q cols, Q first, Q second);
void subtraction(V** matr, V* vect, Q rows, Q cols, Q first, Q second);
void multiplication(V** matr, V* vect, Q rows, Q cols, Q row, const V& val);
void division(V** matr, V* vect, Q rows, Q cols, Q row, const V& val);

// [A].{X} = {B}
void straightCourse(V** A, V* B, Q rows, Q cols);
void reverseCourse(V** A, V* B, Q rows, Q cols);

// вводим значения из терминала
void gaussMethod();
// считываем значения из файла
void gaussMethod(const char A[], const char B[], const char X[]);