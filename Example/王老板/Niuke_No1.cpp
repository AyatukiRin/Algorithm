#include <iostream>
#include <bitset>

int main()
{
    int n;
    std::cin >> n;
    std::bitset<64> input = n;

    auto result = input;

    int k;
    std::cin >> k;
    std::bitset<64> which = k;

    for(auto i = 0, j = 0; j < which.size(); ++i)
    {
        if(result[i] != 0) continue;

        result[i] = which[j++];
    }

    std::cout << result.to_ullong() - input.to_ullong() << std::endl;

    return 0;
}