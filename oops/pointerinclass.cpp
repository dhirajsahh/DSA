#include<iostream>
using namespace std;

class Student {
    public:
    string name;
    int rollno;
    float marks;
    Student(string name,int rollno,float marks){
        (*this).name=name;
        this->rollno=rollno;
        this->marks=marks;
    }
};
void change(Student* s){
    //(*s).name="Rahul";
    s->name="Dhiraj";
}
int main(){
    Student *s=new Student("dhiraj",11,73.6);
   cout<<s->name<<endl;
   //change(s)pass by value by default
   change(s);
   cout<<(*s).name<<endl;
   Student *s1=s;
   s1->name="Rahul";
   cout<<s->name<<endl;

   

}
