#include <iostream>
#include <string>
using namespace std;

class Employee {
    protected:
        string name;
        string employeeId;

    public:
        Employee (string _name, string _employeeId) : name(_name), employeeId(_employeeId) {

        }

    virtual void getInfo(){
        cout << "Name: " << name << '\n' << "Employee ID: " << employeeId << endl << '\n';
    }
};

class FullTimeEmployee : Employee {
    private:
        double salary;

    public:
        FullTimeEmployee (string _name , string _employeeId, double _salary) : Employee(_name, _employeeId) , salary(_salary) {

        }

    void getInfo() override {
        cout << "Name: " << name << '\n' << "Employee ID: " << employeeId << '\n' << "Salary: $" << salary << endl << '\n';
    }
};

class PartTimeEmployee : Employee {
    private:
        int hoursWorked;
        double hourlyPay;


    public:
        PartTimeEmployee (string _name, string _employeeId, int _hoursWorked, int _hourlyPay) :
        Employee(_name, _employeeId) , hourlyPay(_hourlyPay), hoursWorked(_hoursWorked) {

        }

    void getInfo() override {
        double salary = hourlyPay * hoursWorked;
        cout << "Name: " << name << '\n' << "Employee ID: " << employeeId << '\n' << "Hours Worked: " << hoursWorked << '\n' 
        << "Hourly Pay: " << hourlyPay << '\n' << "Salary: $" << salary << endl << '\n';
    }
};

int main () {
    Employee james("James Charles", "NUN-000000000");
    james.getInfo();

    FullTimeEmployee Joseph("Joseph Mase", "NUN-000000001", 300.00);
    Joseph.getInfo();

    PartTimeEmployee Akpan("Akpan Torobong", "NUN-211203025", 8 , 15.00);
    Akpan.getInfo();
}