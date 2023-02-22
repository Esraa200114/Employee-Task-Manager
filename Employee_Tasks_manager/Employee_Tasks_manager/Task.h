#include <string>
using namespace std;

class Task
{
	int p_value;
	string title;
	string description;
	string end_date;
	string start_date;
	string emp_name;

public:

	Task(int p_value, string title, string description, string start_date, string end_date, string emp_name);
    Task();

	void DisplayDetails();
	void set_p_value(int new_p_value);
	void set_title(string new_title);
	void set_description(string new_description);
	void set_edate(string new_start_date);
	void set_sdate(string new_end_date);
	void set_ename(string new_emp_name);
	
	int get_p_value();
	string get_title();
	string get_description();
	string get_edate();
	string get_sdate();
	string get_ename();

};

