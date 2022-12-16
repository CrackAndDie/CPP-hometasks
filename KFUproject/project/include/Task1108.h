#pragma once

#include <iostream>
#include <vector>
#include <array>
#include <string>
#include <fstream>


void readNumbers(std::ifstream& input, std::vector<int>& v)
{
	int a;
	while (!input.eof())
	{
		input >> a;
		v.push_back(a);
	}
}

void writeNumbers(std::ofstream& output, const std::vector<int>& v)
{
	for (int i = 0; i < v.size(); ++i)
	{
		output << v[i] << ' ';
	}
}

void getCoordinates(std::array<int, 3>& a)
{
	for (int i = 0; i < a.size(); ++i)
	{
		std::cin >> a[i];
	}
}

void outCoordinates(const std::array<int, 3>& a)
{
	for (int i = 0; i < a.size(); ++i)
	{
		std::cout << a[i] << ' ';
	}
}

void readLine(std::ifstream& input, std::string& line)
{
	char a;
	while (!input.eof()) {
		input.get(a);
		if (a == '\n')
		{
			break;
		} 
		line.push_back(a);
	}
}

void writeLine(std::ofstream& output, const std::string& line)
{
	output << line;
}

int findNumber(const std::vector<int>& v, const int& num)
{
	for (int i = 0; i < v.size(); ++i)
	{
		if (v[i] == num)
		{
			return i;
		}
	}
	return -1;
}

std::vector<std::string> separateLine(const std::string& line, const char& sep)
{
	std::vector<std::string> result;
	int startIndex = 0, endIndex = 0;
	for (int i = 0; i <= line.size(); ++i)
	{
		if (i == line.size() || line[i] == sep)
		{
			endIndex = i;
			result.push_back(line.substr(startIndex, endIndex - startIndex));
			startIndex = endIndex + 1;
		}
	}
	return result;
}

std::vector<int> operator+(const std::vector<int>& v1, const std::vector<int>& v2)
{
	std::vector<int> v3;
	for (int i = 0; i < v1.size(); ++i)
	{
		v3.push_back(v1[i] + v2[i]);
	}
	return v3;
}

std::ostream& operator<<(std::ostream& out, const std::vector<int>& v)
{
	for (int i = 0; i < v.size(); ++i)
	{
		out << v[i] << ' ';
	}
	return out;
}