#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    try
    {
        unsigned int n, i = 0;
        std::vector<int> array;
        std::cin >> n;
        for (i; i < n; i++)
        {
            int e;
            std::cin >> e;
            array.push_back(e);
        }
        sort(array.begin(), array.end());
        for (auto i : array)
            std::cout << i << " ";
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}