#include <string>
#include <iostream>
#include <vector>
#include<string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int atendance,total_score;
    float test_score;
    
    cout<<"atendance in precentage"<<endl;
    cin>>atendance;
    
    cout<<"test_score"<<endl;
    cin>>test_score;    

    cout<<"total_score"<<endl;
    cin>>total_score;
    
    
    if(atendance>=50 && test_score >= 0.70 && total_score >= 5600){
        cout<<"input = "<<atendance<<","<<test_score<<","<<total_score<<","<<endl;
        cout<<"res = 10";
    }
    else if(atendance>=50 && test_score >= 0.70 && total_score <= 5600){
        cout<<"input"<<atendance<<","<<test_score<<","<<total_score<<","<<endl;
        cout<<"res = 9";
    }
    else if(atendance<=50 && test_score <= 0.70 && total_score >= 5600){
        cout<<"input"<<atendance<<","<<test_score<<","<<total_score<<","<<endl;
        cout<<"res = 8";
    }
    else if(atendance>=50 && test_score <= 0.70 && total_score >= 5600){
        cout<<"input"<<atendance<<","<<test_score<<","<<total_score<<","<<endl;
        cout<<"res = 7";
    }
    else if(atendance>=50 || test_score >= 0.70 || total_score >= 5600){
        cout<<"input"<<atendance<<","<<test_score<<","<<total_score<<","<<endl;
        cout<<"res = 6";
    }
    else{
        cout<<"input"<<atendance<<","<<test_score<<","<<total_score<<","<<endl;
        cout<<"res = 5";        
    }
		
    return 0;
}