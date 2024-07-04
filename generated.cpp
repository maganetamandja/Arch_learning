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
feature_singular feature_singular_temp ;
feature_data feature_data_temp ;
vector<feature_singular> feature_singular_v ;
vector<feature_data> feature_data_v ;
vector<element> training_data;
//vector<int>::iterator ptr = feature_data_temp_v.begin() ;
feature_data  animal_name_feature  ;
animal_name_feature.feature_name = "animal_name" ;
feature_data_temp.feature_name = "animal_name" ;
feature_singular_temp.feature_name = "animal_name" ;
feature_singular_temp.feature_type_string = "animal_name" ;
feature_singular_v.push_back(feature_singular_temp) ;

    feature_data_v.push_back(feature_data_temp);
    //feature_data_v[0].feature_name = feature_singular_v[0].feature_name ;
    //feature_data_v[0].feature_type_int = feature_singular_v[0].feature_type_int;
    //feature_data_v[0].feature_type_float = feature_singular_v[0].feature_type_float;
    //feature_data_v[0].feature_type_string = feature_singular_v[0].feature_type_string;
    //feature_data_v[0].feature_type_bool = feature_singular_v[0].feature_type_bool;
    //feature_data_v[0].feature_type_string_vector = feature_singular_v[0].feature_type_string_vector;
  
              
feature_data  hair_feature  ;
hair_feature.feature_type_bool = true ;
feature_data_temp.feature_type_bool = true ;
feature_singular_temp.feature_name = "hair" ;
feature_singular_temp.feature_type_bool = true ;
feature_singular_v.push_back(feature_singular_temp) ;

    feature_data_v.push_back(feature_data_temp);
    //feature_data_v[1].feature_name = feature_singular_v[1].feature_name ;
    //feature_data_v[1].feature_type_int = feature_singular_v[1].feature_type_int;
    //feature_data_v[1].feature_type_float = feature_singular_v[1].feature_type_float;
    //feature_data_v[1].feature_type_string = feature_singular_v[1].feature_type_string;
    //feature_data_v[1].feature_type_bool = feature_singular_v[1].feature_type_bool;
    //feature_data_v[1].feature_type_string_vector = feature_singular_v[1].feature_type_string_vector;
  
              
feature_data  feathers_feature  ;
feathers_feature.feature_type_bool = false ;
feature_data_temp.feature_type_bool = false ;
feature_singular_temp.feature_name = "feathers" ;
feature_singular_temp.feature_type_bool = false ;
feature_singular_v.push_back(feature_singular_temp) ;

    feature_data_v.push_back(feature_data_temp);
    //feature_data_v[2].feature_name = feature_singular_v[2].feature_name ;
    //feature_data_v[2].feature_type_int = feature_singular_v[2].feature_type_int;
    //feature_data_v[2].feature_type_float = feature_singular_v[2].feature_type_float;
    //feature_data_v[2].feature_type_string = feature_singular_v[2].feature_type_string;
    //feature_data_v[2].feature_type_bool = feature_singular_v[2].feature_type_bool;
    //feature_data_v[2].feature_type_string_vector = feature_singular_v[2].feature_type_string_vector;
  
              
feature_data  eggs_feature  ;
eggs_feature.feature_type_bool = false ;
feature_data_temp.feature_type_bool = false ;
feature_singular_temp.feature_name = "eggs" ;
feature_singular_temp.feature_type_bool = false ;
feature_singular_v.push_back(feature_singular_temp) ;

    feature_data_v.push_back(feature_data_temp);
    //feature_data_v[3].feature_name = feature_singular_v[3].feature_name ;
    //feature_data_v[3].feature_type_int = feature_singular_v[3].feature_type_int;
    //feature_data_v[3].feature_type_float = feature_singular_v[3].feature_type_float;
    //feature_data_v[3].feature_type_string = feature_singular_v[3].feature_type_string;
    //feature_data_v[3].feature_type_bool = feature_singular_v[3].feature_type_bool;
    //feature_data_v[3].feature_type_string_vector = feature_singular_v[3].feature_type_string_vector;
  
              
feature_data  milk_feature  ;
milk_feature.feature_type_bool = true ;
feature_data_temp.feature_type_bool = true ;
feature_singular_temp.feature_name = "milk" ;
feature_singular_temp.feature_type_bool = true ;
feature_singular_v.push_back(feature_singular_temp) ;

    feature_data_v.push_back(feature_data_temp);
    //feature_data_v[4].feature_name = feature_singular_v[4].feature_name ;
    //feature_data_v[4].feature_type_int = feature_singular_v[4].feature_type_int;
    //feature_data_v[4].feature_type_float = feature_singular_v[4].feature_type_float;
    //feature_data_v[4].feature_type_string = feature_singular_v[4].feature_type_string;
    //feature_data_v[4].feature_type_bool = feature_singular_v[4].feature_type_bool;
    //feature_data_v[4].feature_type_string_vector = feature_singular_v[4].feature_type_string_vector;
  
              
