#include<iostream>
#include<string>
using namespace std;
int main()
{
string eno,name,branch,mno,sem;
int ch=1;
float m,p,c,total,avg,per;

cout<<"========================================================================\n";
cout<<"***** STUDENT RECORD MANAGEMENT SYSTEM *****\n";
cout<<"========================================================================\n";

cout<<"Software version: 1.1\n";
cout<<"Institute: Charusat\n";
cout<<"Acedemic Year: 2026-27\n";

cout<<"-------------------------MAIN MENU------------------------------------\n";

cout<<"1. Register New Student\n";
m:cout<<"2. Display student record\n";
cout<<"3. Enter student marks\n";
cout<<"4. Display academic result\n";
cout<<"Enter you choice:";
cin>>ch;
switch(ch)
{
    case 1:
        cout<<"------------------------------------------------------------------\n";
        cout<<"STUDENT REGISTRATION\n";
        cout<<"------------------------------------------------------------------\n";

        cout<<"\nEnter enrollment number: ";
        getline(cin,eno);

        cout<<"\nEnter name of the student: ";
        getline(cin,name);

        cout<<"\nEnter Branch:";
        getline(cin,branch);

        cout<<"\nEnter Mobile number:";
        getline(cin,mno);

        cout<<"\nEnter Semester: ";
        getline(cin,sem);
        goto m;

    break;
    case 2:
        cout<<"\n------------------------------------------------------------------\n";
        cout<<"\nSTUDENT RECORD\n";
        cout<<"\n------------------------------------------------------------------\n";

        cout<<"\nENROLLMENT NUMBER: "<<eno;
        cout<<"\nNAME OF THE STUDENT: "<<name;
        cout<<"\nBRANCH: "<<branch;
        cout<<"\nMOBILE NUMBER: "<<mno;
        cout<<"\nSEMESTER: "<<sem<<endl;
        goto m;

    break;
    case 3:
        cout<<" \n-------------------------------------------------------------------------\n";
        cout<<"\nENTER STUDENT MARKS\n";
        cout<<"\n-------------------------------------------------------------------------\n";

        cout<<"\nEnter mathematics marks: ";
        cin>>m;
        cout<<"\nEnter physics marks: ";
        cin>>p;
        cout<<"\nEnter CPF marks: ";
        cin>>c;
        goto m;

    break;
    case 4:
        cout<<"\n-------------------------------------------------------------------------\n";
        cout<<"\nACEDEMIC RESULT\n";
        cout<<"\n-------------------------------------------------------------------------\n";

        total=(m+p+c);
        avg=(m+p+c)/3;
        per=avg;
        cout<<"\nTOTAL MARKS: "<<total;
        cout<<"\nAVERAGE MARKS: "<<avg;
        cout<<"\nPERCENTAGE: "<<per;

        if(per>0 && per<100)
        {
           if(per>=33)
           {
            cout<<"\nRESULT: PASS\n";
            cout<<"\nCongratulations! You have successfully passed.\n";
           }
           else
           {
              cout<<"\nFAIL\n";
           }
        }
        else
        {
            cout<<"\nInvalid marks entered\n";
        }

        if(per>=90 && per<=100)
        {
            cout<<"GRADE: O\n";
            cout<<"PERFORMANCE: OUTSTANDING";

        }
        else if(per>=80 && per<=89)
        {
            cout<<"GRADE: A+\n";
            cout<<"PERFORMANCE: EXCELLENT";

        }
        else if(per>=70 && per<=79)
        {
            cout<<"GRADE: A\n";
            cout<<"PERFORMANCE: VERY GOOD";
        }
        else if(per>=60 && per<=69)
        {
            cout<<"GRADE: B+\n";
            cout<<"PERFORMANCE: GOOD";
        }
        else if(per>=50 && per<59)
        {
            cout<<"GRADE:B\n";
            cout<<"PERFORMANCE: SATISFACTORY";
        }
        else if(per>=40 && per<=49)
        {
            cout<<"GRADE: C\n";
            cout<<"PERFORMANCE: NEEDS IMPROVEMENT";

        }
        else if(per>=0 && per<40)
        {
            cout<<"GRADE: F\n";
            cout<<"PERFORMANCE: FAILED";
        }
        else
        {
            cout<<"invalid";
        }
        return 0;
        break;

}
}

