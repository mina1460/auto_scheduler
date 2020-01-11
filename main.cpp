
#include <iostream>
#include <string>
#include <vector>

using namespace std;


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
           std::cin.ignore();
            cout<<"Enter the name of the instructor: ";
            std::getline (std::cin, instructor);

            cout<<"Enter the section number: ";
            cin >> section_number;

            cout<<"\nEnter the CRN: ";
            cin >> CRN;

            cout<<"\n choose a time \n1-    8:30\n2-    10:00\n3-    11:30\n4-    2:00\n5-    3:30\n6-    5:00\n7-    6:15\n";
            cin >> time;
        }
				double getTime(){
					return time;
				}
				string getInstructor(){
					return instructor;
				}
};


class course{
    private:
        bool only_one;
        bool has_a_lab;
        bool special_length;
        int number_of_sections;
        string course_name;
        double duration;
        section **array;
    public:
course(){
	cout << "Please enter course name: " << endl;
	std::cin.ignore();
	std::getline(std::cin,course_name);
	cout << "Does this course have only one section: " << endl << "1 for Yes \n0 for No" << endl;
	cin >> only_one;
	cout << "Is this course of special special_length: " << endl <<  "1 for Yes \n0 for No" << endl;
	cin >> has_a_lab;
	cout << "Does this course have a lab: " << endl << "1 for Yes \n0 for No" << endl;
	cin >> has_a_lab;
	cout << "How many sections does this course have \n";
	cin >> number_of_sections;
	createSections();

}
void createSections () {
  array = new section*[number_of_sections];
  for(int i=0; i<number_of_sections; i++)
  array[i] = new section();
}

void printCourse(){
	cout << "---------------------------" << course_name << "---------------------------" << endl;
	cout << "Number of sections: " << number_of_sections << endl;
	for (int i=0; i< number_of_sections; i++){
		cout << "Section number " << i << " :" << endl;
		cout << "Time is: " << array[i]->getTime() << endl;
		cout << "Instructor is: "<< array[i]->getInstructor() << endl;

	}

}

};




int main()
{
    int number_of_courses = 0;

    cout<<"please enter the number of courses that you want to take: ";
    cin >> number_of_courses;

    course ** coursesArray = new course*[number_of_courses];
		for(int i=0; i<number_of_courses; i++){
			coursesArray[i] = new course();
		}
		coursesArray[0]->printCourse();

    return 0;
}
