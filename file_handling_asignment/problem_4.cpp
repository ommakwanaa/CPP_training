#include<iostream>
#include<fstream>
#include<cctype>
#include<cstring>

using namespace std;

int main(){
    ifstream file;
    file.open("text.txt");

    int S=0;
    string temp;
    if(!file){
        cout<<"File is not precent"<<endl;
    }
    else{
        while(!file.eof()) {
            file >> temp; 
            if (temp[temp.length()-1]=='S' || temp[temp.length()-1]=='s')
            {
                //cout<<".. "<<temp<<".. "<<S<<endl;
                S++;
            } 
        }
        cout<<"number of word ends with 'S' present in file is: "<<S<<endl;
    }


    file.close();


    return 0;
}