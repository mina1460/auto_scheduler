#include <iostream>
#include <vector>
using namespace std; 


class course{

private:
	bool only1;
	bool MR;
	bool lab; 

	int offerings;
	vector <course> off; 
	int time; 
	bool special_length; 
	double duration; 
	int credits; 
	int CRN; 
public:

	void time_filler()
	{
		cout<<"please pick the correct starting time of this instant of the course \n"; 
		cout<<"1-	8:30\n2-	10:00\n3-	11:30\n4-	2:00\n5-	3:30\n6-	5:00\n7-	6:15\n";
		cin >> time;

		cout<<"is this course longer of shorter than 1 hour and 15 minutes? (1=yes 	0=No)\n";
		cin >> special_length;

		if(special_length)
		{
			cout<<"\n please enter the duration of the course as a decimal: ";
			cin >> duration;
		}
		else duration = 1.25;

	}
	void offerings_handler()
	{
		if(offerings == 0)
		{	cout <<" you little piece of shit!! what do you want me to do for you? email the department?\n";
			
			return; 
		}

		if(offerings == 1)
		{
			only1 = true; 

		}

		else 
		{
			only1 = false; 
			//should then create a vector or a dynamic array of the size of the courses and start filling it one by one
			for (int i=0; i<offerings; i++)
				off.push_back()
		}

	}


	void filler()
	{
		cout<<"how many offerings are availble for this course?\n";
		cin >> offerings; 
		
			offerings_handler();

		
	}

};


int main()
{
	int num_of_courses = 0;

	cout<<"please enter the number of courses that you want to register\n";
	cin >> num_of_courses;

	std::vector <course> C;

	for(int i=0; i<num_of_courses; i++)
	{

	}


	return 0;
}