#pragma once 

#include <vector>

using namespace std;

bool isValidSubsequence(vector<int> array, vector<int> sequence) {
  
  if (sequence.empty())
    return true;

  auto pArray = array.begin();
  auto pSequence = sequence.begin();

  int nSequenceCounter = 0;

  while (pArray != array.end()) {
      if (*pSequence == *pArray) {
        pSequence++;
      }
      pArray++;
  }

  return pSequence == sequence.end();
}
