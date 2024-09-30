#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    string address;
    int age;
    long long int  mobile_no;
    int id;

public:
    
    void accept() {
        cout << "Enter your age: ";
        cin >> age;
        cin.ignore(); 

        cout << "Enter your name: ";
        getline(cin, name);

        cout << "Enter Mobile no: ";
        cin >> mobile_no;
        cin.ignore(); 

        cout << "Enter your id: ";
        cin >> id;
        cin.ignore(); 

        cout << "Enter your Address: ";
        getline(cin, address);
    }

   
    void display() const {
        cout << "\nAge: " << age << endl;
        cout << "Name: " << name << endl;
        cout << "Mobile No: " << mobile_no << endl;
        cout << "ID: " << id << endl;
        cout << "Address: " << address << endl;
    }
};

class Doctor : public Person {
private:
    string special;
    string experience;
    int fees;
    long license_no;
    string time;

public:
    
    void setDetailsDoc() {
        accept();

        cout << "\nEnter your License Number: ";
        cin >> license_no;
        cin.ignore();  

        cout << "Enter your Experience: ";
        getline(cin, experience);

        cout << "Enter your Specialization: ";
        getline(cin, special);

        cout << "Enter your Consultation fees: ";
        cin >> fees;
        cin.ignore(); 

        cout << "Enter your Working time: ";
        getline(cin, time);
    }

  
    void displayDoc() const {
        cout << "\nDoctor Details:" << endl;
        display();
        cout << "License Number: " << license_no << endl;
        cout << "Experience: " << experience << endl;
        cout << "Specialization: " << special << endl;
        cout << "Consultation Fees: $" << fees << endl;
        cout << "Working Time: " << time << endl;
    }
};

class Nurse : public Person {
private:
    string qualifications;
    string department;
    string shift;
    int experienceYears;
    double salary;

public:
 
    void setDetailsNur() {
        accept();
        
        cout << "\nEnter nurse's qualifications: ";
        getline(cin, qualifications);

        cout << "Enter nurse's department: ";
        getline(cin, department);

        cout << "Enter nurse's work shift (Morning/Night): ";
        getline(cin, shift);

        cout << "Enter years of experience: ";
        cin >> experienceYears;

        cout << "Enter salary: ";
        cin >> salary;

        cin.ignore();  
    }

    
    void displayDetailsNur() const {
        cout << "\nNurse Details:" << endl;
        display();
        cout << "Qualifications: " << qualifications << endl;
        cout << "Department: " << department << endl;
        cout << "Shift: " << shift << endl;
        cout << "Years of Experience: " << experienceYears << endl;
        cout << "Salary: $" << salary << endl;
    }
};

class Admin : public Person {
private:
    string adminID;
    string email;
    string department;
    int experienceYears;
    double salary;

public:

    void setDetailsAdmin() {
        accept();

        cout << "\nEnter Admin ID: ";
        getline(cin, adminID);

        cout << "Enter Admin Email: ";
        getline(cin, email);

        cout << "Enter Admin Department: ";
        getline(cin, department);

        cout << "Enter Admin's years of experience: ";
        cin >> experienceYears;

        cout << "Enter Admin's salary: ";
        cin >> salary;

        cin.ignore();  
    }


    void displayDetailsAdmin() const {
        cout << "\nAdmin Details:" << endl;
        display();
        cout << "Admin ID: " << adminID << endl;
        cout << "Email: " << email << endl;
        cout << "Department: " << department << endl;
        cout << "Years of Experience: " << experienceYears << endl;
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    
    int ch ;
    char c ;
    Doctor d ;
    Nurse n ;
    Admin a ;
    
    do{
    	
     cout<<" 1.Doctor \n 2.Nurse \n 3.Admin "<<endl;
    
	 cout<<"Enter your choice : "<<endl ;
	 cin>>ch ;
	 
	
    switch(ch){
    	case 1:
    		d.setDetailsDoc();
    		d.displayDoc();
    		break ;
    	case 2 :
    		n.setDetailsNur();
    		n.displayDetailsNur();
    		break ;
    	case 3:
    		a.setDetailsAdmin() ;
    		a.displayDetailsAdmin() ;
    		break ;
    	default :
    		cout<<"Invalid Choice . "<<endl;
	}
	cout<<"do you want to continue (y/n) "<<endl;
	cin>>c ;
  }while(ch=='y'||ch=='n');

    return 0;
}