feature_data  airborne_feature  ;
airborne_feature.feature_type_bool = false ;
feature_data_temp.feature_type_bool = false ;
feature_singular_temp.feature_name = "airborne" ;
feature_singular_temp.feature_type_bool = false ;
feature_singular_v.push_back(feature_singular_temp) ;

    feature_data_v.push_back(feature_data_temp);
    //feature_data_v[5].feature_name = feature_singular_v[5].feature_name ;
    //feature_data_v[5].feature_type_int = feature_singular_v[5].feature_type_int;
    //feature_data_v[5].feature_type_float = feature_singular_v[5].feature_type_float;
    //feature_data_v[5].feature_type_string = feature_singular_v[5].feature_type_string;
    //feature_data_v[5].feature_type_bool = feature_singular_v[5].feature_type_bool;
    //feature_data_v[5].feature_type_string_vector = feature_singular_v[5].feature_type_string_vector;
  
              
feature_data  aquatic_feature  ;
aquatic_feature.feature_type_bool = false ;
feature_data_temp.feature_type_bool = false ;
feature_singular_temp.feature_name = "aquatic" ;
feature_singular_temp.feature_type_bool = false ;
feature_singular_v.push_back(feature_singular_temp) ;

    feature_data_v.push_back(feature_data_temp);
    //feature_data_v[6].feature_name = feature_singular_v[6].feature_name ;
    //feature_data_v[6].feature_type_int = feature_singular_v[6].feature_type_int;
    //feature_data_v[6].feature_type_float = feature_singular_v[6].feature_type_float;
    //feature_data_v[6].feature_type_string = feature_singular_v[6].feature_type_string;
    //feature_data_v[6].feature_type_bool = feature_singular_v[6].feature_type_bool;
    //feature_data_v[6].feature_type_string_vector = feature_singular_v[6].feature_type_string_vector;
  
              
feature_data  predator_feature  ;
predator_feature.feature_type_bool = true ;
feature_data_temp.feature_type_bool = true ;
feature_singular_temp.feature_name = "predator" ;
feature_singular_temp.feature_type_bool = true ;
feature_singular_v.push_back(feature_singular_temp) ;

    feature_data_v.push_back(feature_data_temp);
    //feature_data_v[7].feature_name = feature_singular_v[7].feature_name ;
    //feature_data_v[7].feature_type_int = feature_singular_v[7].feature_type_int;
    //feature_data_v[7].feature_type_float = feature_singular_v[7].feature_type_float;
    //feature_data_v[7].feature_type_string = feature_singular_v[7].feature_type_string;
    //feature_data_v[7].feature_type_bool = feature_singular_v[7].feature_type_bool;
    //feature_data_v[7].feature_type_string_vector = feature_singular_v[7].feature_type_string_vector;
  
              
feature_data  toothed_feature  ;
toothed_feature.feature_type_bool = true ;
feature_data_temp.feature_type_bool = true ;
feature_singular_temp.feature_name = "toothed" ;
feature_singular_temp.feature_type_bool = true ;
feature_singular_v.push_back(feature_singular_temp) ;

    feature_data_v.push_back(feature_data_temp);
    //feature_data_v[8].feature_name = feature_singular_v[8].feature_name ;
    //feature_data_v[8].feature_type_int = feature_singular_v[8].feature_type_int;
    //feature_data_v[8].feature_type_float = feature_singular_v[8].feature_type_float;
    //feature_data_v[8].feature_type_string = feature_singular_v[8].feature_type_string;
    //feature_data_v[8].feature_type_bool = feature_singular_v[8].feature_type_bool;
    //feature_data_v[8].feature_type_string_vector = feature_singular_v[8].feature_type_string_vector;
  
              
feature_data  backbone_feature  ;
backbone_feature.feature_type_bool = true ;
feature_data_temp.feature_type_bool = true ;
feature_singular_temp.feature_name = "backbone" ;
feature_singular_temp.feature_type_bool = true ;
feature_singular_v.push_back(feature_singular_temp) ;

    feature_data_v.push_back(feature_data_temp);
    //feature_data_v[9].feature_name = feature_singular_v[9].feature_name ;
    //feature_data_v[9].feature_type_int = feature_singular_v[9].feature_type_int;
    //feature_data_v[9].feature_type_float = feature_singular_v[9].feature_type_float;
    //feature_data_v[9].feature_type_string = feature_singular_v[9].feature_type_string;
    //feature_data_v[9].feature_type_bool = feature_singular_v[9].feature_type_bool;
    //feature_data_v[9].feature_type_string_vector = feature_singular_v[9].feature_type_string_vector;
  
              
