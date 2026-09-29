#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int m1,m2,m3;
    float total,average,percentage;
    cout<<"Enter marks of subject 1:";
    cin>>m1;
    cout<<"Enter marks of subject 2:";
    cin>>m2;
    cout<<"Enter marks of subject 3:";
    cin>>m3;
    total=m1+m2+m3;
    average= total/3;
    percentage=(total/300)*100;
    cout<<endl;
    cout<<"****************"<<endl;
    cout<<"       STUDENT RECORD MANAGEMENT SYSTEM"<<endl;
    cout<<"****************"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"------------------------"<<endl;
    cout<<"Academic Summary"<<endl;
    cout<<"------------------------"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"Total marks"<<setw(7)<<":"<<total<<endl;
    cout<<"Average Marks"<<setw(5)<<":"<<average<<endl;
    cout<<"Percentage"<<setw(8)<<":"<<percentage<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"------------------------------"<<endl;
    cout<<"Academic Result"<<endl;
    cout<<"------------------------------"<<endl;
    cout<<endl;
    cout<<endl;
     if(percentage<=100 && percentage>=90)
        {
            cout<<"Result"<<setw(12)<<":"<<"PASS"<<endl;
            cout<<"Grade"<<setw(13)<<":"<<"O"<<endl;
            cout<<"Performance"<<setw(7)<<":"<<"Outstanding"<<endl;

        }
     else if
     (percentage<=89 && percentage>=80)
     {
         cout<<"Result"<<setw(12)<<":"<<"PASS"<<endl;
         cout<<"Grade"<<setw(13)<<":"<<"A+"<<endl;
         cout<<"Performance"<<setw(7)<<":"<<"Excellent"<<endl;

     }

     else if
     (percentage<=79 && percentage>=70)
     {
         cout<<"Result"<<setw(12)<<":"<<"PASS"<<endl;
         cout<<"Grade"<<setw(13)<<":"<<"A"<<endl;
         cout<<"Performance"<<setw(7)<<":"<<"Very Good"<<endl;

     }
     else if
     (percentage<=69 && percentage>=60)
     {
         cout<<"Result"<<setw(12)<<":"<<"PASS"<<endl;
         cout<<"Grade"<<setw(13)<<":"<<"B+"<<endl;
         cout<<"Performance"<<setw(7)<<":"<<"Good"<<endl;
     }
     else if
     (percentage<=59 && percentage>=50)
     {
         cout<<"Result"<<setw(12)<<":"<<"PASS"<<endl;
         cout<<"Grade"<<setw(13)<<":"<<"B"<<endl;
         cout<<"Performance"<<setw(7)<<":"<<"Satisfactory"<<endl;
     }
     else if
     (percentage<=49 && percentage>=40)
     {
         cout<<"Result"<<setw(12)<<":"<<"PASS"<<endl;
         cout<<"Grade"<<setw(13)<<":"<<"C"<<endl;
         cout<<"Performance"<<setw(7)<<":"<<"Needs Improvement"<<endl;
     }
     else if(percentage<=39 && percentage>=0)
     {
         cout<<"Grade: F"<<endl;
         cout<<"Performance : Failed"<<endl;

     }

    else
    {
        cout<<"Result : FAIL"<<endl;
        cout<<"BETTER LUCK NEXT TIME"<<endl;
    }
    return 0;
}
