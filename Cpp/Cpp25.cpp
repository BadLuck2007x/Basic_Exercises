#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    try
    {
        int length = 0, i = 0, first = 0, second_1 = 0, second_2 = 0;
        cin >> length;
        vector<int> array(length);
        for (i; i < length; i++)
        {
            cin >> array[i];
        }
        cin >> first;
        array.erase(array.begin() + first - 1);
        cin >> second_1 >> second_2;
        array.erase(array.begin() + second_1 - 1, array.begin() + second_2 - 1);
        cout << array.size() << endl;
        for (int j : array)
        {
            cout << j << " ";
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}