feature_data  breathes_feature  ;
breathes_feature.feature_type_bool = true ;
feature_data_temp.feature_type_bool = true ;
feature_singular_temp.feature_name = "breathes" ;
feature_singular_temp.feature_type_bool = true ;
feature_singular_v.push_back(feature_singular_temp) ;

    feature_data_v.push_back(feature_data_temp);
    //feature_data_v[10].feature_name = feature_singular_v[10].feature_name ;
    //feature_data_v[10].feature_type_int = feature_singular_v[10].feature_type_int;
    //feature_data_v[10].feature_type_float = feature_singular_v[10].feature_type_float;
    //feature_data_v[10].feature_type_string = feature_singular_v[10].feature_type_string;
    //feature_data_v[10].feature_type_bool = feature_singular_v[10].feature_type_bool;
    //feature_data_v[10].feature_type_string_vector = feature_singular_v[10].feature_type_string_vector;
  
              
feature_data  venomous_feature  ;
venomous_feature.feature_type_bool = false ;
feature_data_temp.feature_type_bool = false ;
feature_singular_temp.feature_name = "venomous" ;
feature_singular_temp.feature_type_bool = false ;
feature_singular_v.push_back(feature_singular_temp) ;

    feature_data_v.push_back(feature_data_temp);
    //feature_data_v[11].feature_name = feature_singular_v[11].feature_name ;
    //feature_data_v[11].feature_type_int = feature_singular_v[11].feature_type_int;
    //feature_data_v[11].feature_type_float = feature_singular_v[11].feature_type_float;
    //feature_data_v[11].feature_type_string = feature_singular_v[11].feature_type_string;
    //feature_data_v[11].feature_type_bool = feature_singular_v[11].feature_type_bool;
    //feature_data_v[11].feature_type_string_vector = feature_singular_v[11].feature_type_string_vector;
  
              
feature_data  fins_feature  ;
fins_feature.feature_type_bool = false ;
feature_data_temp.feature_type_bool = false ;
feature_singular_temp.feature_name = "fins" ;
feature_singular_temp.feature_type_bool = false ;
feature_singular_v.push_back(feature_singular_temp) ;

    feature_data_v.push_back(feature_data_temp);
    //feature_data_v[12].feature_name = feature_singular_v[12].feature_name ;
    //feature_data_v[12].feature_type_int = feature_singular_v[12].feature_type_int;
    //feature_data_v[12].feature_type_float = feature_singular_v[12].feature_type_float;
    //feature_data_v[12].feature_type_string = feature_singular_v[12].feature_type_string;
    //feature_data_v[12].feature_type_bool = feature_singular_v[12].feature_type_bool;
    //feature_data_v[12].feature_type_string_vector = feature_singular_v[12].feature_type_string_vector;
  
              
feature_data  legs_feature  ;
legs_feature.feature_type_int = 4 ;
feature_data_temp.feature_type_int = 4 ;
feature_singular_temp.feature_name = "legs" ;
feature_singular_temp.feature_type_int =  4 ;
feature_singular_v.push_back(feature_singular_temp) ;

    feature_data_v.push_back(feature_data_temp);
    //feature_data_v[13].feature_name = feature_singular_v[13].feature_name ;
    //feature_data_v[13].feature_type_int = feature_singular_v[13].feature_type_int;
    //feature_data_v[13].feature_type_float = feature_singular_v[13].feature_type_float;
    //feature_data_v[13].feature_type_string = feature_singular_v[13].feature_type_string;
    //feature_data_v[13].feature_type_bool = feature_singular_v[13].feature_type_bool;
    //feature_data_v[13].feature_type_string_vector = feature_singular_v[13].feature_type_string_vector;
  
              
feature_data  tail_feature  ;
tail_feature.feature_type_bool = false ;
feature_data_temp.feature_type_bool = false ;
feature_singular_temp.feature_name = "tail" ;
feature_singular_temp.feature_type_bool = false ;
feature_singular_v.push_back(feature_singular_temp) ;

    feature_data_v.push_back(feature_data_temp);
    //feature_data_v[14].feature_name = feature_singular_v[14].feature_name ;
    //feature_data_v[14].feature_type_int = feature_singular_v[14].feature_type_int;
    //feature_data_v[14].feature_type_float = feature_singular_v[14].feature_type_float;
    //feature_data_v[14].feature_type_string = feature_singular_v[14].feature_type_string;
    //feature_data_v[14].feature_type_bool = feature_singular_v[14].feature_type_bool;
    //feature_data_v[14].feature_type_string_vector = feature_singular_v[14].feature_type_string_vector;
  
              
