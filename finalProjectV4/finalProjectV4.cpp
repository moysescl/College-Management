//Course Number: 420-P16-AS
//Course Title: Structured Programming
//Final Project
//Session: Autumn 2017
//Group: 7148

#include<iostream>
#include<string>
#include<conio.h>
#include<windows.h>
#include<stdio.h>
#define NUM_TEACHER 2
#define NUM_STUDENT 5
#define NUM_COURSE 4

using namespace std;

void welcome()
{
	cout << "\n\n\t\tCourse Number: 420-P16-AS Course\n\t\tTitle: Structured Programming\n\t\tFinal Project Session: Autumn 2017\n\t\tGroup: 7148\n\n\t\tStudent Number: 201731223\n\t\tName: Moyses Campos Moreira Lima"<<endl;
	cout << "\n\n\n\n\n\n\n\n\n\n\tPress any key to start the aplication...";
	system("pause>>null");
}
//=====================================================================
//Teacher login
void userlogin()
{
	int user;
	//string user2;
	//int aux = 0;
	int count = 0, ch;
	//int count2 = 0, ch2;
	string passwd = "";
	//string passwd2 = "";
	cout << "\n\t\t\t\t\t\t   >>> WELCOME <<<" << endl;
	cout << "\n\t\t\t\t\t\t>>> Please Login <<<" << endl;
	//cout << "\n\n\t\t\t\t\t    Are you Teacher or Student" << endl;
	//cout << "\n\n\n\t1. Teacher" << endl;
	//cout << "\n\t2. Student" << endl;
	//cout << "\n\n\n\t\tChoice: ";
	//cin >> aux;
	//if (aux == 1)
	//{
	//	goto wrong;
	//}
	//else if (aux == 2)
	//{
	//	goto wrong3;
	//}
wrong: //if wrong, return here
wrong2:
	system("cls");
	cout << "\n\t\t\t\t\t\t>>> WELCOME TEACHER <<<" << endl;
	cout << "\n\t\t\t\t\t\t >>> Please Login <<<" << endl;
	cout << "\n\t User Name: ";
	cin >> user;
	cout << "\n\t Password: ";
	while (ch = _getch())// assign value to ch
	{
		if (ch == 13) //check ch after press Return Key
		{
			if ((passwd == "quanghoang") && (user == 5257))
			{
				cout << endl << endl << "\t===================================================================================================" << endl;
				cout << "\t\t\t\t\t\tLogin Successfully!" << endl;
				cout << "\n\n\n\n\n\n\n\t\tPress any key to continue...";
				system("pause>>null");
				break;
			}
			system("cls");
			cout << "\n\t\t\t\tWrong User Name or Password, try to input again!\n\n";
			passwd = "";
			count += 1;
			if (count == 4)
			{
				system("cls");
				cout << "\n\tWARNING!!";
				cout << "\n\n\t\tYou have entered 4 times a wrong login, the system will shutdown if enter wrong again.\n\n" << endl;
				cout << "Press any key to continue...";
					system("pause>>null");
				goto wrong2;

				//system("shutdown -s -t 05");//this will shutdown the pc;
			}
			if (count == 5)
			{
				system("cls");
				cout << "\n\t\t\tYou have entered wrong 5 times, the system will shutdown";
				cout << " in  5 seconds...good bye!";
				system("shutdown -s -t 05");//this will shutdown the pc;
			}
			goto wrong;
		}
		else if (ch == 8) //check ch after press Backspace key
		{
			if (passwd.length() > 0) //condition blocking error while input
			{
				cout << "\b \b";//remove mask * on screen
				passwd.erase(passwd.length() - 1);//erase string length
			}
		}
		else
		{
			cout << "*";
			passwd += ch; //input paswword was assigned to variable passwd
		}
	}
//	//=============================================================
//	//=============================================================
//	//Login Studant
//wrong3:
//	wrong4:
//	system("cls");
//	cout << "\n\t\t\t\t\t\t>>> WELCOME STUDENT <<<" << endl;
//	cout << "\n\t\t\t\t\t\t >>> Please Login <<<" << endl;
//	cout << "\n\n\t User Name: ";
//	cin >> user2;
//	cout << "\n\t Password: ";
//	while (ch2 = _getch())// assign value to ch2
//	{
//		if (ch2 == 13) //check ch after press Return Key
//		{
//			for (int i = 0; i < arrayStudent[i].studentId; i++)
//			{
//
//			}
//			/*if ((passwd2 == arrayStudent[NUM_STUDENT].password) && (user2 == arrayStudent[NUM_STUDENT].studentId))
//			{
//				cout << endl << endl << "\t===================================================================================================" << endl;
//				cout << "\t\t\t\t\t\tLogin Successfully!" << endl;
//				cout << "\n\n\n\n\n\n\n\t\tPress any key to continue...";
//				system("pause>>null");
//				break;
//			}*/
//			system("cls");
//			cout << "\n\t\t\t\tWrong User Name or Password, try to input again!\n\n";
//			passwd2 = "";
//			count2 += 1;
//			if (count2 == 4)
//			{
//				system("cls");
//				cout << "\n\tWARNING!!";
//				cout << "\n\n\t\tYou have entered 4 times a wrong login, the system will shutdown if enter wrong again.\n\n" << endl;
//				goto wrong3;
//
//				//system("shutdown -s -t 05");//this will shutdown the pc;
//			}
//			if (count2 == 5)
//			{
//				system("cls");
//				cout << "\n\t\t\tYou have entered wrong 5 times, the system will shutdown";
//				cout << " in  5 seconds...good bye!";
//				system("shutdown -s -t 05");//this will shutdown the pc;
//			}
//			goto wrong4;
//		}
//		else if (ch2 == 8) //check ch after press Backspace key
//		{
//			if (passwd2.length() > 0) //condition blocking error while input
//			{
//				cout << "\b \b";//remove mask * on screen
//				passwd2.erase(passwd2.length() - 1);//erase string length
//			}
//		}
//		else
//		{
//			cout << "*";
//			passwd2 += ch2; //input paswword was assigned to variable passwd
//		}
//	}
//

};
struct Course
{
	string courseNumber;
	string courseTitle;
	int group;

};
struct Teacher
{
	int teacherId; // also for username
	string firstName;
	string lastName;
	int password;
	Course course;


};


