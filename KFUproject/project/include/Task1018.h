#pragma once

#include <iostream>

enum Key
{
	BOOL,
	INT,
	DOUBLE,
	NUM
};

void in(void* p, Key key)
{
    switch (key)
    {
    case 0:
        std::cin >> *(bool*)p;
        break;
    case 1:
        std::cin >> *(int*)p;
        break;
    case 2:
        std::cin >> *(double*)p;
        break;
    }
}

void out(void* p, Key key)
{
    switch (key)
    {
    case 0:
        std::cout << *(bool*)p << std::endl;
        break;
    case 1:
        std::cout << *(int*)p << std::endl;
        break;
    case 3:
        std::cout << *(double*)p << std::endl;
    }
}

void del(void* p, Key key)
{
    switch (key)
    {
    case 0:
        delete (bool*)p;
        break;
    case 1:
        delete (int*)p;
        break;
    case 2:
        delete (double*)p;
        break;
    }
}

std::ostream& operator<<(std::ostream& out, const Key& key)
{
    return out << (int)key;
}