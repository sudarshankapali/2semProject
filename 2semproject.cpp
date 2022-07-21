#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<windows.h>
#include<conio.h>
using namespace std;
class project{
	public:
	char menuChoice;
	void menu(){
		while(1){
			{
			cout<<"\n\t\t\t\t\t\t*..........................*\n";
			cout<<"\t\t\t\t\t\t\tKIST CAFETERIA\n";					
			cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\tWe have following menu:\n\n";
			cout<<"\t\t\t\t\t\t1. Food and Drinks\n";
			cout<<"\t\t\t\t\t\t2. View List\n";
			cout<<"\t\t\t\t\t\t3. Liability List\n";
			cout<<"\t\t\t\t\t\t4. Delete record\n";
			cout<<"\t\t\t\t\t\t5. Income and expense\n";
			cout<<"\t\t\t\t\t\t6. Exit\n";
			cout<<"\t\t\t\t\t\tChoose from the above list: ";
			menuChoice=getche();
			switch(menuChoice)
			{
				case '1':
				{
					break;
				}
			case '2':			
			{
				break;
			}
		case '3' :
		{
			break;
		}
			case '4':
			{
				break;
			}
			case '5':
				{
				 	break;
				}
			case '6':
			exit(0);
				break;
				default :
				system("cls");
				printf("Invalid option.Press any button: ");
				getch();
			}
		}
	}}
};
int main(){
	project obj;
	char passwordChoice;
	ifstream fin;
	fin.open("password.dat");
	if(!fin){
		cout<<"Hello admin \n The software does not have password!!!\n Do you want to set password if yes press 'y' if no press 'n' \n";
		passwordChoice=getche();
		if(passwordChoice=='y'){
			system("cls");
			string accessToken,accessTemp;
			ofstream fout;
			flag0:
			fout.open("password.dat");
			cout<<"Enter password  ";
			fflush(stdin);
			getline(cin,accessTemp);
			fflush(stdin);
			cout<<"Enter your password again  ";
			getline(cin,accessToken);
			fflush(stdin);
			if(accessToken==accessTemp){
				fout<<accessToken<<endl;
				fout.close();
				system("cls");
				cout<<"\t\t\t\t\tPassword set sucessfully \n";
				obj.menu();
			}
			else{
				system("cls");
				cout<<"Your password does not match\n Please enter password again  \n";
				goto flag0;
			}
		}
		else{
			system("cls");
			obj.menu();
		}
	}
	else{
		system("cls");
		string check,accessToken1;
		getline(fin,check);
		cout<<"Hello admin"<<endl;
		flag1:
		cout<<"Enter your password to access the program  ";
		cin>>accessToken1;
		if(check==accessToken1){
			system("cls");
			cout<<"\t\t\t\t\t\t\t\tWelcome";
			obj.menu();
			fin.close();
		}
		else
		{
			cout<<"The entered password did not match!!!Try again!!!\n";
			goto flag1;
		}
	}
	return 0;
}