feature_data  domestic_feature  ;
domestic_feature.feature_type_bool = false ;
feature_data_temp.feature_type_bool = false ;
feature_singular_temp.feature_name = "domestic" ;
feature_singular_temp.feature_type_bool = false ;
feature_singular_v.push_back(feature_singular_temp) ;

    feature_data_v.push_back(feature_data_temp);
    //feature_data_v[15].feature_name = feature_singular_v[15].feature_name ;
    //feature_data_v[15].feature_type_int = feature_singular_v[15].feature_type_int;
    //feature_data_v[15].feature_type_float = feature_singular_v[15].feature_type_float;
    //feature_data_v[15].feature_type_string = feature_singular_v[15].feature_type_string;
    //feature_data_v[15].feature_type_bool = feature_singular_v[15].feature_type_bool;
    //feature_data_v[15].feature_type_string_vector = feature_singular_v[15].feature_type_string_vector;
  
              
feature_data  catsize_feature  ;
catsize_feature.feature_type_bool = true ;
feature_data_temp.feature_type_bool = true ;
feature_singular_temp.feature_name = "catsize" ;
feature_singular_temp.feature_type_bool = true ;
feature_singular_v.push_back(feature_singular_temp) ;

    feature_data_v.push_back(feature_data_temp);
    //feature_data_v[16].feature_name = feature_singular_v[16].feature_name ;
    //feature_data_v[16].feature_type_int = feature_singular_v[16].feature_type_int;
    //feature_data_v[16].feature_type_float = feature_singular_v[16].feature_type_float;
    //feature_data_v[16].feature_type_string = feature_singular_v[16].feature_type_string;
    //feature_data_v[16].feature_type_bool = feature_singular_v[16].feature_type_bool;
    //feature_data_v[16].feature_type_string_vector = feature_singular_v[16].feature_type_string_vector;
  
              
feature_data  class_type_string_feature  ;
class_type_string_feature.feature_type_string = "Mammal" ;
feature_data_temp.feature_type_string = "Mammal" ;
feature_singular_temp.feature_name = "class_type_string" ;
feature_singular_temp.feature_type_string = "Mammal" ;
feature_singular_v.push_back(feature_singular_temp) ;

    feature_data_v.push_back(feature_data_temp);
    //feature_data_v[17].feature_name = feature_singular_v[17].feature_name ;
    //feature_data_v[17].feature_type_int = feature_singular_v[17].feature_type_int;
    //feature_data_v[17].feature_type_float = feature_singular_v[17].feature_type_float;
    //feature_data_v[17].feature_type_string = feature_singular_v[17].feature_type_string;
    //feature_data_v[17].feature_type_bool = feature_singular_v[17].feature_type_bool;
    //feature_data_v[17].feature_type_string_vector = feature_singular_v[17].feature_type_string_vector;
  
              
feature_data  positive_negative_feature  ;
positive_negative_feature.feature_type_bool = false ;
feature_data_temp.feature_type_bool = false ;
feature_singular_temp.feature_name = "positive_negative" ;
feature_singular_temp.feature_type_bool = false ;
feature_singular_v.push_back(feature_singular_temp) ;

    feature_data_v.push_back(feature_data_temp);
    //feature_data_v[18].feature_name = feature_singular_v[18].feature_name ;
    //feature_data_v[18].feature_type_int = feature_singular_v[18].feature_type_int;
    //feature_data_v[18].feature_type_float = feature_singular_v[18].feature_type_float;
    //feature_data_v[18].feature_type_string = feature_singular_v[18].feature_type_string;
    //feature_data_v[18].feature_type_bool = feature_singular_v[18].feature_type_bool;
    //feature_data_v[18].feature_type_string_vector = feature_singular_v[18].feature_type_string_vector;
  
              
element  aardvark  ;
aardvark.elemt_name = "aardvark" ;
aardvark.is_positive =  false ;
//feature_data_temp.feature_space  = aardvark.feature_space
aardvark.feature_space.push_back(feature_data_v) ;
feature_singular_v.clear() ;
training_data.push_back(aardvark);


    for (int i=0;i<1;++i){
        for(int j=0;j<19;++j){
      

        
        cout<<training_data[i].feature_space[i][j].feature_name << " ";
        cout<<training_data[i].feature_space[i][j].feature_type_int << " " ;
        cout<<training_data[i].feature_space[i][j].feature_type_float  << " ";
        cout<<training_data[i].feature_space[i][j].feature_type_string  << " ";
        cout<<training_data[i].feature_space[i][j].feature_type_bool << "||";
        //cout<<training_data[i].feature_space[i][j].feature_type_string_vector << "||";      
      
      };
            
    cout<<""<<endl;
      
    };
    
   

    
}
