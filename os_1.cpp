#include<iostream>
#include<conio.h>
using namespace std;
struct Student
{
	int  ass_pen;
	int  ass_paper;
	int  ass_question_paper;
	int  ass_all_ass;
}s1,s2,s3;
void student_1()
{
	s1.ass_all_ass=1;
	s1.ass_paper=1;
	s1.ass_question_paper=1;
	cout<<"Student Process One Completed the assignment"<<endl;
}	
void student_2()
{
	s2.ass_all_ass=1;
	s2.ass_pen=1;
	s2.ass_question_paper=1;
	cout<<"Student Process Two Completed the assignment"<<endl;
}
void student_3()
{
	s3.ass_all_ass=1;
	s3.ass_pen=1;
	s3.ass_paper=1;
	cout<<"Student Process Three Completed the assignment"<<endl;
}
int main()
{
	s1.ass_all_ass=0;s1.ass_paper=0;s1.ass_pen=0;s1.ass_question_paper=0;	
	s2.ass_all_ass=0;s2.ass_paper=0;s2.ass_pen=0;s2.ass_question_paper=0;
	s3.ass_all_ass=0;s3.ass_paper=0;s3.ass_pen=0;s3.ass_question_paper=0;			
	do
	{
		int x,y;
		cout<<"Resources Menu: \n\t\tPress '1' for pen\n\t\tPress '2' for paper \n\t\tPress '3' for question_paper \n"<<endl;	
		cout << "Enter the first choice : ";
		cin >> x;
		cout << "Enter the second choice : ";
		cin >> y;
		
		{
			char items[][20] = {"Pen", "Paper", "Question Paper"};
			cout << "You have selected : " << items[x-1] <<" and " << items[y -1] << "\n";
		}
		cout << "\n";
		if(x==1 && y==2  && s3.ass_all_ass==0)
		{
			student_3();
		}
		if(x==2 && y==1  && s3.ass_all_ass==0)
		{
			student_3();
		}
		if(x==2 && y==3  && s1.ass_all_ass==0)
		{
			student_1();
		}
		if(x==3 && y==2  && s1.ass_all_ass==0)
		{
			student_1();
		}
		if(x==1 && y==3 && s2.ass_all_ass==0)
		{
			student_2();
		}
		if(x==3 && y==1 && s2.ass_all_ass==0)
		{
			student_2();
		}
	}
	while(s1.ass_all_ass==0||s2.ass_all_ass==0||s3.ass_all_ass==0);
	cout<<"All Student Processes Completed";
	getch();
}

