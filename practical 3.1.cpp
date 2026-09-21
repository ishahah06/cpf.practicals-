#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    string eno,branch,name,mobileno;
    int sem;
    float maths,physics,cpf,total,avg,per;
    cout<<"-----------------------------------------------------\n";
    cout<<left<<setw(10)<<""<<"STUDENT RECORD MANAGEMENT SYSTEM"<<right<<setw(10)<<"";
    cout<<"\n-----------------------------------------------------\n";
    cout<<"Software version : 1.2\n";
    cout<<"Institute: Charusat\n";
    cout<<"Academic Year: 2026-27\n";
    cout<<"-----------------------------------------\n";
    cout<<left<<setw(10)<<""<<"STUDENT REGISTRATION"<<right<<setw(10)<<"";
    cout<<"\n-----------------------------------------\n";
    cout<<"Enter enrollment number: ";
    cin>>eno;
    cout<<"Enter name of the student: ";
    cin>>name;
    cout<<"Enter Branch:";
    cin>>branch;
    cout<<"Enter Mobile number:";
    cin>>mobileno;
    cout<<"Enter Semester: ";
    cin>>sem;
    cout<<"---------------------------------------------------------\n";
    cout<<left<<setw(10)<<""<<"ACEDEMIC INFORMATION"<<right<<setw(10)<<"";
    cout<<"\n---------------------------------------------------------\n";
    cout<<"\nEnter mathematics marks: ";
    cin>>maths;
    cout<<"\nEnter physics marks: ";
    cin>>physics;
    cout<<"\nEnter CPF marks: ";
    cin>>cpf;

    cout<<"-------------------------------------------------------------------------\n";
    cout<<left<<setw(10)<<""<<"ACEDEMIC SUMMARY"<<right<<setw(10)<<"";
    cout<<"\n-------------------------------------------------------------------------\n";
    total=(maths+physics+cpf);
    avg=(maths+physics+cpf)/3;
    per=avg;
    cout<<"\nTOTAL MARKS: "<<total;
    cout<<"\nAVERAGE MARKS: "<<avg;
    cout<<"\nPERCENTAGE: "<<per<<endl;
    cout<<"------------------------------------------------------------------\n";
    cout<<left<<setw(10)<<""<<"STUDENT INFORMATION"<<right<<setw(10)<<"";
    cout<<"\n--------------------------------------------------------------------\n";
    cout<<"\nENROLLMENT NUMBER: "<<eno;
    cout<<"\nNAME OF THE STUDENT: "<<name;
    cout<<"\nBRANCH: "<<branch;
    cout<<"\nMOBILE NUMBER: "<<mobileno;
    cout<<"\nSEMESTER: "<<sem <<endl;




    return 0;
}

