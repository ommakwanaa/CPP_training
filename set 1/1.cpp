#include <string>
#include <iostream>
#include <vector>
#include <algorithm> //added in order to use count and sort
using namespace std;

int main()
{
    string str1;
    vector<string> list1;
    vector<string> list2;
    vector<string> list3;
    cout<<"\nEnter first list with 5 element's"<<endl;
    for(int i=0;i<5;i++){
        cin >> str1;
        list1.push_back(str1);  
    }
    cout<<"\nEnter second list with 5 element's"<<endl;
    for(int i=0;i<5;i++){
        cin >> str1;
        list2.push_back(str1);  
    }
    
    cout<<"\nshowing first list with 5 element's"<<endl;
	for (auto i = list1.begin(); i != list1.end(); ++i){
		cout << *i << " ";}

    cout<<endl;

    cout<<"\nshowing second list with 5 element's"<<endl;
	for (auto i = list2.begin(); i != list2.end(); ++i){
		cout << *i << " ";}
	cout<<endl;

    // adding 1st vector to list3
    for (auto i = list1.begin(); i != list1.end(); ++i){
        list3.push_back(*i);
    }

    // check if list2 elements are not in list3 then only add it to list3
    for (auto j = list2.begin(); j != list2.end(); ++j){
        if(!count(list3.begin(), list3.end(), *j)){
            list3.push_back(*j);
        }
    }

    sort(list3.begin(), list3.end()); //sort the final union vector
    
    cout<<"\nfinal merge vector without duplicate is"<<endl;
	for (auto i = list3.begin(); i != list3.end(); ++i){
		cout << *i << " ";
    }

// 		Virendra sachin saurav rahul laxman
//      harbajan ashish rahul yuvraj saurav 		
    return 0;
}