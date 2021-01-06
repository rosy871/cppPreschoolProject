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
		//  cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
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
	cout << "Submenu 2 of Main Menu" << endl;
	cout << "\t1) Choice 1" << endl;
	cout << "\t2) Choice 2" << endl;
	cout << "\t3) Choice 3" << endl;
	if (!(cin >> choice) || choice < 1 || choice > 3)
	{
		cout << "Invalid entry." << endl;
		cin.clear();
		// cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		teacherMenu(choice);
	}
}

void schoolMenu(int &choice)
{
	cout << "Submenu 2 of Main Menu" << endl;
	cout << "\t1) Choice 1" << endl;
	cout << "\t2) Choice 2" << endl;
	cout << "\t3) Choice 3" << endl;
	if (!(cin >> choice) || choice < 1 || choice > 3)
	{
		cout << "Invalid entry." << endl;
		cin.clear();
		// cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
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
//	studentMenu(choice);

}



//void operateStudentOption(int ch, Database& d)
//{
//	int menuChoice;
//	switch(ch)
//	{
//	case 1:
//		enterStudentInfo(d);
//
//		break;
//
//	case 2:
//		d.showStudent();
//		break;
//
//	case 3:
//		//1exit(0);
//		menuChoice=showMainMenu();
//		//				exit(0);
//		break;
//
//	default:
//		cout<<"invalid entry.. pls try again "<<endl<<endl;
//		ch=studentMenu();
//
//
//	}
//	ch=studentMenu();
//}

int main() {
	Database d;

	cout<<"********* WELCOME TO SCHOOL ENTRY RECORD SYSTEM FOR SS COMUNITY **********"<<endl<<endl;

	int choice,studentchoice;
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
			teacherMenu(choice);
			switch(choice)
			{
			case 1:
			{
				cout<<"here comes the function to enter TEACHER info"<<endl;
				break;
			}
			case 2:
			{
				cout<<"here comes the function to listing TEACHER info"<<endl;
				break;
			}
			case 3:
			{
				cout<<"here comes the function to exiting to MAIN MENU"<<endl;

				choice = 0;
				break;
			}
			}
			break;
		}

		case 3:
		{
			schoolMenu(choice);
			switch(choice)
			{
			case 1:
			{
				cout<<"here comes the function to enter SCHOOL info"<<endl;
				break;
			}
			case 2:
			{
				cout<<"here comes the function to listing SCHOOL info"<<endl;
				break;
			}
			case 3:
			{
				cout<<"here comes the function to exiting to MAIN MENU"<<endl;
				break;
			}
			}
			break;
		}

		case 4: choice = 0; break;
		}
	} while (choice != 0);






	//	menuChoice=showMenu();
	//while(menuChoice!=0){
	//	switch(menuChoice)
	//	{
	//	case 1:
	//
	//		//showStudentMenu(d);
	//		int ch;
	//		ch=studentMenu();
	//
	//
	//		while(ch!=0)
	//		{
	//			operateStudentOption(ch,d);
	//
	//		}
	//
	//		break;
	//
	//	case 2:
	//
	//		cout<<"\n\n work in progress..."<<endl<<endl;
	//
	//		break;
	//
	//	case 3:
	//		cout<<"\n\n work in progress..."<<endl<<endl;
	//
	//		break;
	//
	//	case 4:
	//		cout<<"exiting from whole project...."<<endl<<endl;
	//		exit(0);
	//
	//		break;
	//
	//	default:
	//		cout<<"invalid entry.. pls try again "<<endl<<endl<<showMenu();

//}
//}
//
cout<<"\n its end\n";
return 0;

}
