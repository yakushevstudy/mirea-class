#include<iostream>
#include<cstring>
#include<fstream>
#include<vector>
using namespace std;

class Person

{

public:
	int phonenumber;
	string surname, email;
public:
	void setPerson(int person_phonenumber, string person_surname, string person_email)
	{
		phonenumber = person_phonenumber;
		surname = person_surname;
		email = person_email;
	}
	void printPerson()
	{
		cout << "Phone Number is " << phonenumber << endl << "Name is " << surname << endl << "email is " << email << endl;
	}
};
class Student :public Person
{
private:
	int studentnumber;
	float averagemark;
public:
	void setStudent(int student_studentnumber, float student_averagemark)
	{

		studentnumber = student_studentnumber;
		averagemark = student_averagemark;
	}
	void getStudent()
	{
		cout << "Sudent's Number is " << studentnumber << endl << "Sudent's averagemark  is" << averagemark << endl;
	}


};

class Worker :public Person
{

	int experience, salaryh, hours, salary;
	double premy;
public:
	void setWorker(int exp, int sh, int h)
	{

		experience = exp;
		salaryh = sh;
		hours = h;
		double p;
		int s;
		s = sh * h;
		salary = s;
		if (exp < 1) p = 0;
		else
		{
			if (exp >= 1 && exp < 3) p = 0.05 * s;
			else
			{
				if (exp >= 3 && exp < 5) p = 0.08 * s;
				else
				{
					if (exp >= 5) p = 0.15 * s;
				}
			}
		}
		premy = p;
	}
	void getWorker()
	{
		cout << "Experience is " << experience << endl << "Hourly wage is " << salaryh << endl << surname << " has worked " << hours << " hours" << endl << "Salary is " << salary << endl << "Premy is " << premy << endl;
		cout << "Information about " << surname << endl;

	}
};
class VUZ {
	int
		vector <Student> students;
	students[0] = objStudent;
	vector 	<Worker> workers(5);
	Worker[0] = objWorker;
	printStudents() {

		for (i = 0; i < students.size(); i++)
		{
			cout << Students[i].surname;

		}
	}





};





int main()
{

	int phonenumber;
	string surname, email;
	int studentnumber;
	float averagemark;

	int experience, salaryh, hours, salary, premy;
	Person objPerson;
	Student objStudent;
	VUZ Mirea;


	Worker objWorker;


	cout << "Enter person's name: ";
	cin >> surname;
	cout << "Enter person's pnone number ";
	cin >> phonenumber;
	cout << "Enter person's Email Adress";
	cin >> email;
	cout << "Enter worker's name: "; cin >> surname; cout << endl;
	cout << "Enter worker's experience: ";
	cin >> experience; cout << endl;
	cout << "Enter worker's hourly wag: ";
	cin >> salaryh; cout << endl;
	cout << "Enter how much hours " << surname << " has worked: ";
	cin >> hours; cout << endl;
	cout << "Students number is ";
	cin >> studentnumber;
	cout << "Sudent's averagemark  is";
	cin >> averagemark;

	objPerson.setPerson(phonenumber, surname, email);
	objPerson.printPerson();
	objStudent.setStudent(studentnumber, averagemark);
	objStudent.getStudent();
	objWorker.setWorker(experience, salaryh, hours);
	objWorker.getWorker();
	cout << "Persons name " << objPerson.surname << endl;
	cout << "Students name " << objStudent.surname;
	Mirea.Students[0] = objStudent;
	Mirea.students.insert(objStudent).




		system("pause");
	return 0;
}



