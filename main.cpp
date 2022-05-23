#include <iostream>
#include <vector>
#include <string>
 #include <numeric>
#include "point.h"
#include <typeinfo>

template <typename T1>
T1 arithmetic_mean(std::vector <T1> vec)
{
   // T1 temp_pointer = vec[0];
    T1 summary;
        for(auto &e: vec)
        {
            summary = summary + e;
            std::cout << "Something" << std::endl;
            std::cout << "Something changed in this repo" << std::endl;
        }
        return (summary) / static_cast<int>(vec.size());
}


int main()
{
    std::vector<int> vec= {1, -7, -6};
    std::cout<<"Arithemtic mean of a vector: ";
    std::cout << arithmetic_mean<int>(vec) << std::endl;
    // для вектора точек:

    std::vector<Point<double>>  c = {Point<double>(1, 2), Point<double>(3, 4), Point<double>(3, 6)};

    Point<double> d = arithmetic_mean<Point<double>>(c);
    std::cout << d.x << std::endl;
    std::cout << d.y << std::endl;
    return 0;
}
