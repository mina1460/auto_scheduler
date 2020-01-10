#include <iostream>
#include <string>
#include <vector>

using namespace std;


class course{
	private:
		bool only_one; 
		bool has_a_lab;
		bool special_length;
		int number_of_sections;
		string course_name; 
		double duration; 
	public:



};

class section{
	private:
		std::string instructor; 
		int section_number; 
		int CRN;
		double time; 
		string location; 
		bool days; //0 for UW and 1 for MR
	public:

		section(){
			cout<<"enter the name of the instructor: ";
			getline (std::cin, instructor);
			cout<<instructor<<" \n";

			cout<<"enter the section number: "; 
			cin >> section_number;

			cout<<"\n enter the CRN: ";
			cin >> CRN; 

			cout<<"\n choose a time \n1-	8:30\n2-	10:00\n3-	11:30\n4-	2:00\n5-	3:30\n6-	5:00\n7-	6:15\n";
			cin >> time;
		}
};



int main()
{
	int number_of_courses = 0;

	cout<<"please enter the number of courses that you want to take: ";
	cin >> number_of_courses;

	section mina; 
	cout<<"a7a?\n";
	int x; 
	cin >> x;

	return 0;
}