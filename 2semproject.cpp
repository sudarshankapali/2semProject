#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
class file{
	public:
	void display(){
	int n=0;
	while(n!=4){
		cout<<"\n\n\t\t\t CONTACT MANAGEMENT SYSTEM\n\n";
		cout<<"\t\t\t\t 1)ADD CONTACT\n";
		cout<<"\t\t\t\t 2)VIEW CONTACT\n";
		cout<<"\t\t\t\t 3)DELETE CONTACT\n";
		cout<<"\t\t\t\t 4)EXIT\n\n";
		cout<<"\t\t\t\t Enter your choice\t";
		cin>>n;
		switch(n){
			case 1:{
				addContact();
				break;
			}
			case 2:{
				viewContact();
				break;
			}
			case 3:{
				break;
			}
		}
	}
}
void addContact(){
	ofstream fileObj;
	string text;
	fileObj.open("contact.dat");
	if(!fileObj){
		cout<<"file not found";
	}
	else{
		cout<<"\n\t\tEnter the person name and phone number\t";
		while(fileObj){
		getline(cin,text);
		if(text=="-1")
		break;
			fileObj<<text<<endl;
	}
	}
	fileObj.close();
}
void viewContact(){
	string line;
	ifstream fin;
	fin.open("contact.dat");
	while(fin){
		getline(fin,line);
		cout<<line<<endl;
	}
	fin.close();
}
};
int main(){
	file obj;
	obj.display();
	return 0;
}
