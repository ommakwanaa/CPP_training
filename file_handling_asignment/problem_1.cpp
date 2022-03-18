#include<iostream>
#include<fstream>
#include<cctype>
#include<cstring>

using namespace std;

int main(){
    ifstream file;
    file.open("text.txt");

    int the=0;
    string temp;
    if(!file){
        cout<<"cannot open the file"<<endl;
    }
    else{
        while(!file.eof()) {
            file >> temp; 
            if(temp=="the" || temp=="The" ){
                the++;
            }
            
        }
        cout<<"number of word 'the' present in the file is: "<<the<<endl;
    }


    file.close();


    return 0;
}