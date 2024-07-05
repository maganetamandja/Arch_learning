#include <iostream>
#include <vector>

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

struct feature_singular
    {
        string feature_name;
        int feature_type_int;
        float feature_type_float;
        string feature_type_string;
        bool feature_type_bool;
        vector<string> feature_type_string_vector;
    };


struct element
    {
        string elemt_name;
        bool is_positive ;
        vector<vector<feature_data>> feature_space; //feauture space       
    };



struct positive_seed//seed or known positive
    {
         vector<vector<feature_data>> feature_space; //seed feauture space

    };

vector<element> training_data;


int main() {

    



    
    
    return 0;

}