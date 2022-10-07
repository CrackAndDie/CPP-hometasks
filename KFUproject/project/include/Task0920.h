#pragma once

#include <iostream>
#include <string>

using namespace std;

int len(string str);
void split(string str, char seperator, int* out_arr);

void print_mat(int* arr, int n, int m);
template <size_t n, size_t m>
void print_mat(int(&arr)[n][m]);

void sum_mats(int* arr_1, int* arr_2, int* out_arr, int n, int m);
template <size_t n, size_t m>
void sum_mats(int(&arr_1)[n][m], int(&arr_2)[n][m], int(&out_arr)[n][m]);

void prod_mats(int* arr_1, int* arr_2, int* out_arr, int n, int m);
template <size_t n, size_t m>
void prod_mats(int(&arr_1)[n][m], int(&arr_2)[n][m], int(&out_arr)[n][m]);

void all_tasks();