//
// Created by hosibosi on 2021/3/22.
//

#include <iostream>
#include <vector>

int main()
{
    std::vector <int> vec;
    while(true)
    {
        int i;
        std::cin >> i;
        if (i == -1) break;
        vec.push_back(i);
    }
    int K = vec[0];
    if (K > vec.size())
    {
        std::cout << "NULL" << std::endl;
        return 0;
    }
    std::cout << vec[vec.size() - K] << std::endl;
}