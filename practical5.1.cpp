#include <iostream>
#include <iomanip>
using namespace std;

int n,i, marks, total, per;
float Average;

int main()
{
    cout << "******************************************\n";
    cout << right << setw(10) << "Student record management system" << endl;
    cout << "******************************************\n";

    cout << "\nEnter Number of Subjects : ";
    cin >> n;
    cout << endl;

    for(i=1;i<=n;i++)
    {
    cout<< "Enter Marks of subject "<< i << ": ";
    cin >> marks;

    total = total + marks;
    }

    cout << "\n------------------------------------------" << endl;
    cout << right << setw(23) << "Academic Result" << endl;
    cout << "------------------------------------------\n" << endl;

    Average = total / n;
    per = (total / n);

    cout << left << setw(20) << "Total Marks"    << ": " << total << endl;
    cout << left << setw(20) << "Average Marks"  << ": " << Average << endl;
    cout << left << setw(20) << "per"     << ": " <<per<< "%" << endl;
    cout<<endl;
    cout<<endl;
    if(per<=100 && per>=90)
        {
            cout<<"Result"<<setw(12)<<":"<<"PASS"<<endl;
            cout<<"Grade"<<setw(13)<<":"<<"O"<<endl;
            cout<<"Performance"<<setw(7)<<":"<<"Outstanding"<<endl;

        }
     else if
     (per<=89 && per>=80)
     {
         cout<<"Result"<<setw(12)<<":"<<"PASS"<<endl;
         cout<<"Grade"<<setw(13)<<":"<<"A+"<<endl;
         cout<<"Performance"<<setw(7)<<":"<<"Excellent"<<endl;

     }

     else if
     (per<=79 && per>=70)
     {
         cout<<"Result"<<setw(12)<<":"<<"PASS"<<endl;
         cout<<"Grade"<<setw(13)<<":"<<"A"<<endl;
         cout<<"Performance"<<setw(7)<<":"<<"Very Good"<<endl;

     }
     else if
     (per<=69 && per>=60)
     {
         cout<<"Result"<<setw(12)<<":"<<"PASS"<<endl;
         cout<<"Grade"<<setw(13)<<":"<<"B+"<<endl;
         cout<<"Performance"<<setw(7)<<":"<<"Good"<<endl;
     }
     else if
     (per<=59 && per>=50)
     {
         cout<<"Result"<<setw(12)<<":"<<"PASS"<<endl;
         cout<<"Grade"<<setw(13)<<":"<<"B"<<endl;
         cout<<"Performance"<<setw(7)<<":"<<"Satisfactory"<<endl;
     }
     else if
     (per<=49 && per>=40)
     {
         cout<<"Result"<<setw(12)<<":"<<"PASS"<<endl;
         cout<<"Grade"<<setw(13)<<":"<<"C"<<endl;
         cout<<"Performance"<<setw(7)<<":"<<"Needs Improvement"<<endl;
     }
     else if(per<=39 && per>=0)
     {
         cout<<"Grade: F"<<endl;
         cout<<"Performance : Failed"<<endl;

     }

    else
    {
        cout<<"Result : FAIL"<<endl;
    }
    return 0;
}
