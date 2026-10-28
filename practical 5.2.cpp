#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    string enrollment_no,student_name,branch;
    int semester,mobile_no;
    char add;
    do
    {
        cout<<"********************************************"<<endl;
        cout<<"STUDENT REGISTRATION"<<endl;
        cout<<"********************************************"<<endl;
        cout<<"Enter your enrollment no"<<endl;
        cin>>enrollment_no;
        cout<<"Enter your name"<<endl;
        cin>>student_name;
        cout<<"Enter your branch name"<<endl;
        cin>>branch;
        cout<<"Enter your semester"<<endl;
        cin>>semester;
        cout<<"Enter your mobile_number"<<endl;
        cin>>mobile_no;
        cout<<"********************************************"<<endl;
        cout<<"STUDENT MANAGEMENT SYSTEM"<<endl;
        cout<<"********************************************"<<endl;
        cout<<left<<setw(24)<<"system software"<<":"<<"1.1"<<endl;
        cout<<"********************************************"<<endl;
        cout<<"STUDENT REGISTRATION"<<endl;
        cout<<"********************************************"<<endl;
        cout<<left<<setw(24)<<"Enter student id"<<":"<<enrollment_no<<endl;
        cout<<left<<setw(24)<<"Enter name"<<":"<<student_name<<endl;
        cout<<left<<setw(24)<<"Enter branch"<<":"<<branch<<endl;
        cout<<left<<setw(24)<<"Enter semester"<<":"<<semester<<endl;
        cout<<left<<setw(24)<<"Enter mobile_no"<<":"<<mobile_no<<endl;
        cout<<"student registration successful !"<<endl;
        cout<<"register another student ?(Y/N)"<<endl;
        cin>>add;

    }while(add!='N');

}
