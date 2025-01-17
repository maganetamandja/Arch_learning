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

    private : struct element
    {
        string elemt_name;

        bool is_positive ;
        
        vector<vector<feature_data>> feature_space; //feauture space
        
    };

    
    
    private : struct must_list //must struct
    {
       

       float must_min; //interval
       float must_max;

       vector<feature_data> must_features;  //must have features
         
    };

     private : struct must_not_list
    {
       
       float max_limit; //interval
       float min_limit;

       vector<feature_data> must_not_feature; //must not have elements  
       
    };

    private : void extend_list_real (must_list the_list ,float new_min_limit, float new_max_limit) //should be added(an updater)
    {
       
       the_list.must_min = new_min_limit;
       the_list.must_max = new_max_limit;
    };

    private : void extend_list_features (must_list the_list , feature_data new_feature) //should be added(an updater)
    {
       
      the_list.must_features.push_back(new_feature);
    };

    private : vector<vector<element>> separate_pos_from_neg(vector<element> t_data){//function that divide elements in pos and neg

        vector<element> pos_list_of_elemets_temp;
        vector<element> neg_list_of_elemets_temp;

        vector<vector<element>>  return_v_v;

        int rows = t_data.size();
        for(int i =0; i<rows;++i){//if the feature is positive or negative
            if(t_data[i].is_positive == true ){

                    pos_list_of_elemets_temp.push_back(t_data[i]);

            }else{
                pos_list_of_elemets_temp.push_back(t_data[i]);
            };

        }; 

        return_v_v.push_back(pos_list_of_elemets_temp);
        return_v_v.push_back(neg_list_of_elemets_temp);

        return return_v_v;

    };
    


    private : vector<string> drop_link(vector<element> only_positive_element){//return  a list of names of optional features
                int rows = only_positive_element.size();
                int columns = only_positive_element[0].feature_space.size();
                int number_of_feature = only_positive_element[0].feature_space[0].size();

                vector<string> optional_features_names;

                for (int i=0; i<rows;++i){

                    for(int j = 0 ; j<rows;++j){

                        if(only_positive_element[i].feature_space!=only_positive_element[j].feature_space){//when the entires features space is not the same
                           
                           for (int k = 0; k<columns; ++k) {

                                for (int l =1; l<number_of_feature ; ++l){

                                    if((only_positive_element[i].feature_space[k][l].feature_type_bool!= only_positive_element[j].feature_space[k][l].feature_type_bool)||
                                    (only_positive_element[i].feature_space[k][l].feature_type_float != only_positive_element[j].feature_space[k][l].feature_type_float)||
                                    (only_positive_element[i].feature_space[k][l].feature_type_int != only_positive_element[j].feature_space[k][l].feature_type_int)||
                                    (only_positive_element[i].feature_space[k][l].feature_type_string != only_positive_element[j].feature_space[k][l].feature_type_string)||
                                    (only_positive_element[i].feature_space[k][l].feature_type_string_vector != only_positive_element[j].feature_space[k][l].feature_type_string_vector)){ //the non differentiators

                                        optional_features_names.push_back(only_positive_element[i].feature_space[k][l].feature_name);


                                };

                                };

                                

                           };
                            


                    };

                    };

                    

                };
        
    };

   
    private : vector<vector<element>> find_felicity(vector<element> trimed_pos_data, vector<element> trimed_neg_data){//find contrasting elements with only one difference from trimed data
        int pos_size = trimed_pos_data.size();
        int neg_size = trimed_neg_data.size();
        int columns = trimed_neg_data[0].feature_space.size();
        int number_of_feature = trimed_neg_data[0].feature_space[0].size();
        int count = 0;
        vector<element> coupling_felicity;
        vector<vector<element>> return_v;

        for(int i =0; i<pos_size;++i){
            for(int j = 0; j<neg_size; ++j){

                for (int k = 0; k<columns;++k){
                    for(int l = 1; l< number_of_feature; ++l){

                        if((trimed_pos_data[i].feature_space[k][l].feature_type_bool != trimed_neg_data[j].feature_space[k][l].feature_type_bool)||
                            (trimed_pos_data[i].feature_space[k][l].feature_type_float != trimed_pos_data[j].feature_space[k][l].feature_type_float)||
                            (trimed_pos_data[i].feature_space[k][l].feature_type_int != trimed_pos_data[j].feature_space[k][l].feature_type_int)||
                            (trimed_pos_data[i].feature_space[k][l].feature_type_string != trimed_pos_data[j].feature_space[k][l].feature_type_string)||
                            (trimed_pos_data[i].feature_space[k][l].feature_type_string_vector != trimed_pos_data[j].feature_space[k][l].feature_type_string_vector)){
                                count= count +1;

                        };

                        

                    };

                };
                if (count == 1){

                    //felicity
                    coupling_felicity.push_back(trimed_pos_data[i]);
                    coupling_felicity.push_back(trimed_neg_data[j]);

                    return_v.push_back(coupling_felicity);
                    

                };

                

            };



        };

        return return_v;

    };

    private : bool arch_model(){//

        //discriminate if the test element is part of must_not list 
    

        //confident or not 

    };




};