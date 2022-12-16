#pragma once

#include <iostream>
#include <fstream>

using value_type = int;
using size_type = unsigned int;

std::istream& operator>>(std::istream& in, value_type arr[5])
{
	char c;
	for (size_type i = 0; i < 5; ++i)
	{
		in.get(c);
		if (c == '\n')
		{
			std::cout << "Enter" << std::endl;
		}
		in.unget();
		in >> arr[i];
	}
	return in;
}

std::ostream& operator<<(std::ostream& out, int arr[5])
{
	for (size_type i = 0; i < 5; ++i)
	{
		out << arr[i] << ' ';
	}
	return out;
}

std::ifstream& operator>>(std::ifstream& in, int arr[5])
{
	int c;
	for (size_type i = 0; i < 5; ++i)
	{
		in >> c;
		arr[i] = c;
		if (in.eof() && i != 4)
		{
			std::cout << "End of file" << std::endl;
			break;
		}
	}
	return in;
}

std::ofstream& operator<<(std::ofstream& out, int arr[5])
{
	for (size_type i = 0; i < 5; ++i)
	{
		out << arr[i] << ' ';
	}
	return out;
}

void out(const size_type n, const size_type i = 0)
{
	if (i < n)
	{
		std::cout << "Hello world!" << std::endl;
		out(n, i + 1);
	}
}

void fill(value_type*& a, size_type& n)
{
	for (size_type i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}
}

void fill_recursive(value_type*& a, size_type& n)
{
	enter(a, n);
}

void enter(value_type* const a, const size_type n, const size_type i = 0)
{
	if (i < n)
	{
		std::cin >> a[i];
		enter(a, n, i + 1);
	}
}

void out(const value_type* const a, const size_type n)
{
	for (size_type i = 0; i < n; ++i)
	{
		std::cout << a[i] << ' '; 
	}
	std::cout << std::endl;
}

void out_recursive(const value_type* const a, const size_type n)
{
	term(a, n);
	std::cout << std::endl;
}

void term(const value_type* const a, const size_type n, const size_type i = 0)
{
	if (i < n)
	{
		std::cout << a[i];
		term(a, n, i + 1);
	}
}