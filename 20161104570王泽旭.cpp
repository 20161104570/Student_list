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
	cout<<"������һλѧ����������ѧ�ţ�����"<<endl; 
	head=new student;
	q=head;
	p=q;
	cin>>p->name;
	cin>>p->num;
	cin>>p->age;
	while (cout<<"�Ƿ����¼��?"<<endl<<"�ǣ�1����2��"<<endl,cin>>s,s==1)
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
	cout<<"ѧ��    ����    ����"<<endl;
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
