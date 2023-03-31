#include<iostream>

using namespace std;

class Employe{
	
	private:
		
		int employe_id;
        char employe_name[20];
        char employe_role[20];
        int employe_salary;
        int employe_experience; 
        char employe_address[20];
        char employe_email[20];
        char employe_contact[20];
	
	public:
		
		void setter();
		void getter();
};

void Employe :: setter(){
	
	cout<<"Enter Employe Id : ";
	cin>>employe_id;
	
	cout<<"Enter Employe Name : ";
	cin>>employe_name;
	
	cout<<"Enter Employe Role : ";
	cin>>employe_role;
	
	cout<<"Enter Employe Salary : ";
	cin>>employe_salary;
	
	cout<<"Enter Employe Experirnce : ";
	cin>>employe_experience;
	
	cout<<"Enter Employe Address : ";
	cin>>employe_address;
	
	cout<<"Enter Employe Email : ";
	cin>>employe_email;
	
	cout<<"Enter Employe Contact : ";
	cin>>employe_contact;
	
}
void Employe :: getter(){
	
	cout<<employe_id<<endl;
	cout<<employe_name<<endl;
	cout<<employe_role<<endl;
	cout<<employe_salary<<endl;
	cout<<employe_experience<<endl;
	cout<<employe_address<<endl;
	cout<<employe_email<<endl;
	cout<<employe_contact<<endl;

}

int main(){
	
	Employe obj1,obj2,obj3,obj4,obj5;
	
	obj1.setter();
	obj1.getter();
	obj2.setter();
	obj2.getter();
	obj3.setter();
	obj3.getter();
	obj4.setter();
	obj4.getter();
	obj5.setter();
	obj5.getter();
	
	return 0;
}
