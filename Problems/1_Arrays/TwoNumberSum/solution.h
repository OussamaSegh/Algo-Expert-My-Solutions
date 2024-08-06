#pragma once 

#include <unordered_map>
#include <vector>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum) {

  unordered_map<int, int> hash_table;

  int i = 0;
  for (i = 0; i < array.size(); i++)
  {
    hash_table[array[i]] = i;
  }

  vector<int> result;
  
  for (i = 0; i < array.size(); i++)
  {
    auto it = hash_table.find(targetSum - array[i]);
    if (it == hash_table.end() || it->second == i)
      continue;
    else 
    {
      result = {it->first, array[i]};
    }
  }
  
  return result;
}
