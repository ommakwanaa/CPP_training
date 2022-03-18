#include<iostream>
#include<fstream>
#include<cctype>
#include<cstring>

using namespace std;

int main(){
    ifstream file;
    file.open("text.txt");

    int E=0;
    string temp;
    if(!file){
        cout<<"File is not precent"<<endl;
    }
    else{
        while(!file.eof()) {
            file >> temp; 
            if (temp[0]=='E' || temp[0]=='e')
            {
                E++;
            } 
        }
        cout<<"number of word starting from 'E' present in file is: "<<E<<endl;
    }


    file.close();


    return 0;
}