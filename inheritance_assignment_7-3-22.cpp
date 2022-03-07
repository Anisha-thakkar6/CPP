#include <iostream>
#include <string>
using namespace std;

class student{

   public:
	int roll_no;
	int name;
	void getinfo(){
		cout<<"Enter student details:"<<endl;
		scanf("%d%s",&roll_no,name);
	}

};

class test{

   public:
	int marks[5];
	void getmarks(){
	cout<<"Enter Marks of 5 subjects"<<endl;
	for(int i=0;i<5;i++) scanf("%d",&marks[i]);
	}
};
class result: public student, public test{

   public:
	int total_marks=0;
	int percentage;
    void cal(){
	for(int i=0;i<5;i++){
	total_marks+=marks[i];
	}
	percentage= (total_marks/5);
    }

};



int main(){	
result r1;
r1.getmarks();
r1.cal();
cout<<"Result of student is "<<endl<<"Total Marks: "<<r1.total_marks<<endl<<"Percentage: "<<r1.percentage;
	return 0;
}