struct Student
{
	string studentId;  // also for username
	int project;
	int midterm;
	int finalExame;
	int finalResult;
	string firstName;
	string lastName;
	string password;
	Course course;

};


Course arrayCourse[NUM_COURSE];
Course arrayCourse2[NUM_COURSE];
Course arrayCourse3[NUM_COURSE];
Course arrayCourse4[NUM_COURSE];
Teacher arrayTeacher[NUM_TEACHER];
Student arrayStudent[NUM_STUDENT];
Student arrayStudent2[NUM_STUDENT];
Student arrayStudent3[NUM_STUDENT];
Student arrayStudent4[NUM_STUDENT];
char ans = 'N';


void mainScreen()
{
	/*arrayStudent[0].studentId = 1234567,
	arrayStudent[1].studentId = 3456788;
	arrayStudent[2].studentId = 7654321;
	arrayStudent[3].studentId = 2323231;
	arrayStudent[4].studentId = 1314325;
	arrayStudent[0].firstName = "Mary";
	arrayStudent[1].firstName = "Peter";
	arrayStudent[2].firstName = "Andrew";
	arrayStudent[3].firstName = "Stephan";
	arrayStudent[4].firstName = "Paul";
	arrayStudent[0].lastName = "Brown";
	arrayStudent[1].lastName = "Smith";
	arrayStudent[2].lastName = "Johnson";
	arrayStudent[3].lastName = "Martin";
	arrayStudent[4].lastName = "Carter";
	arrayStudent[0].password = 2525;
	arrayStudent[1].password = 2525;
	arrayStudent[2].password = 2525;
	arrayStudent[3].password = 2525;
	arrayStudent[4].password = 2525;*/
	arrayTeacher[0].teacherId = 5257;
	arrayTeacher[1].teacherId = 1010;
	arrayTeacher[0].firstName = "Quang";
	arrayTeacher[1].firstName = "Willian";
	arrayTeacher[0].lastName = "Cao";
	arrayTeacher[1].lastName = "Morin";
	arrayCourse[0].courseNumber = "420-P16-AS";
	arrayCourse[0].courseTitle = "Structured Programming      ";
	arrayCourse[0].group = 7148;
	arrayCourse[1].courseNumber = "420-P34-AS";
	arrayCourse[1].courseTitle = "Advanced Object Programming ";
	arrayCourse[1].group = 7258;
	arrayCourse[2].courseNumber = "420-P34-AS";
	arrayCourse[2].courseTitle = "Event Programming           ";
	arrayCourse[2].group = 7262;
	arrayCourse[3].courseNumber = "420-P55-AS";
	arrayCourse[3].courseTitle = "Internet Programming I      ";
	arrayCourse[3].group = 7156;
	int numStudent = 0;
	int numStudent2 = 0;
	int numStudent3 = 0;
	int numStudent4 = 0;

	do {
		system("cls");
		cout << "\n\n\n\t\t\t\t\t\tSTUDENT MANAGEMENT SYSTEM";


		cout << "\n\n\t1. List all the courses you are teaching";
		cout << "\n\n\t2. Enter students grades for a given course";
		cout << "\n\n\t3. Search a student’s grades by Student ID/First Name/Last Name/First Name and Last Name";
		cout << "\n\n\t4. Sort the student list by Student ID";
		cout << "\n\n\t5. List all the students grades for a given course";
		cout << "\n\n\t6. Quit the application";
		cout << "\n\n\n\tEnter your choice: ";
		int choice = 0;
		//int choice2 = 0;
		cin >> choice;
		bool found = false;
		string searchId;


		switch (choice)
		{
		case 1:system("cls");
			cout << "\n\t1. You are teaching... ";
			cout << "\n\n\n\tCourse Number" << "\t\t\t\t" << "Course Title" << "\t\t\t" << "\tGroup" << endl;
			cout << "\t=============" << "\t\t\t===========================" << "\t\t\t=====";
			for (int i = 0; i < NUM_COURSE; i++)
			{
				cout << "\n\n\t " << arrayCourse[i].courseNumber << "\t\t\t" << arrayCourse[i].courseTitle;
				cout << "\t\t\t" << arrayCourse[i].group;
			}
			cout << "\n\n\n\n\n\n\n\n\tPress any key to go back to Main Menu...";
			system("pause>>null");
			break;
		case 2:system("cls");
			cout << "\n\n\t2. Enter students' grades for a given course\n\n";
			cout << "\n\tPlease, select the course:\n";
			cout << "\n\t1. 420-P16-AS\t\tStructured Programming" << endl << "\n\t2. 420-P34-AS\t\tAdvanced Object Programming" << endl << "\n\t3. 420-P34-AS\t\tEvent Programming" << endl << "\n\t4. 420-P55-AS\t\tInternet Programming I" << endl << "\n\t\tChoice: ";
			choice = 0;
			cin >> choice;

			switch (choice)
			{
			case 1: system("cls");
				choice = 0;
				cout << "\n\t1. 420-P16-AS" << "\t\t\t\t" << "Structured Programming" << endl;
				cout << "\n\n\n\tHow many students whould you like to enroll: ";
				cin >> numStudent;
				cout << "\n\n";
				for (int i = 0; i < numStudent; i++)
				{
					cout << "\tStutend ID: ";
					cin >> arrayStudent[i].studentId;
					cout << "\tFirst Name: ";
					cin >> arrayStudent[i].firstName;
					cout << "\tLast Name: ";
					cin >> arrayStudent[i].lastName;
					cout << "\n";
					cout << "\tProject Grade: ";
					cin >> arrayStudent[i].project;
					cout << "\tMidterm Grade: ";
					cin >> arrayStudent[i].midterm;
					cout << "\tFinal Exam Grade: ";
					cin >> arrayStudent[i].finalExame;
					cout << "\tSet a student password: ";
					cin >> arrayStudent[i].password;
					cout << "\n\n";

				}
				break;
			case 2:system("cls");
				choice = 0;
				cout << "\n\t1. 420-P34-AS" << "\t\t\t\t" << "Advanced Object Programming" << endl;
				cout << "\n\n\n\tHow many students whould you like to enroll: ";
				cin >> numStudent2;
				cout << "\n\n";
				for (int i = 0; i < numStudent2; i++)
				{
					cout << "\tStutend ID: ";
					cin >> arrayStudent2[i].studentId;
					cout << "\tFirst Name: ";
					cin >> arrayStudent2[i].firstName;
					cout << "\tLast Name: ";
					cin >> arrayStudent2[i].lastName;
					cout << "\n";
					cout << "\tProject Grade: ";
					cin >> arrayStudent2[i].project;
					cout << "\tMidterm Grade: ";
					cin >> arrayStudent2[i].midterm;
					cout << "\tFinal Exam Grade: ";
					cin >> arrayStudent2[i].finalExame;
					cout << "\tSet a student password: ";
					cin >> arrayStudent2[i].password;
					cout << "\n\n";
				}
				break;
			case 3:system("cls");
				choice = 0;
				cout << "\n\t1. 420-P34-AS" << "\t\t\t\t" << "Event Programming" << endl;
				cout << "\n\n\n\tHow many students whould you like to enroll: ";
				cin >> numStudent3;
				cout << "\n\n";
				for (int i = 0; i < numStudent3; i++)
				{
					cout << "\tStutend ID: ";
					cin >> arrayStudent3[i].studentId;
					cout << "\tFirst Name: ";
					cin >> arrayStudent3[i].firstName;
					cout << "\tLast Name: ";
					cin >> arrayStudent3[i].lastName;
					cout << "\n";
					cout << "\tProject Grade: ";
					cin >> arrayStudent3[i].project;
					cout << "\tMidterm Grade: ";
					cin >> arrayStudent3[i].midterm;
					cout << "\tFinal Exam Grade: ";
					cin >> arrayStudent3[i].finalExame;
					cout << "\tSet a student password: ";
					cin >> arrayStudent3[i].password;
					cout << "\n\n";
				}
				break;
			case 4:system("cls");
				choice = 0;
				cout << "\n\t1. 420-P55-AS" << "\t\t\t\t" << "Internet Programming I" << endl;
				cout << "\n\n\n\tHow many students whould you like to enroll: ";
				cin >> numStudent4;
				cout << "\n\n";
				for (int i = 0; i < numStudent4; i++)
				{
					cout << "\tStutend ID: ";
					cin >> arrayStudent4[i].studentId;
					cout << "\tFirst Name: ";
					cin >> arrayStudent4[i].firstName;
					cout << "\tLast Name: ";
					cin >> arrayStudent4[i].lastName;
					cout << "\n";
					cout << "\tProject Grade: ";
					cin >> arrayStudent4[i].project;
					cout << "\tMidterm Grade: ";
					cin >> arrayStudent4[i].midterm;
					cout << "\tFinal Exam Grade: ";
					cin >> arrayStudent4[i].finalExame;
					cout << "\tSet a student password: ";
					cin >> arrayStudent4[i].password;
					cout << "\n\n";
				}



				break;
			default:cout << "\n\n\t\tInvalid choice, please try again... ";
				system("pause>>null");
				break;
			}
			//system("pause");
			break;
		case 3:system("cls");
			cout << "\n\n\t3. Search a students' grades\n\n";
			cout << "\n\n\tWhat course would you like to search student?";
			cout << "\n\n\n\tCourse Number" << "\t\t\t\t" << "Course Title" << "\t\t\t" << "\tGroup" << endl;
			cout << "\t=============" << "\t\t\t===========================" << "\t\t\t=====";
			cout << "\n\n\t1. 420-P16-AS\t\t\tStructured Programming\t\t\t\t 7148\n\t2. 420-P34-AS\t\t\tAdvanced Object Programming\t\t\t 7258\n\t3. 420-P34-AS\t\t\tEvent Programming\t\t\t\t 7262\n\t4. 420-P55-AS\t\t\tInternet Programming I\t\t\t\t 7156";
			cout << "\n\n\n\n\t\t\tchoice: ";
			choice = 0;
			cin >> choice;

			switch (choice)
			{
			case 1:system("cls");
				choice = 0;
				cout << "\n\n\t1. 420-P16-AS\t\t\tStructured Programming\t\t\t7148";
				cout << "\n\n\tPlease enter the student data to search: ";
				cin >> searchId;
				cout << "\n\n";
				for (int i = 0; i < numStudent; i++)
				{
					if (arrayStudent[i].studentId == searchId || arrayStudent[i].firstName == searchId || arrayStudent[i].lastName == searchId)
					{
						cout << "\n\n\tStudent found!!";
						cout << "\n\n\tStudent ID       Student Name       Project      Midterm      Final Exam      Final Result";
						cout << "\n\t==========       ============       =======      =======      ==========      ============";
						cout << "\n\t " << arrayStudent[i].studentId << "\t " << arrayStudent[i].lastName << "," << arrayStudent[i].firstName << "\t       " << arrayStudent[i].project << "\t    " << arrayStudent[i].midterm << "\t          " << arrayStudent[i].finalExame << "\t           " << (((arrayStudent[i].project)*0.3) + ((arrayStudent[i].midterm)*0.3) + ((arrayStudent[i].finalExame)*0.4));
						found = true;
					}

					if (!found)
					{
						cout << "\n\tStudent not found in the list!";
					}
				}

				cout << "\n\n\n\n\n\n\n\tPress any key to go back to Main Menu...";
				system("pause>>null");
				break;
			case 2:system("cls");
				choice = 0;
				cout << "\n\n\t2. 420-P34-AS\t\t\tAdvanced Object Programming\t\t\t7258";
				cout << "\n\n\tPlease enter the student data to search: ";
				cin >> searchId;
				cout << "\n\n";
				for (int i = 0; i < numStudent2; i++)
				{
					if (arrayStudent2[i].studentId == searchId || arrayStudent2[i].firstName == searchId || arrayStudent2[i].lastName == searchId)
					{
						cout << "\n\n\tStudent found!!";
						cout << "\n\n\tStudent ID       Student Name       Project      Midterm      Final Exam      Final Result";
						cout << "\n\t==========       ============       =======      =======      ==========      ============";
						cout << "\n\t " << arrayStudent2[i].studentId << "\t " << arrayStudent2[i].lastName << "," << arrayStudent2[i].firstName << "\t       " << arrayStudent2[i].project << "\t    " << arrayStudent2[i].midterm << "\t          " << arrayStudent2[i].finalExame << "\t           " << (((arrayStudent2[i].project)*0.3) + ((arrayStudent2[i].midterm)*0.3) + ((arrayStudent2[i].finalExame)*0.4));
						found = true;


					}
					if (!found)
					{
						cout << "\n\tStudent not found in the list!";
					}
				}

				cout << "\n\n\n\n\n\n\n\tPress any key to go back to Main Menu...";
				system("pause>>null");
				break;
			case 3: system("cls");
				choice = 0;
				cout << "\n\n\t3. 420-P34-AS\t\t\tEvent Programming\t\t\t7262";
				cout << "\n\n\tPlease enter the student data to search: ";
				cin >> searchId;
				cout << "\n\n";
				for (int i = 0; i < numStudent3; i++)
				{
					if (arrayStudent3[i].studentId == searchId || arrayStudent3[i].firstName == searchId || arrayStudent3[i].lastName == searchId)
					{
						cout << "\n\n\tStudent found!!";
						cout << "\n\n\tStudent ID       Student Name       Project      Midterm      Final Exam      Final Result";
						cout << "\n\t==========       ============       =======      =======      ==========      ============";
						cout << "\n\t " << arrayStudent3[i].studentId << "\t " << arrayStudent3[i].lastName << "," << arrayStudent3[i].firstName << "\t       " << arrayStudent3[i].project << "\t    " << arrayStudent3[i].midterm << "\t          " << arrayStudent3[i].finalExame << "\t           " << (((arrayStudent3[i].project)*0.3) + ((arrayStudent3[i].midterm)*0.3) + ((arrayStudent3[i].finalExame)*0.4));
						found = true;


					}
					if (!found)
					{
						cout << "\n\tStudent not found in the list!";
					}
				}

				cout << "\n\n\n\n\n\n\n\tPress any key to go back to Main Menu...";
				system("pause>>null");
				break;
			case 4:system("cls");
				choice = 0;
				cout << "\n\n\t3. 420-P34-AS\t\t\tInternet Programming I\t\t\t7156";
				cout << "\n\n\tPlease enter the student data to search: ";
				cin >> searchId;
				cout << "\n\n";
				for (int i = 0; i < numStudent4; i++)
				{
					if (arrayStudent4[i].studentId == searchId || arrayStudent4[i].firstName == searchId || arrayStudent4[i].lastName == searchId)
					{
						cout << "\n\n\tStudent found!!";
						cout << "\n\n\tStudent ID       Student Name       Project      Midterm      Final Exam      Final Result";
						cout << "\n\t==========       ============       =======      =======      ==========      ============";
						cout << "\n\t " << arrayStudent4[i].studentId << "\t " << arrayStudent4[i].lastName << "," << arrayStudent4[i].firstName << "\t       " << arrayStudent4[i].project << "\t    " << arrayStudent4[i].midterm << "\t          " << arrayStudent4[i].finalExame << "\t           " << (((arrayStudent4[i].project)*0.3) + ((arrayStudent4[i].midterm)*0.3) + ((arrayStudent4[i].finalExame)*0.4));
						found = true;


					}
					if (!found)
					{
						cout << "\n\tStudent not found in the list!";
					}
				}

				cout << "\n\n\n\n\n\n\n\tPress any key to go back to Main Menu...";
				system("pause>>null");
				break;
			default:cout << "\n\n\t\tInvalid choice, please try again... ";
				system("pause>>null");
				break;
			}
			//system("pause");
			break;

		case 4:system("cls");
			choice = 0;
			cout << "\n\n\t4. Sort the student list by studentId\n\n";
			for (int i = 0; i < numStudent - 1; i++)
			{
				for (int j = i + 1; j < numStudent; j++)
				{
					if ((arrayStudent[i].studentId)>(arrayStudent[j].studentId))
					{
						Student temp = arrayStudent[i];
						arrayStudent[i] = arrayStudent[j];
						arrayStudent[j] = temp;
					}
				}
			}
			for (int i = 0; i < numStudent2 - 1; i++)
			{
				for (int j = i + 1; j < numStudent2; j++)
				{
					if ((arrayStudent2[i].studentId)>(arrayStudent2[j].studentId))
					{
						Student temp = arrayStudent2[i];
						arrayStudent2[i] = arrayStudent2[j];
						arrayStudent2[j] = temp;
					}
				}
			}
			for (int i = 0; i < numStudent3 - 1; i++)
			{
				for (int j = i + 1; j < numStudent3; j++)
				{
					if ((arrayStudent3[i].studentId)>(arrayStudent3[j].studentId))
					{
						Student temp = arrayStudent3[i];
						arrayStudent3[i] = arrayStudent3[j];
						arrayStudent3[j] = temp;
					}
				}
			}
			for (int i = 0; i < numStudent4 - 1; i++)
			{
				for (int j = i + 1; j < numStudent4; j++)
				{
					if ((arrayStudent4[i].studentId)>(arrayStudent4[j].studentId))
					{
						Student temp = arrayStudent4[i];
						arrayStudent4[i] = arrayStudent4[j];
						arrayStudent4[j] = temp;
					}
				}
			}
			cout << "\n\n\tThe student list has been sorted...";
			cout << "\n\n\tPress any key to go back to Main Menu...";
			system("pause>>null");
			break;
		case 5:system("cls");

			cout << "\n\n\t5. List all the students grades for a given course\n\n";
			cout << "\n\n\tWhat course would you like to list all the student?";
			cout << "\n\n\n\tCourse Number" << "\t\t\t\t" << "Course Title" << "\t\t\t" << "\tGroup" << endl;
			cout << "\t=============" << "\t\t\t===========================" << "\t\t\t=====";
			cout << "\n\n\t1. 420-P16-AS\t\t\tStructured Programming\t\t\t\t 7148\n\t2. 420-P34-AS\t\t\tAdvanced Object Programming\t\t\t 7258\n\t3. 420-P34-AS\t\t\tEvent Programming\t\t\t\t 7262\n\t4. 420-P55-AS\t\t\tInternet Programming I\t\t\t\t 7156\n\n\n\t5. List all students from all courses";
			cout << "\n\n\n\n\t\t\tchoice: ";
			choice = 0;
			cin >> choice;
			switch (choice)
			{
			case 1:system("cls");
				cout << "\n\n\tStructured Programming students grades" << endl;
				cout << "\n\n\tStudent ID       Student Name       Project      Midterm      Final Exam      Final Result";
				cout << "\n\t==========       ============       =======      =======      ==========      ============" << endl;

				for (int i = 0; i < numStudent; i++)
				{
					cout << "\n\t " << arrayStudent[i].studentId << "\t " << arrayStudent[i].lastName << "," << arrayStudent[i].firstName << "\t       " << arrayStudent[i].project << "\t    " << arrayStudent[i].midterm << "\t          " << arrayStudent[i].finalExame << "\t           " << (((arrayStudent[i].project)*0.3) + ((arrayStudent[i].midterm)*0.3) + ((arrayStudent[i].finalExame)*0.4));

				}
				cout << "\n\n\n\n\n\n\n\tPress any key to return to Main Menu.";
				system("pause>>null");
				break;
			case 2:
				system("cls");
				cout << "\n\n\tAdvanced Object Programming students grades" << endl;
				cout << "\n\n\tStudent ID       Student Name       Project      Midterm      Final Exam      Final Result";
				cout << "\n\t==========       ============       =======      =======      ==========      ============" << endl;

				for (int i = 0; i < numStudent2; i++)
				{
					cout << "\n\t " << arrayStudent2[i].studentId << "\t " << arrayStudent2[i].lastName << "," << arrayStudent2[i].firstName << "\t       " << arrayStudent2[i].project << "\t    " << arrayStudent2[i].midterm << "\t          " << arrayStudent2[i].finalExame << "\t           " << (((arrayStudent2[i].project)*0.3) + ((arrayStudent2[i].midterm)*0.3) + ((arrayStudent2[i].finalExame)*0.4));

				}
				cout << "\n\n\n\n\n\n\n\tPress any key to return to Main Menu.";
				system("pause>>null");
				break;
			case 3:
				system("cls");
				cout << "\n\n\tEvent Programming students grades" << endl;
				cout << "\n\n\tStudent ID       Student Name       Project      Midterm      Final Exam      Final Result";
				cout << "\n\t==========       ============       =======      =======      ==========      ============" << endl;

				for (int i = 0; i < numStudent3; i++)
				{
					cout << "\n\t " << arrayStudent3[i].studentId << "\t " << arrayStudent3[i].lastName << "," << arrayStudent3[i].firstName << "\t       " << arrayStudent3[i].project << "\t    " << arrayStudent3[i].midterm << "\t          " << arrayStudent3[i].finalExame << "\t           " << (((arrayStudent3[i].project)*0.3) + ((arrayStudent3[i].midterm)*0.3) + ((arrayStudent3[i].finalExame)*0.4));

				}
				cout << "\n\n\n\n\n\n\n\tPress any key to return to Main Menu.";
				system("pause>>null");
				break;
			case 4:
			{
				system("cls");
				cout << "\n\n\tInternet Programming students grades" << endl;
				cout << "\n\n\tStudent ID       Student Name       Project      Midterm      Final Exam      Final Result";
				cout << "\n\t==========       ============       =======      =======      ==========      ============" << endl;

				for (int i = 0; i < numStudent4; i++)
				{
					cout << "\n\t " << arrayStudent4[i].studentId << "\t " << arrayStudent4[i].lastName << "," << arrayStudent4[i].firstName << "\t       " << arrayStudent4[i].project << "\t    " << arrayStudent4[i].midterm << "\t          " << arrayStudent4[i].finalExame << "\t           " << (((arrayStudent4[i].project)*0.3) + ((arrayStudent4[i].midterm)*0.3) + ((arrayStudent4[i].finalExame)*0.4));

				}
				cout << "\n\n\n\n\n\n\n\tPress any key to return to Main Menu.";
				system("pause>>null");
				break;
			}
			case 5:
				system("cls");
				cout << "\n\n\tListing all Programming students grades" << endl;
				cout << "\n\n\tStudent ID       Student Name       Project      Midterm      Final Exam      Final Result      Situation";
				cout << "\n\t==========       ============       =======      =======      ==========      ============      =========" << endl;

				for (int i = 0; i < numStudent; i++)
				{
					cout << "\n\t " << arrayStudent[i].studentId << "\t " << arrayStudent[i].lastName << "," << arrayStudent[i].firstName << "\t       " << arrayStudent[i].project << "\t    " << arrayStudent[i].midterm << "\t          " << arrayStudent[i].finalExame << "\t           " << (((arrayStudent[i].project)*0.3) + ((arrayStudent[i].midterm)*0.3) + ((arrayStudent[i].finalExame)*0.4));
					if ((((arrayStudent[i].project)*0.3) + ((arrayStudent[i].midterm)*0.3) + ((arrayStudent[i].finalExame)*0.4))<60)
					{
						cout << "           Fail";
					}
					if ((((arrayStudent[i].project)*0.3) + ((arrayStudent[i].midterm)*0.3) + ((arrayStudent[i].finalExame)*0.4))>=60)
					{
						cout << "           Pass";
					}
				}
				for (int i = 0; i < numStudent2; i++)
				{
					cout << "\n\t " << arrayStudent2[i].studentId << "\t " << arrayStudent2[i].lastName << "," << arrayStudent2[i].firstName << "\t       " << arrayStudent2[i].project << "\t    " << arrayStudent2[i].midterm << "\t          " << arrayStudent2[i].finalExame << "\t           " << (((arrayStudent2[i].project)*0.3) + ((arrayStudent2[i].midterm)*0.3) + ((arrayStudent2[i].finalExame)*0.4));
					if ((((arrayStudent2[i].project)*0.3) + ((arrayStudent2[i].midterm)*0.3) + ((arrayStudent2[i].finalExame)*0.4))<60)
					{
						cout << "           Fail";
					}
					if ((((arrayStudent2[i].project)*0.3) + ((arrayStudent2[i].midterm)*0.3) + ((arrayStudent2[i].finalExame)*0.4)) >= 60)
					{
						cout << "           Pass";
					}

				}
				for (int i = 0; i < numStudent3; i++)
				{
					cout << "\n\t " << arrayStudent3[i].studentId << "\t " << arrayStudent3[i].lastName << "," << arrayStudent3[i].firstName << "\t       " << arrayStudent3[i].project << "\t    " << arrayStudent3[i].midterm << "\t          " << arrayStudent3[i].finalExame << "\t           " << (((arrayStudent3[i].project)*0.3) + ((arrayStudent3[i].midterm)*0.3) + ((arrayStudent3[i].finalExame)*0.4));
					if ((((arrayStudent3[i].project)*0.3) + ((arrayStudent3[i].midterm)*0.3) + ((arrayStudent3[i].finalExame)*0.4))<60)
					{
						cout << "           Fail";
					}
					if ((((arrayStudent3[i].project)*0.3) + ((arrayStudent3[i].midterm)*0.3) + ((arrayStudent3[i].finalExame)*0.4)) >= 60)
					{
						cout << "           Pass";
					}

				}
				for (int i = 0; i < numStudent4; i++)
				{
					cout << "\n\t " << arrayStudent4[i].studentId << "\t " << arrayStudent4[i].lastName << "," << arrayStudent4[i].firstName << "\t       " << arrayStudent4[i].project << "\t    " << arrayStudent4[i].midterm << "\t          " << arrayStudent4[i].finalExame << "\t           " << (((arrayStudent4[i].project)*0.3) + ((arrayStudent4[i].midterm)*0.3) + ((arrayStudent4[i].finalExame)*0.4));
					if ((((arrayStudent4[i].project)*0.3) + ((arrayStudent4[i].midterm)*0.3) + ((arrayStudent4[i].finalExame)*0.4))<60)
					{
						cout << "           Fail";
					}
					if ((((arrayStudent4[i].project)*0.3) + ((arrayStudent4[i].midterm)*0.3) + ((arrayStudent4[i].finalExame)*0.4)) >= 60)
					{
						cout << "           Pass";
					}

				}
				cout << "\n\n\n\n\n\n\n\tPress any key to return to Main Menu.";
				system("pause>>null");
				break;

			default:cout << "\n\n\t\tInvalid choice, please try again... ";
				system("pause>>null");

			}
			break;




		case 6:cout << "\n\n\tDo you really want to exit the application? (Y/N): ";
			cin >> ans;

			break;

		default:cout << "\n\n\t\tInvalid choice, please try again... ";
			system("pause>>null");
			break;
		}


	} while (ans == 'N' || ans == 'n');

}




int getValidId(int);
bool isValidId(string, int);
void loadTeacherData(Teacher[])
{

}
void loadStudentData(Student[]);

Teacher teacherList[NUM_TEACHER];
//Student studentList[NUM_STUDENT];


int main()

{
	welcome();
	userlogin();
	mainScreen();
	cout << "\n\n\n\tPress any Enter key to exit the program...\n\n\tGood bye!";
	system("pause>>null");
	return 0;
}