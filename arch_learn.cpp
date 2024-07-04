//the idea of a model

// the training data
#include <iostream>
#include <vector>

using namespace std;

class arch_learn {

    private : struct feature_data {

        string feature_name;
        int feature_type_int;
        float feature_type_float;
        string feature_type_string;
        bool feature_type_bool;
        vector<string> feature_type_string_vector;

    };

    private : struct feature_singular
    {
        string feature_name;
        int feature_type_int;
        float feature_type_float;
        string feature_type_string;
        bool feature_type_bool;
        vector<string> feature_type_string_vector;
    };

    private : struct element
    {
        string elemt_name;

        bool is_positive ;
        
        vector<vector<feature_data>> feature_space; //feauture space
        
    };

    private : vector<element> training_data;

    private : struct positive_seed//seed or known positive
    {
         vector<vector<feature_data>> feature_space; //seed feauture space

    };
    
    private : struct must_list //must struct
    {
       

       float must_min; //interval
       float must_max;

       vector<element> must_element;  //must have elements
         
    };

     private : struct must_not_list
    {
       
       float max_limit; //interval
       float min_limit;

       vector<element> must_not_element; //must not have elements  
       
    };

    private : struct extended_list
    {
       
       float new_max_limit; //interval
       float new_min_limit;

       vector<element> extended_element; //extended elements  
       
    };

    vector<element> postive_elemts;
    vector<element> negative_elements;

    private : vector<vector<element>> separate_pos_from_neg(vector<element> t_data){//function that divide elements in pos and neg

        int rows = t_data.size();
        for(int i =0; i<rows;++i){//if

        }; 

    };
    

   
    private : void find_felicity(){

        //compare the initial model to the entire feature space and determine if there are felicity conditions and track them

    };

    private : bool arch_model(){

        //discriminate if the test element is part of must_not list 
    

        //confident or not 

    };




};