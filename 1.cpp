/*************************************************************************
    > File Name: 1.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2016年09月17日 星期六 16时39分16秒
 ************************************************************************/

#include<iostream>
#include<stdlib.h>
#include<string>

using namespace std;
class Teacher
{
	public:
		Teacher(string name = "jim",int age =1,int m=100);
		void setName(string name);
		string getName();
		void setAge(int age);
		int getAge();
		void setMax(int m);
		int getMax();
	private:
		string m_strName;
		int m_iAge;
		const int m_iMax;

};
Teacher::Teacher(string name,int age,int m):m_strName(name),m_iAge(age),m_iMax(m)
{
//	m_strName =name;
//	m_iAge =age;
    cout <<"Teacher(string name,int age)"<<endl;
}
void Teacher::setName(string name)
{
	m_strName = name;
}
string Teacher::getName()
{
	return m_strName;
}

void Teacher::setAge(int age)
{
	m_iAge = age;
}
int Teacher::getAge()
{
	return m_iAge;
}
int Teacher::getMax()
{
	return m_iMax;
}
int main(void)
{
	Teacher t1("Merry",12,150);
	cout<<t1.getName()<<" "<<t1.getAge()<<" "<<t1.getMax()<<endl;
	return 0;
}
