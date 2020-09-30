
#include<iostream>
using namespace std;
class Course
{
    int number;
    float cgpa;
    float credits;




public:
    void set(int number,float cgpa, float credits)
    {
        this->number=number;
        this->cgpa=cgpa;
        this->credits=credits;

    }
};
class student


    {
    Course course[3];
public:
    float cgpa;
    int student_id;
    float credits;
    int merit_position;
    void input()
    {

       cout<<" \n Enter the student ID:";
       cin>>student_id;
       float total_credits=0;
       float total_cgpa=0;
       for(int i=0;i<3;i++)
       {
          cout<<" \n Enter the number are cgpa and  credit  :"<<endl;
           cin>>cgpa>>credits;
           total_credits=total_credits+credits;
           total_cgpa=total_credits+(cgpa*credits);
           course[i].set(i+1,cgpa,credits);

       }
        cgpa=(total_cgpa/total_credits);

    }

    void output()
    {
        cout<<"student id:"<<student_id<<endl;
        cout<<"cgpa:"<<cgpa<<endl;
        cout<<"Merit:"<<merit_position<<endl;

    }
};
void set_merit(student student[],int N)
{
    for(int i=0;i<N;i++)
    {
        int merit=0;
        for(int j=0;j<N;j++)
        {
            if(student[i].cgpa<student[j].cgpa)
            merit++;
        }
            student[i].merit_position=merit+1;


    }
}
int main()
{

    cout<<"Enter the number of student:";
    int Number_of_student;
    cin>>Number_of_student;
    student studen[Number_of_student];
    for(int i=0;i<Number_of_student;i++)
    {
        studen[i].input();

    }
    set_merit(studen,Number_of_student);
    for(int i=0;i<Number_of_student;i++){
        studen[i].output();

    }
    return 0;
}
