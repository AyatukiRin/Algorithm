//
// Created by hosibosi on 2021/3/22.
//

#include <iostream>
#include <deque>

std::deque<int> numCatch(std::deque<int> array ){
    while (true) {
        int number;
        std::cin >> number;
        if (number == -1)
            break;
        else
            array.push_back(number);
    }
    return array;
}
int PTA0001() {
    std::deque<int> array1;
    std::deque<int> array2;
    std::deque<int> final_array;
    array1 = numCatch(array1);
    array2 = numCatch(array2);
    unsigned i = 0, j = 0, n = 1;
    unsigned loop_time = array1.size() + array2.size();
    while (n <= loop_time){
        if (array1[i] >= array2[j]){
            final_array.push_back(array2[j]);
            j++;
            if (j == array2.size()){
                for (unsigned k = i; k < array1.size(); ++k) {
                    final_array.push_back(array1[k]);
                }
                break;
            }
        } else{
            final_array.push_back(array1[i]);
            i++;
            if (i == array1.size()){
                for (unsigned k = j; k < array2.size(); ++k) {
                    final_array.push_back(array2[k]);
                }
                break;
            }
        }
        n++;
    }
    if (final_array.empty()){
        std::cout<<"NULL"<<std::endl;
        return 0;
    }
    for (int k = 0; k < final_array.size(); ++k) {
        if (k == 0)
            std::cout<<final_array[k];
        else
            std::cout<<" "<<final_array[k];
    }
    return 0;
}
