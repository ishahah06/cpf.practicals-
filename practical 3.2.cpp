#include<iostream>
using namespace std;
int main()
{
    int cpfMarks;
    cpfMarks = 70;
    cout<<"Statement: ++cpfMarks"<<endl;
    cout<<"Before Execution = " << cpfMarks<<endl;
    ++cpfMarks;
    cout<<"After Execution = "<<cpfMarks<<endl;
    cpfMarks=70;
    cout<<"Statement: --cpfMarks"<<endl;
    cout<<"Before Execution = " << cpfMarks<<endl;
    --cpfMarks;
    cout<<"After Execution = "<<cpfMarks<<endl;
    cpfMarks=70;
    cout<<"Statement: cpfMarks++"<<endl;
    cout<<"Before Execution = " << cpfMarks<<endl;
    cpfMarks++;
    cout<<"After Execution = "<<cpfMarks<<endl;
    cpfMarks=70;
    cout<<"Statement: cpfMarks--"<<endl;
    cout<<"Before Execution = " << cpfMarks<<endl;
    cpfMarks--;
    cout<<"After Execution = "<<cpfMarks<<endl;
    return 0;
}
