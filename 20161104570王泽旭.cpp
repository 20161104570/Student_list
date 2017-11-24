#include<iostream>
using namespace std;
struct student
{
	char name[10];
	char num[12];
	int age;
	struct student *next;
};
int main()
{
	struct student *p,*q,*head;
	int s=1;
	cout<<"请输入一位学生的姓名，学号，年龄"<<endl; 
	head=new student;
	q=head;
	p=q;
	cin>>p->name;
	cin>>p->num;
	cin>>p->age;
	while (cout<<"是否继续录入?"<<endl<<"是（1）否（2）"<<endl,cin>>s,s==1)
	{
		p=new student;
		q->next=p;
		q=p;
		cin>>p->name;
		cin>>p->num;
		cin>>p->age;
		p->next=NULL;
	}
	p=head;
	cout<<"学号    姓名    年龄"<<endl;
	while(p!=NULL)
	{
		cout<<p->num<<"    "<<p->name<<"    "<<p->age<<endl;
		p=p->next;
	}
	p=head;
	do
	{
		q=p->next;
		delete p;
		p=q;
	}
	while(q);
	
	return 0;
}
