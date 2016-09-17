/*************************************************************************
    > File Name: 3.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2016年09月17日 星期六 20时39分13秒
 ************************************************************************/

#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;

class Student{
	public:
	//	Student():m_strName("小明"),m_iAge(15){}
        Student();
		Student(string _name,int _age);
		Student(const Student& stu);
		~Student();
		void setName(string _name);
		void setAge(int _age);
		int getAge();
		string getName();
	private:
		string m_strName;
		int m_iAge;
};

 Student::~Student(){}
Student::Student(const Student & stu)
{

	this->m_strName = stu.m_strName;
	this->m_iAge = stu.m_iAge;
	cout<<"Student(const Student & stu)"<<endl;
}

 Student::Student()
{
	m_strName = "1";
	m_iAge = 116;
	cout<<"Student()"<<endl;
}
Student::Student(string _name,int _age)
{
	m_strName = _name;
	m_iAge = _age;
	cout<<"Student(string _name)"<<endl;
}
void Student::setName(string _name)
{
	m_strName = _name;
}
string Student::getName()
{
	return m_strName;
}
void Student::setAge(int _age)
{
	m_iAge = _age;
}
int Student::getAge()
{
	return m_iAge;
}
int main()
{
	Student t1;
	Student t2("merry",10);
	Student t3(t1);
    cout<<t3.getName()<<" "<<t3.getAge()<<endl;
	cout<<t1.getName()<<" "<<t1.getAge()<<endl;
    cout<<t2.getName()<<" "<<t2.getAge()<<endl;	
}
