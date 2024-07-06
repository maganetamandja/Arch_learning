#ifndef PASS_THE_TRAINING_DATA_H
#define PASS_THE_TRAINING_DATA_H
#include <cmath>
#include <vector>
#include <iostream>
using namespace std;

struct feature_data {

        string feature_name;
        int feature_type_int;
        float feature_type_float;
        string feature_type_string;
        bool feature_type_bool;
        string active_type;
        vector<string> feature_type_string_vector;

        };

        struct element
        {
        string elemt_name;
        bool is_positive ;
        vector<vector<feature_data>> feature_space; //feauture space       
        };

vector<element> pass_training_set();



#endif