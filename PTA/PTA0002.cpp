//
// Created by hosibosi on 2021/3/22.
//
//// 王老板的解法
//#include <iostream>
//#include <vector>
//#include <algorithm>
//int main()
//{
//    std::vector<int> vec1;
//    std::vector<int> vec2;
//
//    while(true)
//    {
//        int i;
//        std::cin >> i;
//        if(i == -1) break;
//        vec1.push_back(i);
//    }
//    while(true)
//    {
//        int i;
//        std::cin >> i;
//        if(i == -1) break;
//        vec2.push_back(i);
//    }
//
//    decltype(vec1) new_vec;
//
//    std::set_intersection(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), std::back_inserter(new_vec));
//
//    if(new_vec.empty())
//    {
//        std::cout << "NULL" << std::endl;
//    }
//    else
//    {
//        for(size_t i = 0, size = new_vec.size(); i < size; ++i)
//        {
//            if(i != size - 1)
//            {
//                std::cout << new_vec[i] << ' ';
//            }
//            else
//            {
//                std::cout << new_vec[i] << std::endl;
//            }
//        }
//    }
//}

//// 自己的解法，但是运行超时了
#include <iostream>
#include <vector>

void numCatch(std::vector<int>& array ){
    while (true) {
        int number;
        std::cin >> number;
        if (number == -1)
            break;
        else
            array.push_back(number);
    }
}
int main() {
    std::vector<int> array1;
    std::vector<int> array2;
    std::vector<int> final_array;
    numCatch(array1);
    numCatch(array2);
    for (int i:array1){
        for (int j:array2){
            if (i == j)
                final_array.push_back(i);
        }
    }
    if (final_array.empty()){
        std::cout<<"NULL"<<std::endl;
    }
    for (int k = 0; k < final_array.size(); ++k) {
        if (k == 0)
            std::cout<<final_array[k];
        else
            std::cout<<" "<<final_array[k];
    }
}