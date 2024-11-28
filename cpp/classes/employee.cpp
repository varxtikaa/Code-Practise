#include<iostream>
using namespace std;
class Employee{

    string name[100];
    int emp_id[100];
    int salary[100];
    static int index;
    public:
    void addEmployee(string n,int id,int sal);
};
int Employee::index=0;
void Employee::addEmployee(string n,int id,int sal){
    for(int i=0;i<index;i++){
        if(id==emp_id[i]){
                cout<<"Unsuccessful. Duplicate id found.";
                exit;
        }
    }
    name[index]=n;
    emp_id[index]=id;
    salary[index]=sal;
}
class EmployeeManagementSystem{
    public:
    void displayEmployees();
};
void EmployeeManagementSystem::displayEmployees(){
    for(int i=0;i<Employee::index;i++){
        cout<<Employee::name[i]<<" "
    }
}
