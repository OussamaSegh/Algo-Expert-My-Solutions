#pragma once 

#include <vector>

using namespace std;

vector<int> sortedSquaredArray(vector<int> array) {
    int i = 0;
    int j = array.size() - 1;
    vector<int> result(array.size());
  
    for (int k = array.size() - 1; k >= 0; k--) {
        int first = array[i] * array[i];
        int second = array[j] * array[j];
        
        if (first > second) {
            result[k] = first;
            i++;
        } else {
            result[k] = second;
            j--;
        }
    }
    return result;
}
