#include <iostream>
#include <vector>
using namespace std;
int main(){ 
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
feature_data feature_data_temp ;
vector<feature_data> feature_data_v ;
vector<element> training_data;
feature_data_temp.feature_name = "aardvark" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 4 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Mammal" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  aardvark  ;
aardvark.elemt_name = "aardvark" ;
aardvark.is_positive =  false ;
aardvark.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(aardvark);
feature_data_temp.feature_name = "antelope" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 4 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Mammal" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  antelope  ;
antelope.elemt_name = "antelope" ;
antelope.is_positive =  false ;
antelope.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(antelope);
feature_data_temp.feature_name = "bass" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 0 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Fish" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  bass  ;
bass.elemt_name = "bass" ;
bass.is_positive =  false ;
bass.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(bass);
feature_data_temp.feature_name = "bear" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 4 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Mammal" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  bear  ;
bear.elemt_name = "bear" ;
bear.is_positive =  false ;
bear.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(bear);
feature_data_temp.feature_name = "boar" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 4 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Mammal" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  boar  ;
boar.elemt_name = "boar" ;
boar.is_positive =  false ;
boar.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(boar);
feature_data_temp.feature_name = "buffalo" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 4 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Mammal" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  buffalo  ;
buffalo.elemt_name = "buffalo" ;
buffalo.is_positive =  false ;
buffalo.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(buffalo);
feature_data_temp.feature_name = "calf" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 4 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Mammal" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  calf  ;
calf.elemt_name = "calf" ;
calf.is_positive =  false ;
calf.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(calf);
feature_data_temp.feature_name = "carp" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 0 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Fish" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  carp  ;
carp.elemt_name = "carp" ;
carp.is_positive =  false ;
carp.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(carp);
feature_data_temp.feature_name = "catfish" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 0 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Fish" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  catfish  ;
catfish.elemt_name = "catfish" ;
catfish.is_positive =  false ;
catfish.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(catfish);
feature_data_temp.feature_name = "cavy" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 4 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Mammal" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  cavy  ;
cavy.elemt_name = "cavy" ;
cavy.is_positive =  false ;
cavy.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(cavy);
feature_data_temp.feature_name = "cheetah" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 4 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Mammal" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  cheetah  ;
cheetah.elemt_name = "cheetah" ;
cheetah.is_positive =  false ;
cheetah.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(cheetah);
feature_data_temp.feature_name = "chicken" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 2 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Bird" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
element  chicken  ;
chicken.elemt_name = "chicken" ;
chicken.is_positive =  true ;
chicken.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(chicken);
feature_data_temp.feature_name = "chub" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 0 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Fish" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  chub  ;
chub.elemt_name = "chub" ;
chub.is_positive =  false ;
chub.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(chub);
feature_data_temp.feature_name = "clam" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 0 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Invertebrate" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  clam  ;
clam.elemt_name = "clam" ;
clam.is_positive =  false ;
clam.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(clam);
feature_data_temp.feature_name = "crab" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 4 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Invertebrate" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  crab  ;
crab.elemt_name = "crab" ;
crab.is_positive =  false ;
crab.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(crab);
feature_data_temp.feature_name = "crayfish" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 6 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Invertebrate" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  crayfish  ;
crayfish.elemt_name = "crayfish" ;
crayfish.is_positive =  false ;
crayfish.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(crayfish);
feature_data_temp.feature_name = "crow" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 2 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Bird" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
element  crow  ;
crow.elemt_name = "crow" ;
crow.is_positive =  true ;
crow.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(crow);
feature_data_temp.feature_name = "deer" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 4 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Mammal" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  deer  ;
deer.elemt_name = "deer" ;
deer.is_positive =  false ;
deer.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(deer);
feature_data_temp.feature_name = "dogfish" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 0 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Fish" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  dogfish  ;
dogfish.elemt_name = "dogfish" ;
dogfish.is_positive =  false ;
dogfish.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(dogfish);
feature_data_temp.feature_name = "dolphin" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 0 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Mammal" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  dolphin  ;
dolphin.elemt_name = "dolphin" ;
dolphin.is_positive =  false ;
dolphin.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(dolphin);
feature_data_temp.feature_name = "dove" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 2 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Bird" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
element  dove  ;
dove.elemt_name = "dove" ;
dove.is_positive =  true ;
dove.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(dove);
feature_data_temp.feature_name = "duck" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 2 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Bird" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
element  duck  ;
duck.elemt_name = "duck" ;
duck.is_positive =  true ;
duck.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(duck);
feature_data_temp.feature_name = "elephant" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 4 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Mammal" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  elephant  ;
elephant.elemt_name = "elephant" ;
elephant.is_positive =  false ;
elephant.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(elephant);
feature_data_temp.feature_name = "flamingo" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 2 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Bird" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
element  flamingo  ;
flamingo.elemt_name = "flamingo" ;
flamingo.is_positive =  true ;
flamingo.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(flamingo);
feature_data_temp.feature_name = "flea" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 6 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Bug" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  flea  ;
flea.elemt_name = "flea" ;
flea.is_positive =  false ;
flea.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(flea);
feature_data_temp.feature_name = "frog" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 4 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Amphibian" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  frog  ;
frog.elemt_name = "frog" ;
frog.is_positive =  false ;
frog.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(frog);
feature_data_temp.feature_name = "fruitbat" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 2 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Mammal" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  fruitbat  ;
fruitbat.elemt_name = "fruitbat" ;
fruitbat.is_positive =  false ;
fruitbat.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(fruitbat);
feature_data_temp.feature_name = "giraffe" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 4 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Mammal" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  giraffe  ;
giraffe.elemt_name = "giraffe" ;
giraffe.is_positive =  false ;
giraffe.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(giraffe);
feature_data_temp.feature_name = "girl" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 2 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Mammal" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  girl  ;
girl.elemt_name = "girl" ;
girl.is_positive =  false ;
girl.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(girl);
feature_data_temp.feature_name = "gnat" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 6 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Bug" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  gnat  ;
gnat.elemt_name = "gnat" ;
gnat.is_positive =  false ;
gnat.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(gnat);
feature_data_temp.feature_name = "goat" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 4 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Mammal" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  goat  ;
goat.elemt_name = "goat" ;
goat.is_positive =  false ;
goat.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(goat);
feature_data_temp.feature_name = "gorilla" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 2 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Mammal" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  gorilla  ;
gorilla.elemt_name = "gorilla" ;
gorilla.is_positive =  false ;
gorilla.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(gorilla);
feature_data_temp.feature_name = "gull" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 2 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Bird" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
element  gull  ;
gull.elemt_name = "gull" ;
gull.is_positive =  true ;
gull.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(gull);
feature_data_temp.feature_name = "haddock" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 0 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Fish" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  haddock  ;
haddock.elemt_name = "haddock" ;
haddock.is_positive =  false ;
haddock.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(haddock);
feature_data_temp.feature_name = "hamster" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 4 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Mammal" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  hamster  ;
hamster.elemt_name = "hamster" ;
hamster.is_positive =  false ;
hamster.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(hamster);
feature_data_temp.feature_name = "hare" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 4 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Mammal" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  hare  ;
hare.elemt_name = "hare" ;
hare.is_positive =  false ;
hare.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(hare);
feature_data_temp.feature_name = "hawk" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 2 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Bird" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
element  hawk  ;
hawk.elemt_name = "hawk" ;
hawk.is_positive =  true ;
hawk.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(hawk);
feature_data_temp.feature_name = "herring" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 0 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Fish" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  herring  ;
herring.elemt_name = "herring" ;
herring.is_positive =  false ;
herring.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(herring);
feature_data_temp.feature_name = "honeybee" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 6 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Bug" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  honeybee  ;
honeybee.elemt_name = "honeybee" ;
honeybee.is_positive =  false ;
honeybee.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(honeybee);
feature_data_temp.feature_name = "housefly" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 6 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Bug" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  housefly  ;
housefly.elemt_name = "housefly" ;
housefly.is_positive =  false ;
housefly.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(housefly);
feature_data_temp.feature_name = "kiwi" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 2 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Bird" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
element  kiwi  ;
kiwi.elemt_name = "kiwi" ;
kiwi.is_positive =  true ;
kiwi.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(kiwi);
feature_data_temp.feature_name = "ladybird" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 6 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Bug" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  ladybird  ;
ladybird.elemt_name = "ladybird" ;
ladybird.is_positive =  false ;
ladybird.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(ladybird);
feature_data_temp.feature_name = "lark" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 2 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Bird" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
element  lark  ;
lark.elemt_name = "lark" ;
lark.is_positive =  true ;
lark.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(lark);
feature_data_temp.feature_name = "leopard" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 4 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Mammal" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  leopard  ;
leopard.elemt_name = "leopard" ;
leopard.is_positive =  false ;
leopard.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(leopard);
feature_data_temp.feature_name = "lion" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 4 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Mammal" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  lion  ;
lion.elemt_name = "lion" ;
lion.is_positive =  false ;
lion.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(lion);
feature_data_temp.feature_name = "lobster" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 6 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Invertebrate" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  lobster  ;
lobster.elemt_name = "lobster" ;
lobster.is_positive =  false ;
lobster.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(lobster);
feature_data_temp.feature_name = "lynx" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 4 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Mammal" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  lynx  ;
lynx.elemt_name = "lynx" ;
lynx.is_positive =  false ;
lynx.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(lynx);
feature_data_temp.feature_name = "mink" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 4 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Mammal" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  mink  ;
mink.elemt_name = "mink" ;
mink.is_positive =  false ;
mink.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(mink);
feature_data_temp.feature_name = "mole" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 4 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Mammal" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  mole  ;
mole.elemt_name = "mole" ;
mole.is_positive =  false ;
mole.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(mole);
feature_data_temp.feature_name = "mongoose" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 4 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Mammal" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  mongoose  ;
mongoose.elemt_name = "mongoose" ;
mongoose.is_positive =  false ;
mongoose.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(mongoose);
feature_data_temp.feature_name = "moth" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 6 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Bug" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  moth  ;
moth.elemt_name = "moth" ;
moth.is_positive =  false ;
moth.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(moth);
feature_data_temp.feature_name = "newt" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 4 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Amphibian" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  newt  ;
newt.elemt_name = "newt" ;
newt.is_positive =  false ;
newt.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(newt);
feature_data_temp.feature_name = "octopus" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 8 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Invertebrate" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  octopus  ;
octopus.elemt_name = "octopus" ;
octopus.is_positive =  false ;
octopus.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(octopus);
feature_data_temp.feature_name = "opossum" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 4 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Mammal" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  opossum  ;
opossum.elemt_name = "opossum" ;
opossum.is_positive =  false ;
opossum.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(opossum);
feature_data_temp.feature_name = "oryx" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 4 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Mammal" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  oryx  ;
oryx.elemt_name = "oryx" ;
oryx.is_positive =  false ;
oryx.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(oryx);
feature_data_temp.feature_name = "ostrich" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 2 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Bird" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
element  ostrich  ;
ostrich.elemt_name = "ostrich" ;
ostrich.is_positive =  true ;
ostrich.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(ostrich);
feature_data_temp.feature_name = "parakeet" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 2 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Bird" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
element  parakeet  ;
parakeet.elemt_name = "parakeet" ;
parakeet.is_positive =  true ;
parakeet.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(parakeet);
feature_data_temp.feature_name = "penguin" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 2 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Bird" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
element  penguin  ;
penguin.elemt_name = "penguin" ;
penguin.is_positive =  true ;
penguin.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(penguin);
feature_data_temp.feature_name = "pheasant" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 2 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Bird" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
element  pheasant  ;
pheasant.elemt_name = "pheasant" ;
pheasant.is_positive =  true ;
pheasant.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(pheasant);
feature_data_temp.feature_name = "pike" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 0 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Fish" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  pike  ;
pike.elemt_name = "pike" ;
pike.is_positive =  false ;
pike.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(pike);
feature_data_temp.feature_name = "piranha" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 0 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Fish" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  piranha  ;
piranha.elemt_name = "piranha" ;
piranha.is_positive =  false ;
piranha.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(piranha);
feature_data_temp.feature_name = "pitviper" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 0 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Reptile" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  pitviper  ;
pitviper.elemt_name = "pitviper" ;
pitviper.is_positive =  false ;
pitviper.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(pitviper);
feature_data_temp.feature_name = "platypus" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 4 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Mammal" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  platypus  ;
platypus.elemt_name = "platypus" ;
platypus.is_positive =  false ;
platypus.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(platypus);
feature_data_temp.feature_name = "polecat" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 4 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Mammal" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  polecat  ;
polecat.elemt_name = "polecat" ;
polecat.is_positive =  false ;
polecat.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(polecat);
feature_data_temp.feature_name = "pony" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 4 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Mammal" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  pony  ;
pony.elemt_name = "pony" ;
pony.is_positive =  false ;
pony.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(pony);
feature_data_temp.feature_name = "porpoise" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 0 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Mammal" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  porpoise  ;
porpoise.elemt_name = "porpoise" ;
porpoise.is_positive =  false ;
porpoise.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(porpoise);
feature_data_temp.feature_name = "puma" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 4 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Mammal" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  puma  ;
puma.elemt_name = "puma" ;
puma.is_positive =  false ;
puma.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(puma);
feature_data_temp.feature_name = "pussycat" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 4 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Mammal" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  pussycat  ;
pussycat.elemt_name = "pussycat" ;
pussycat.is_positive =  false ;
pussycat.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(pussycat);
feature_data_temp.feature_name = "raccoon" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 4 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Mammal" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  raccoon  ;
raccoon.elemt_name = "raccoon" ;
raccoon.is_positive =  false ;
raccoon.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(raccoon);
feature_data_temp.feature_name = "reindeer" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 4 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Mammal" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  reindeer  ;
reindeer.elemt_name = "reindeer" ;
reindeer.is_positive =  false ;
reindeer.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(reindeer);
feature_data_temp.feature_name = "rhea" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 2 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Bird" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
element  rhea  ;
rhea.elemt_name = "rhea" ;
rhea.is_positive =  true ;
rhea.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(rhea);
feature_data_temp.feature_name = "scorpion" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 8 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Invertebrate" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  scorpion  ;
scorpion.elemt_name = "scorpion" ;
scorpion.is_positive =  false ;
scorpion.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(scorpion);
feature_data_temp.feature_name = "seahorse" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 0 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Fish" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  seahorse  ;
seahorse.elemt_name = "seahorse" ;
seahorse.is_positive =  false ;
seahorse.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(seahorse);
feature_data_temp.feature_name = "seal" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 0 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Mammal" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  seal  ;
seal.elemt_name = "seal" ;
seal.is_positive =  false ;
seal.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(seal);
feature_data_temp.feature_name = "sealion" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 2 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Mammal" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  sealion  ;
sealion.elemt_name = "sealion" ;
sealion.is_positive =  false ;
sealion.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(sealion);
feature_data_temp.feature_name = "seasnake" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 0 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Reptile" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  seasnake  ;
seasnake.elemt_name = "seasnake" ;
seasnake.is_positive =  false ;
seasnake.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(seasnake);
feature_data_temp.feature_name = "seawasp" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 0 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Invertebrate" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  seawasp  ;
seawasp.elemt_name = "seawasp" ;
seawasp.is_positive =  false ;
seawasp.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(seawasp);
feature_data_temp.feature_name = "skimmer" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 2 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Bird" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
element  skimmer  ;
skimmer.elemt_name = "skimmer" ;
skimmer.is_positive =  true ;
skimmer.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(skimmer);
feature_data_temp.feature_name = "skua" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 2 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Bird" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
element  skua  ;
skua.elemt_name = "skua" ;
skua.is_positive =  true ;
skua.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(skua);
feature_data_temp.feature_name = "slowworm" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 0 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Reptile" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  slowworm  ;
slowworm.elemt_name = "slowworm" ;
slowworm.is_positive =  false ;
slowworm.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(slowworm);
feature_data_temp.feature_name = "slug" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 0 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Invertebrate" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  slug  ;
slug.elemt_name = "slug" ;
slug.is_positive =  false ;
slug.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(slug);
feature_data_temp.feature_name = "sole" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 0 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Fish" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  sole  ;
sole.elemt_name = "sole" ;
sole.is_positive =  false ;
sole.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(sole);
feature_data_temp.feature_name = "sparrow" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 2 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Bird" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
element  sparrow  ;
sparrow.elemt_name = "sparrow" ;
sparrow.is_positive =  true ;
sparrow.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(sparrow);
feature_data_temp.feature_name = "squirrel" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 2 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Mammal" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  squirrel  ;
squirrel.elemt_name = "squirrel" ;
squirrel.is_positive =  false ;
squirrel.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(squirrel);
feature_data_temp.feature_name = "starfish" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 5 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Invertebrate" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  starfish  ;
starfish.elemt_name = "starfish" ;
starfish.is_positive =  false ;
starfish.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(starfish);
feature_data_temp.feature_name = "stingray" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 0 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Fish" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  stingray  ;
stingray.elemt_name = "stingray" ;
stingray.is_positive =  false ;
stingray.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(stingray);
feature_data_temp.feature_name = "swan" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 2 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Bird" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
element  swan  ;
swan.elemt_name = "swan" ;
swan.is_positive =  true ;
swan.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(swan);
feature_data_temp.feature_name = "termite" ;
feature_data_temp.active_type = "name" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = true ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.feature_type_int = 6 ;
feature_data_temp.active_type = "int" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "string" ;
feature_data_temp.feature_type_string = "Bug" ;

            feature_data_v.push_back(feature_data_temp);
              
feature_data_temp.active_type = "bool" ;
feature_data_temp.feature_type_bool = false ;

            feature_data_v.push_back(feature_data_temp);
              
element  termite  ;
termite.elemt_name = "termite" ;
termite.is_positive =  false ;
termite.feature_space.push_back(feature_data_v) ;
feature_data_v.clear() ;
training_data.push_back(termite);


    for (int i=0;i<88;++i){
      
        cout<<i<<" ";

        for(int j=0;j<19;++j){
        
      

        if (training_data[i].feature_space[0][j].active_type == "string"){
            cout<<training_data[i].feature_space[0][j].feature_type_string  << " ";

        }else if (training_data[i].feature_space[0][j].active_type == "int"){
        cout<<training_data[i].feature_space[0][j].feature_type_int << " " ;
      
      }else if (training_data[i].feature_space[0][j].active_type == "bool"){
        cout<<training_data[i].feature_space[0][j].feature_type_bool << "  ";
      
      }else if (training_data[i].feature_space[0][j].active_type == "float"){
        cout<<training_data[i].feature_space[0][j].feature_type_float  << " ";
      
      
      }else if (training_data[i].feature_space[0][j].active_type == "name"){
        cout<<training_data[i].feature_space[0][j].feature_name << "  ";
      
      };
      
           
      
      };
            
    cout<<""<<endl;
      
    };
    
   

    
}
