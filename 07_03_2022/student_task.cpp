// student data and test result using inheritance

#include<iostream>

using namespace std;

class Student{
    public:
        int roll_no;
        string name;
        // Student(int roll, string n){
        //     roll_no = roll;
        //     name = n;
        // }
        // Student(){cout<<"";}
        void studentinfo(){
            cout<<"student name: "<<name<<endl<<"roll number: "<<roll_no<<endl;
        }
};

class Test{
    public:
        int subject_marks[5];
        // Test(){
        //     cout<<"";
        // }
        void display(){
            for (int i = 0; i < 5; i++){
                cout<<subject_marks[i]<<"\t";

            }
        }
};

class Resulttt : public Student, public Test{
    int total, percentage;
    public:
    // Resulttt(){}
    void totalmarks(){
        for (int i = 0; i < sizeof(subject_marks)/sizeof(int); i++){
            total+=subject_marks[i];
        }
        cout<<"total is : "<<total<<endl;
    }

    void precent(){
        percentage = (total*100)/500;
        cout<<"Percentage: "<<percentage<<endl;}
        
};

int main(){
    Student student1;
    Test marks;
    Resulttt pm;
    int mar[5];
    cout<<"Name:";
	cin>>pm.name;
	cout<<"Enter your name:";
	cin>>pm.roll_no;
	cout<<"Enter marks from 100\n";
    
    for (int i = 0; i < 5; i++)
    {
        cout<<i+1<<" marks ";
        cin>>mar[i];
    }
    for (int i = 0; i < 5; i++)
    {
        pm.subject_marks[i]=mar[i];
    }
    pm.studentinfo();
    pm.display();
    pm.totalmarks();
    pm.precent();

    return 0;
}