#include<iostream>
#include<fstream>
#include<cctype>
#include<cstring>

using namespace std;

int main(){
    ifstream file;
    file.open("text.txt");

    int A=0;
    string temp;
    if(!file){
        cout<<"File is not precent"<<endl;
    }
    else{
        while(!file.eof()) {
            file >> temp; 
            for (int i = 0; i < temp.length(); i++)
            {
                if (temp[i]=='a' || temp[i]=='A')
                {
                    // cout<<i<<".. "<<temp<<".. "<<A<<endl;
                    A++;
                    break;
                } 
            }    
        }
        cout<<"number of word 'A' present in A file is: "<<A<<endl;
    }


    file.close();


    return 0;
}