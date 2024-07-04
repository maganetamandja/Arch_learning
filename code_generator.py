import csv

filename =  "data/train_ani_bird.csv"

fields = []

rows = []

print("#include <iostream>")
print("#include <vector>")
print("using namespace std;")

print("int main(){ ")

with open(filename, mode='r', encoding='utf-8-sig') as csvfile:
    csvreader = csv.reader(csvfile)
    
    fields = next(csvreader)

    for row in csvreader:
        rows.append(row)
    row_number=csvreader.line_num
    #print("total no of row", row_number)


print("""struct feature_data {

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
        };""")


print("feature_singular feature_singular_temp ;")
print("feature_data feature_data_temp ;")
print("vector<feature_singular> feature_singular_v ;")
print("vector<feature_data> feature_data_v ;")
print("vector<element> training_data;")
print("//vector<int>::iterator ptr = feature_data_temp_v.begin() ;")

for i in range(1): #0 to 88 

    #populate the vector space
   
    
    for j in range(19): #0 to 18

        print("feature_data ",fields[j]+"_feature"," ;") #declare the feature data
        if (j==0):
            #name  the features

            print(fields[j]+"_feature.feature_name = \""+fields[j]+"\" ;")

            print("feature_data_temp.feature_name = \""+fields[j]+"\" ;")

        elif (fields[j]=='legs'):
            print(fields[j]+"_feature.feature_type_int = "+rows[i][j], ";")
            print("feature_data_temp.feature_type_int = "+rows[i][j], ";")
        elif(fields[j]=='positive_negative'):
            if(rows[i][j]=='1'):
                print(fields[j]+"_feature.feature_type_bool = true ;")
                print("feature_data_temp.feature_type_bool = true ;")
            elif(rows[i][j] == '-1'):
                print(fields[j]+"_feature.feature_type_bool = false ;")
                print("feature_data_temp.feature_type_bool = false ;")
        elif (fields[j]== 'class_type_string'):
            print(fields[j]+"_feature.feature_type_string = \""+rows[i][j]+"\" ;")
            print("feature_data_temp.feature_type_string = \""+rows[i][j]+"\" ;")
        elif((j!=0 or fields[j]!='legs' or fields[j] != 'class_type_string') and (rows[i][j]== '0' or rows[i][j]== '1')):
            if (rows[i][j] == '0'):
                print(fields[j]+"_feature.feature_type_bool = false ;")
                print("feature_data_temp.feature_type_bool = false ;")
            elif(rows[i][j]=='1'):
                print(fields[j]+"_feature.feature_type_bool = true ;")
                print("feature_data_temp.feature_type_bool = true ;")

        print("feature_singular_temp.feature_name = \""+fields[j]+"\" ;")
        if(fields[j]=='animal_name'):
            print("feature_singular_temp.feature_type_string = \""+fields[j]+"\"",";")
        elif(fields[j]=='legs'):
            print("feature_singular_temp.feature_type_int = ",rows[i][j], ";")
        elif (fields[j]== 'class_type_string'):
            print("feature_singular_temp.feature_type_string = \""+rows[i][j]+"\" ;")
        elif((j!=0 or fields[j]!='legs' or fields[j] != 'class_type_string') and (rows[i][j]== '0' or rows[i][j]== '1')):
            if (rows[i][j] == '0'):
                print("feature_singular_temp.feature_type_bool = false ;")
            elif(rows[i][j]=='1'):
                print("feature_singular_temp.feature_type_bool = true ;")

        elif(fields[j]=='positive_negative'):
            if(rows[i][j]=='1'):
                print("feature_singular_temp.feature_type_bool = true ;")
            elif(rows[i][j] == '-1'):
                print("feature_singular_temp.feature_type_bool = false ;")
        

        print("feature_singular_v.push_back(feature_singular_temp) ;")
        print(f"""
    feature_data_v.push_back(feature_data_temp);
    //feature_data_v[{j}].feature_name = feature_singular_v[{j}].feature_name ;
    //feature_data_v[{j}].feature_type_int = feature_singular_v[{j}].feature_type_int;
    //feature_data_v[{j}].feature_type_float = feature_singular_v[{j}].feature_type_float;
    //feature_data_v[{j}].feature_type_string = feature_singular_v[{j}].feature_type_string;
    //feature_data_v[{j}].feature_type_bool = feature_singular_v[{j}].feature_type_bool;
    //feature_data_v[{j}].feature_type_string_vector = feature_singular_v[{j}].feature_type_string_vector;
  
              """) 


    print("element ",rows[i][0]," ;") #instanciate element

    print(rows[i][0] + "." + "elemt_name = \""+rows[i][0]+"\" ;") #assign the name to element

    if(rows[i][18] == '1'):
        #print()
        print(rows[i][0]+".is_positive =  true ;")
    else:
        print(rows[i][0]+".is_positive =  false ;")

    
    print("//feature_data_temp.feature_space"," = "+rows[i][0]+".feature_space")
    
    print(rows[i][0]+".feature_space.push_back(feature_data_v) ;")
    print("feature_singular_v.clear() ;")
    print("training_data.push_back("+rows[i][0]+");")



print("""

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
    
   

    """)

    

print("}")    