#include<iostream>

#include"Database.h"
#include"Student.h"


using namespace std;
void showMainMenu(int &choice)
{

	cout<<"CHOOSE ONE OF FOLLOWING MENU"<<endl;
	cout<<"1. Student Record"<<endl;
	cout<<"2. Teacher Record"<<endl;
	cout<<"3. School Record"<<endl;
	cout<<"4. Exit"<<endl;

	if (!(cin >> choice) || choice < 1 || choice > 4)
	{
		cout << "Invalid entry." << endl;
		cin.clear();
		showMainMenu(choice);
	}

}

void studentMenu(int &choice)
{
	cout<<"\nPress 1 for entering Student information"<<endl;
	cout<<"Press 2 for listing existing Student."<<endl;
	cout<<"Press 3 for exit"<<endl<<endl;
	cout<<"----------------------------------"<<endl;

	if (!(cin >> choice) || choice < 1 || choice > 3)
	{
		cout << "\n\n\t Invalid entry." << endl<<endl;
		cin.clear();

		studentMenu(choice);
	}
}

void teacherMenu(int &choice)
{
	cout<<"\nPress 1 for entering Teacher information"<<endl;
	cout<<"Press 2 for listing Teacher."<<endl;

	cout<<"Press 3 for exit"<<endl<<endl;
	cout<<"----------------------------------"<<endl;

	if (!(cin >> choice) || choice < 1 || choice > 3)
	{
		cout << "\n\n\t Invalid entry." << endl<<endl;
		cin.clear();

		teacherMenu(choice);
	}
}


void enterStudentInfo (Database& d)
{
	string name, pid, group,gender;
	int num;
	bool entry=true;
	while(entry)
	{

		cout<<"Enter name: \n";

		cin>>name;

		cout<<"Enter gender: \n ";
		cin>>gender;

		cout<<"Enter pid:  \n";
		cin>>pid;

		cout<<"Enter group:  \n";
		cin>>group;


		Student s(pid, name, gender, group );
		d.addStudent(s);

		cout<<"do you want to enter more student information press 1 for yes and 0 for false\n";
		cin>>num;
		entry=(num==1)?true:false;

	}


}



void enterTeacherInfo (Database& d)
{
	string name, pid, group,gender,position;
	int num;
	bool entry=true;
	while(entry)
	{

		cout<<"Enter Teacher name: \n";

		cin>>name;

		cout<<"Enter Teacher gender: \n ";
		cin>>gender;

		cout<<"Enter Teacher pid:  \n";
		cin>>pid;

		cout<<"Enter group:  \n";
		cin>>group;

		cout<<"Enter teacher Position:  \n";
		cin>>position;


		Teacher t(pid, name, gender, group,position );
		d.addTeacher(t);

		cout<<"do you want to enter more teacher information press 1 for yes and 0 for false\n";
		cin>>num;
		entry=(num==1)?true:false;

	}

}


int main() {
	Database d;

	cout<<"********* WELCOME TO SCHOOL ENTRY RECORD SYSTEM FOR SS COMUNITY **********"<<endl<<endl;

	int choice,studentchoice,teacherchoice;
	do
	{

		showMainMenu(choice);
		switch(choice)
		{
		case 1:
		{
			do{
				studentMenu(studentchoice);
				switch(studentchoice)
				{
				case 1:
				{
					cout<<"here comes the function to enter student info"<<endl;
					enterStudentInfo(d);

					break;
				}
				case 2:
				{
					cout<<"here comes the function to listing student info"<<endl;
					d.showStudent();
					break;
				}
				case 3:
				{
					cout<<"here comes the function to exiting to main menu"<<endl;
					studentchoice = 0;
					break;
				}

				}
			}while (studentchoice != 0);

			break;
		}
		case 2:
		{
			do{
				teacherMenu(teacherchoice);

				switch(teacherchoice)
				{
					case 1:
					{
						cout<<"here comes the function to enter TEACHER info"<<endl;
						enterTeacherInfo(d);
						break;
					}
					case 2:
					{
						cout<<"here comes the function to listing TEACHER info"<<endl;
						d.listTeacher();
						break;
					}
					case 3:
					{
						cout<<"here comes the function to exiting to MAIN MENU"<<endl;

						teacherchoice = 0;
						break;
					}
				}
			}while(teacherchoice != 0 );
			break;
		}

		case 3:
		{

			cout<<"\n\n......WORK IN PROGRESS...."<<endl<<endl;
			break;
		}

		case 4: choice = 0; break;
		}
	} while (choice != 0);






	cout<<"\n its the end \n";
	return 0;

}
