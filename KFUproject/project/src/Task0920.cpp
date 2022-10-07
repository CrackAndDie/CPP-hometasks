#include "Task0920.h"


#pragma region first
int len(string str)
{
    int length = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        length++;

    }
    return length;
}

void split(string str, char seperator, int* out_arr)
{
    int currIndex = 0, i = 0;
    int startIndex = 0, endIndex = 0;
    while (i <= len(str))
    {
        if (str[i] == seperator || i == len(str))
        {
            endIndex = i;
            string subStr = "";
            subStr.append(str, startIndex, endIndex - startIndex);
            out_arr[currIndex] = stoi(subStr);
            currIndex += 1;
            startIndex = endIndex + 1;
        }
        i++;
    }
}
#pragma endregion

#pragma region second
void print_mat(int* arr, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << arr[i * m + j] << " ";
        cout << endl;
    }
}

template <size_t n, size_t m>
void print_mat(int(&arr)[n][m]) {
    print_mat(*arr, n, m);
}
#pragma endregion

#pragma region third
void sum_mats(int* arr_1, int* arr_2, int* out_arr, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            out_arr[i * m + j] = arr_1[i * m + j] + arr_2[i * m + j];
    }
}
template <size_t n, size_t m>
void sum_mats(int(&arr_1)[n][m], int(&arr_2)[n][m], int(&out_arr)[n][m]) {
    sum_mats(*arr_1, *arr_2, *out_arr, n, m);
}

void prod_mats(int* arr_1, int* arr_2, int* out_arr, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            // этот кринж будет фурычить только на матрицах с одинаковым размером
            // и если только они симетричные
            // я устал это писать, лучше пойду посплю
            int mini_sum = 0;
            for (int k = 0; k < n; ++k)
            {
                mini_sum += arr_1[i * m + k] * arr_2[k * m + j];
            }
            out_arr[i * m + j] = mini_sum;
        }
    }
}
template <size_t n, size_t m>
void prod_mats(int(&arr_1)[n][m], int(&arr_2)[n][m], int(&out_arr)[n][m]) {
    prod_mats(*arr_1, *arr_2, *out_arr, n, m);
}
#pragma endregion


void all_tasks()
{
    using size_type = std::size_t;
    using value_type = int;

    const size_type n1 = 3, n2 = 3;
    value_type m1[n1][n2], m2[n1][n2];

    // 1
    for (int i = 0; i < n1; ++i)
    {
        string user_row;
        getline(cin, user_row);
        int splitted[n2];
        split(user_row, ' ', splitted);
        for (int j = 0; j < n2; ++j)
        {
            m1[i][j] = splitted[j];
            m2[(n1 - 1) - i][(n2 - 1) - j] = splitted[j];
        }
    }
    cout << endl;

    // 2
    cout << "Mat 1: " << endl;
    print_mat(m1);
    cout << endl;
    cout << "Mat 2: " << endl;
    print_mat(m2);
    cout << endl;

    // 3 
    value_type sums[n1][n2];
    sum_mats(m1, m2, sums);
    value_type prods[n1][n2];
    prod_mats(m1, m2, prods);

    cout << "Sums: " << endl;
    print_mat(sums);
    cout << endl;
    cout << "Prods: " << endl;
    print_mat(prods);
    cout << endl;
}