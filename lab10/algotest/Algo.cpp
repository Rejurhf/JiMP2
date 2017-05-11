//
// Created by Rejurhf on 11.05.2017.
//

#include "Algo.h"

namespace algo{
    void CopyInto(const std::vector<int> &v, int n_elements, std::vector<int> *out){
        std::copy_n(v.begin(), n_elements, std::back_inserter(*out));
    }

    bool Contains(const std::vector<int> &v, int element) {
        return false;
    }

    void InitializeWith(int initial_value, std::vector<int> *v) {
        std::fill(v->begin(), v->end(), initial_value);
    }

    std::vector<int> InitializedVectorOfLength(int length, int initial_value) {
        std::vector<int> v;
        std::fill_n(v.begin(), length, initial_value);
        return v;
    }

    std::vector<std::string> MapToString(const std::vector<double> &v) {
        //std::transform(v.begin(), v.end(), v.)
        std::vector<std::string> s;
        std::transform(v.begin(), v.end(), s.begin(), [](int i){
            return std::to_string(i);
        });
        return s;
    }
}