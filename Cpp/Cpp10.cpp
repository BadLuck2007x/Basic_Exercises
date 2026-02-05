#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
/*
2 2
3 1 5 4
5 1 2 8 9 3
0 1
1 3
*/


int main() {
    int array_numbers, num_of_queries;
    cin >> array_numbers >> num_of_queries;
    int output[num_of_queries];

    vector<vector<int>> array(array_numbers);

    // Read arrays
    for (int i = 0; i < array_numbers; i++) {
        int length;
        cin >> length;

        array[i].resize(length);
        for (int j = 0; j < length; j++) {
            cin >> array[i][j];
        }
    }

    // Process queries
    for (int i = 0; i < num_of_queries; i++) {
        int destination, elementIndex;
        cin >> destination >> elementIndex;
        output[i]=array[destination][elementIndex];
    }
    for(int num:output){
        cout<<num<<endl;
    }

    return 0;
}
