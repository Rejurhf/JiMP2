//
// Created by Rejurhf on 11.05.2017.
//

#ifndef JIMP_EXERCISES_ALGO_H
#define JIMP_EXERCISES_ALGO_H

#include <string>
#include <vector>
#include <set>
#include <map>

namespace algo {
    void CopyInto(const std::vector<int> &v, int n_elements, std::vector<int> *out);
    bool Contains(const std::vector<int> &v, int element);
    void InitializeWith(int initial_value, std::vector<int> *v);
    std::vector<int> InitializedVectorOfLength(int length, int initial_value);
    std::vector<std::string> MapToString(const std::vector<double> &v);
}

#endif //JIMP_EXERCISES_ALGO_H
