#include "Task.h"
#include<iostream>
using namespace std;

Task::Task(int p_value, string title, string description, string start_date, string end_date, string emp_name)
{
	this->p_value = p_value;
	this->title = title;
	this->description = description;
	this->start_date = start_date;
	this->end_date = end_date;
	this->emp_name = emp_name;

}

Task::Task()
{
	p_value = 0;
	title = "";
	description = "";
	start_date = "";
	end_date = "";
	emp_name = "";

}
void Task::DisplayDetails()
{
	
		cout << "Task Title : " << title << endl;
		cout << "Task Description : " << description << endl;
		cout << "Task Start Date : " << start_date << endl;
		cout << "Task End Date : " << end_date << endl;
		cout << "Employee Name : " << emp_name << endl;
		cout << "priorty value : " << p_value << endl;
		cout << "\t-----------------------------------------" << endl;
	
}
void Task::set_p_value(int new_p_value) {
	p_value = new_p_value;
}

void Task::set_edate(string new_end_date) {
	end_date = new_end_date;
}

void Task::set_sdate(string new_start_date) {
	 start_date = new_start_date;
}

void Task::set_ename(string new_emp_name) {
	emp_name = new_emp_name;
}

void Task::set_description(string new_description) {
	description = new_description;
}

void Task::set_title(string new_title) {
	title = new_title;
}

string Task::get_description() {
	return description;
}

string Task::get_edate() {
	return end_date;
}

string Task::get_ename() {
	return emp_name;
}

int Task::get_p_value() {
	return p_value;
}

string Task::get_sdate() {
	return start_date;
}

string Task::get_title() {
	return title;
}