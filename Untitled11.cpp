#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

void MENU();
void viewInformation();
void registerCourse();
void viewTranscript();
void scoring();

//9 is just a number,put whatever reasonable number you want
string courseCodes[9];
string courseTitles[9];
int credits[9];
char grades[9];
int noOfCourses = 0;

int main (){
	MENU();
	return 0;
}

void MENU(){
	
	cout<<"  MENU"<<endl;
	cout<<"1.view information"<<endl;
	cout<<"2.register course"<<endl;
	cout<<"3.view transcript"<<endl;
	cout<<"4.scoring"<<endl;
	cout<<"5.exist"<<endl;
	
	int x;
	cin>>x;
	
	switch(x){
		case 1:
			
			cout<<"view information"<<endl;
			viewInformation();
			break;
		case 2:
			
			cout<<"register Course"<<endl;
			registerCourse();
			break;
		case 3:
			
			cout<<"transcript"<<endl;
			viewTranscript();
			break;
		case 4:
			
			cout<<"scoring"<<endl;
			scoring();
			break;
		case 5:
			return;
		default:
			cout<<"incorrect input"<<endl;

}
		
system("pause");
MENU();
}
		
 void viewInformation(){
 	cout<<left<<setw(15)<<"name"<<left<<setw(15)<<"isa"<<endl;
    cout<<left<<setw(15)<<"id"<<left<<setw(15)<<"171103007"<<endl;
    cout<<left<<setw(15)<<"department"<<left<<setw(15)<<"computer science"<<endl;
    cout<<left<<setw(15)<<"level"<<left<<setw(15)<<"300"<<endl;
 }		
  
  void registerCourse(){
    cout<<"enter number of courses"<<endl;
    int y;
    cin>>y;
    noOfCourses+= y;
    
    for (int z=0;z<y;z++){
    	cout<<"enter course code"<<z+1<<endl;
    	cin>>courseCodes[z];
    	cout<<"enter course title"<<z+1<<endl;
    	cin>>courseTitles[z];
    	cout<<"enter credit"<<z+1<<endl;
    	cin>>credits[z];
}
 
 cout <<"registered courses:"<<endl;
 for(int z=0;z<y;z++){
 	cout<<left<<setw(10)<<courseCodes[z];
 	cout<<left<<setw(30)<<courseTitles[z];
 	cout<<left<<setw(10)<<credits[z];
 }
  	
}

 void viewTranscript(){
 	viewInformation();
 	cout<<left<<setw(10)<<"code";
 	cout<<left<<setw(30)<<"course";
 	cout<<left<<setw(10)<<"credits";
 	cout<<left<<setw(10)<<"grade"<<endl;
 	
 	
 	for(int z=0;z< noOfCourses;z++){
 		cout<<left<<setw(10)<<courseCodes[z];
 	    cout<<left<<setw(30)<<courseTitles[z];
 	    cout<<left<<setw(10)<<credits[z];
 	    cout<<left<<setw(10)<<grades[z]<<endl;
 	
 }
 		
	 }
 	
 void scoring(){
 	for(int z=0;z<noOfCourses;z++){
 		cout<<"enter grade for "<<courseCodes[z]<<endl;
 		cin>>grades[z];
 	}
 		
 	cout<<"done"<<endl;	
}
