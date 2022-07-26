#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<windows.h>
#include<conio.h>
using namespace std;
struct student{
	int id;
	int bill,paid;
}s;
void view(){
	string readAndWrite;
	char menuChoice;
	cout<<"\n\n\t\t\t\t\tHere are the list you can view\n";
	system("cls");
				cout<<"\n\t\t\t\t\t1>>Paid List\n\t\t\t\t\t2>>Liability list ";
				menuChoice=getche();
				ifstream readData;
				switch(menuChoice){
					case '1':{
						readData.open("student.dat");
						system("cls");
						cout<<"ID\tBill Amount\tPaid Amount";
						while(!readData.eof()){
						getline(readData,readAndWrite);
						cout<<"\n---------------------------------------";
						cout<<endl<<readAndWrite<<endl;
						}
						getch();
						readData.close();
						break;
					}
					case '2':{
						readData.open("liability.dat");
						system("cls");
						cout<<"ID\tBill Amount\tDue Amount";
						while(!readData.eof()){
						getline(readData,readAndWrite);
						cout<<"\n---------------------------------------";
						cout<<endl<<readAndWrite<<endl;
						}
						getch();
						readData.close();
						break;
					}
					default:
						cout<<"\nWrong choice";
						break;
				}
}
class project{
	int sum,order1,ID,paidAmt,amt,temp;
	char menuChoice0,next,another;
	char menuChoice;
	public:
	project(){
		temp=0;
	}
	void menu(){
		while(1){
			{
				sum=temp;
				system("cls");
			cout<<"\n\t\t\t\t\t\t*..........................*\n";
			cout<<"\t\t\t\t\t\t\tKIST CAFETERIA\n";					
			cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\tWe have following menu:\n\n";
			cout<<"\t\t\t\t\t\t1. Food and Drinks\n";
			cout<<"\t\t\t\t\t\t2. View List\n";
			cout<<"\t\t\t\t\t\t3. Change Password\n";
			cout<<"\t\t\t\t\t\t4. Delete record\n";
			cout<<"\t\t\t\t\t\t5. Exit\n";
			cout<<"\t\t\t\t\t\tChoose from the above list: ";
			menuChoice=getche();
			switch(menuChoice)
			{
				case '1':
				{
					start:
			system("cls");
				cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\tEnter your food category\n";
				cout<<"\t\t\t\t\t\t1.Veg\n";
				cout<<"\t\t\t\t\t\t2.Non-veg\n";
				cout<<"\t\t\t\t\t\t3.Drinks\n";
				cout<<"\t\t\t\t\t\t4.Snacks\n";
		        cout<<"\t\t\t\t\t\t5.Dessert\n";
				cout<<"\t\t\t\t\t\tChoose an option ";
				menuChoice0=getche();
				switch(menuChoice0){
					case '1':{
						flag0:
						system("cls");
				cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\tWe have following menu:\n\n";
				cout<<"\t\t\t\t\t1.Garlic Potato-.......................Rs 60\n";
				cout<<"\t\t\t\t\t2.Veg Chowmein-........................Rs 50\n";
				cout<<"\t\t\t\t\t3.Veg Momo-............................Rs 60\n";
				cout<<"\t\t\t\t\t4.Potato Chips-........................Rs 50\n";
				cout<<"\t\t\t\t\t5.Burger-..............................Rs 90\n";
				cout<<"\t\t\t\t\t6.Sandwitch-...........................Rs 70\n";
				cout<<"\t\t\t\t\t7.Puri Tarkari-........................Rs 80\n";
				cout<<"\t\t\t\t\t8.Alu Paratha-.........................Rs 60\n";
				cout<<"\t\t\t\t\t9.French Fry-..........................Rs 50\n";
					cout<<"\n\t\t\t\t\tPlease Enter Your Order: ";
					order1=getche();
					{
					switch(order1){
						case '1':{
							sum=sum+60;
							break;
						}
						case '2':{
							sum=sum+50;
							break;
						}
						case '3':{
							sum=sum+60;
							break;
						}
						case '4':{
							sum=sum+50;
							break;
						}
						case '5':{
							sum=sum+90;
							break;
						}
						case '6':{
							sum=sum+70;
							break;
						}
						case '7':{
							sum=sum+80;
							break;
						}
						case '8':{
							sum=sum+60;
							break;
						}
						case '9':{
							sum=sum+50;
							break;
						}
						default:
						cout<<"\nWrong Choice";
					}
					cout<<"\n\t\t\t\t\tDo you want another order?\n\t\t\t\t\tIf Yes then please press 'Y' else press 'n':  ";
					next=getche();
					if(next=='y'){
						goto flag0;
					}
					else if(next=='n'){
						cout<<"\n\t\t\t\t\tDo you want to order from another category?\n";
					cout<<"\t\t\t\t\tIf Yes then Please Enter 'y' or 'Y' else Enter  'n' or 'N':";
					another=getche();
					
					if(another=='y'|| another=='Y')
					{
						goto start;
					}
					else if(another=='n' || another=='N'){
						ofstream vegFood;
						vegFood.open("student.dat", ios :: app);
						if(!vegFood){
							cout<<"file not found:";
						}
						else{
							cout<<"\nEnter your student ID:";
							cin>>ID;
							s.id=ID;
							cout<<"\nYour bill is Rs"<<sum;
							s.bill=sum;
							cout<<"\nEnter your paid amount: ";
							cin>>paidAmt;
							s.paid=paidAmt;
							vegFood<<s.id<<"\t"<<s.bill<<"\t\t"<<s.paid<<endl;
							vegFood.close();
							if(paidAmt>sum){
								amt=paidAmt-sum;
								cout<<"\nReturn amount Rs"<<amt;
								getch();
							}
							else if(paidAmt<sum){
								amt=sum-paidAmt;
								s.paid=amt;
								cout<<"\nYour due amount is Rs"<<amt;
								ofstream a;
								a.open("liability.dat", ios :: app);{
									a<<s.id<<"\t"<<s.bill<<"\t\t"<<s.paid<<endl;
									a.close();
								}
								getch();
							}
							else {
								cout<<"Return amount is Rs 0";
								getch();
							}
							break;
						}
						
					}

					}
					else {
						cout<<"wrong input";
					}
					
					
				}
					fflush(stdin);
					break;
					}
					case '2':{
						flag1:
						system("cls");
					cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\tWe have following menu:\n\n";
					cout<<"\t\t\t\t\t1.Chicken Momo-.............................Rs 90\n";
					cout<<"\t\t\t\t\t2.Chicken Chowmein-.........................Rs 80\n";
					cout<<"\t\t\t\t\t3.Chicken Burger-...........................Rs 70\n";
					cout<<"\t\t\t\t\t4.Chicken Biriyani-.........................Rs 100\n";
					cout<<"\t\t\t\t\t5.Buff Momo-................................Rs 70\n";
					cout<<"\t\t\t\t\t6.Pork Momo-................................Rs 70\n";
					cout<<"\t\t\t\t\t7.Buff/Chicken Sausage-.....................Rs 30\n";
					cout<<"\t\t\t\t\t8.Egg Kattiroll-............................Rs 120\n";
					cout<<"\t\t\t\t\t9.Chicken Kattiroll-........................Rs 150\n";
					cout<<"\n\t\t\t\t\tPlease Enter Your Order: ";
					order1=getche();
					switch(order1){
						case '1':{
							sum=sum+90;
							break;
						}
						case '2':{
							sum=sum+80;
							break;
						}
						case '3':{
							sum=sum+70;
							break;
						}
						case '4':{
							sum=sum+100;
							break;
						}
						case '5':{
							sum=sum+70;
							break;
						}
						case '6':{
							sum=sum+70;
							break;
						}
						case '7':{
							sum=sum+30;
							break;
						}
						case '8':{
							sum=sum+120;
							break;
						}
						case '9':{
							sum=sum+150;
							break;
						}
						default:
						cout<<"\nWrong Choice";
					}
					cout<<"\n\t\t\t\t\tDo you want another order?\n\t\t\t\t\tIf Yes then please press 'Y' else press 'n':  ";
					next=getche();
					if(next=='y'){
						goto flag1;
					}
					else if(next=='n'){
						cout<<"\n\t\t\t\t\tDo you want to order from another category?\n";
					cout<<"\t\t\t\t\tIf Yes then Please Enter 'y' or 'Y' else Enter 'n' or 'N':";
					another=getche();
					
					if(another=='y'|| another=='Y')
					{
						goto start;
					}
					else if(another=='n' || another=='N'){
						ofstream nonVegFood;
						nonVegFood.open("student.dat", ios :: app);
						if(!nonVegFood){
							cout<<"file not found:";
						}
						else{
							cout<<"\nEnter your student ID:";
							cin>>ID;
							s.id=ID;
							cout<<"\nYour bill is Rs"<<sum;
							s.bill=sum;
							cout<<"\nEnter your paid amount: ";
							cin>>paidAmt;
							s.paid=paidAmt;
							nonVegFood<<s.id<<"\t"<<s.bill<<"\t\t"<<s.paid<<endl;
							nonVegFood.close();
							if(paidAmt>sum){
								amt=paidAmt-sum;
								cout<<"\nReturn amount Rs"<<amt;
								getch();
							}
							else if(paidAmt<sum){
								amt=sum-paidAmt;
								cout<<"\nYour due amount is Rs"<<amt;
								ofstream a;
								s.paid=amt;
								a.open("liability.dat", ios :: app);{
									a<<s.id<<"\t"<<s.bill<<"\t"<<s.paid<<endl;
									a.close();
								getch();
							}
							}else {
								cout<<"Return amount is Rs 0";
								getch();
							}
							break;
						}
					}

					}
					else {
						cout<<"wrong input";
					}
					fflush(stdin);
						break;
					}
					case '3':{
						flag2:
					system("cls");
				cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\tWe have following menu:\n\n";
				cout<<"\t\t\t\t\t1.Coffee-..............................Rs 50\n";
				cout<<"\t\t\t\t\t2.Cold Drinks-.........................Rs 40\n";
				cout<<"\t\t\t\t\t3.Milk Tea-............................Rs 25\n";
				cout<<"\t\t\t\t\t4.Fruit Juice-.........................Rs 35\n";
				cout<<"\t\t\t\t\t5.Chocolate Milk-......................Rs 30\n";
				cout<<"\t\t\t\t\t6.Capuccino-...........................Rs 50\n";
				cout<<"\t\t\t\t\t7.Americano-...........................Rs 60\n";
				cout<<"\t\t\t\t\t8.Espresso-............................Rs 50\n";
				cout<<"\t\t\t\t\t9.Latte-...............................Rs 80\n";

					cout<<"\n\t\t\t\t\tPlease Enter Your Order: ";
					order1=getche();
					switch(order1){
						case '1':{
							sum=sum+50;
							break;
						}
						case '2':{
							sum=sum+40;
							break;
						}
						case '3':{
							sum=sum+25;
							break;
						}
						case '4':{
							sum=sum+35;
							break;
						}
						case '5':{
							sum=sum+30;
							break;
						}
						case '6':{
							sum=sum+50;
							break;
						}
						case '7':{
							sum=sum+60;
							break;
						}
						case '8':{
							sum=sum+50;
							break;
						}
						case '9':{
							sum=sum+80;
							break;
						}
						default:
						cout<<"\nWrong Choice";
					}
					cout<<"\n\t\t\t\t\tDo you want another order?\n\t\t\t\t\tIf Yes then please press 'Y' else press 'n':  ";
					next=getche();
					if(next=='y'){
						goto flag2;
					}
					else if(next=='n'){
						cout<<"\n\t\t\t\t\tDo you want to order from another category?\n";
					cout<<"\t\t\t\t\tIf Yes then Please Enter 'y' or 'Y' else Enter 'n' or 'N':";
					another=getche();
					
					if(another=='y'|| another=='Y')
					{
						goto start;
					}
					else if(another=='n' || another=='N'){
						ofstream drinks;
						drinks.open("student.dat", ios :: app);
						if(!drinks){
							cout<<"file not found:";
						}
						else{
							cout<<"\nEnter your student ID:";
							cin>>ID;
							s.id=ID;
							cout<<"\nYour bill is Rs"<<sum;
							s.bill=sum;
							cout<<"\nEnter your paid amount: ";
							cin>>paidAmt;
							s.paid=paidAmt;
							drinks<<s.id<<"\t"<<s.bill<<"\t\t"<<s.paid<<endl;
							drinks.close();
							if(paidAmt>sum){
								amt=paidAmt-sum;
								cout<<"\nReturn amount Rs"<<amt;
								getch();
							}
							else if(paidAmt<sum){
								amt=sum-paidAmt;
								cout<<"\nYour due amount is Rs"<<amt;
								ofstream a;
								s.paid=amt;
								a.open("liability.dat", ios :: app);{
									a<<s.id<<"\t"<<s.bill<<"\t\t"<<s.paid<<endl;
									a.close();
								}
								getch();
							}
							else {
								cout<<"Return amount is Rs 0";
								getch();
							}
							break;
						}
					}

					}
					else {
						cout<<"wrong input";
					}
					fflush(stdin);
						break;
					}
					case '4':{
						flag3:
						system("cls");
				cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\tWe have following menu:\n\n";
				cout<<"\t\t\t\t\t1.Chatpate-..............................Rs 50\n";
				cout<<"\t\t\t\t\t2.Pop Corn-..............................Rs 50\n";
				cout<<"\t\t\t\t\t3.Fruit Salad-...........................Rs 65\n";
				cout<<"\t\t\t\t\t4.Jelly Cup with Fruit-..................Rs 75\n";
				cout<<"\t\t\t\t\t5.Cookies-...............................Rs 60\n";
				cout<<"\t\t\t\t\t6.Muffins-...............................Rs 50\n";
				cout<<"\t\t\t\t\t7.Chips-.................................Rs 40\n";
				cout<<"\t\t\t\t\t8.Current Noodles-.......................Rs 60\n";
				cout<<"\t\t\t\t\t9.Nimkin/Dalmot-.........................Rs 40\n";

					cout<<"\n\t\t\t\t\tPlease Enter Your Order: ";
					order1=getche();
					switch(order1){
						case '1':{
							sum=sum+50;
							break;
						}
						case '2':{
							sum=sum+50;
							break;
						}
						case '3':{
							sum=sum+65;
							break;
						}
						case '4':{
							sum=sum+75;
							break;
						}
						case '5':{
							sum=sum+60;
							break;
						}
						case '6':{
							sum=sum+50;
							break;
						}
						case '7':{
							sum=sum+40;
							break;
						}
						case '8':{
							sum=sum+60;
							break;
						}
						case '9':{
							sum=sum+40;
							break;
						}
						default:
						cout<<"\nWrong Choice";
					}
					cout<<"\n\t\t\t\t\tDo you want another order?\n\t\t\t\t\tIf Yes then please press 'Y' else press 'n':  ";
					next=getche();
					if(next=='y'){
						goto flag3;
					}
					else if(next=='n'){
						cout<<"\n\t\t\t\t\tDo you want to order from another category?\n";
					cout<<"\t\t\t\t\tIf Yes then Please Enter 'y' or 'Y' else Enter 'n' or 'N':";
					another=getche();
					
					if(another=='y'|| another=='Y')
					{
						goto start;
					}
					else if(another=='n' || another=='N'){
						ofstream snacks;
						snacks.open("student.dat", ios :: app);
						if(!snacks){
							cout<<"file not found:";
						}
						else{
							cout<<"\nEnter your student ID:";
							cin>>ID;
							s.id=ID;
							cout<<"\nYour bill is Rs"<<sum;
							s.bill=sum;
							cout<<"\nEnter your paid amount: ";
							cin>>paidAmt;
							s.paid=paidAmt;
							snacks<<s.id<<"\t"<<s.bill<<"\t\t"<<s.paid<<endl;
							snacks.close();
							if(paidAmt>sum){
								amt=paidAmt-sum;
								cout<<"\nReturn amount Rs"<<amt;
								getch();
							}
							else if(paidAmt<sum){
								amt=sum-paidAmt;
								cout<<"\nYour due amount is Rs"<<amt;
								ofstream a;
								s.paid=amt;
								a.open("liability.dat", ios :: app);{
									a<<s.id<<"\t"<<s.bill<<"\t\t"<<s.paid<<endl;
									a.close();
								}
								getch();
							}
							else {
								cout<<"Return amount is Rs 0";
								getch();
							}
							break;
						}
					}

					}
					else {
						cout<<"wrong input";
					}
					fflush(stdin);
						break;
					}
					case '5':{
						flag4:
						system("cls");
				cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\tWe have following menu:\n\n";
				cout<<"\t\t\t\t\t1.Ice Cream-..................................Rs 70\n";
				cout<<"\t\t\t\t\t2.Black/White Forest-.........................Rs 90\n";
				cout<<"\t\t\t\t\t3.Waffle-.....................................Rs 75\n";
				cout<<"\t\t\t\t\t4.Cream Doughnut-.............................Rs 50\n";
				cout<<"\t\t\t\t\t5.Fruit Pie-..................................Rs 60\n";
				cout<<"\t\t\t\t\t6.Stawberry Sundae-...........................Rs 80\n";
				cout<<"\t\t\t\t\t7.Pastry-.....................................Rs 60\n";
				cout<<"\t\t\t\t\t8.Peanut Butter Bread-........................Rs 90\n";
				cout<<"\t\t\t\t\t9.Fruit Cake-.................................Rs 100\n";

					cout<<"\n\t\t\t\t\tPlease Enter Your Order: ";
					order1=getche();
					switch(order1){
						case '1':{
							sum=sum+70;
							break;
						}
						case '2':{
							sum=sum+90;
							break;
						}
						case '3':{
							sum=sum+75;
							break;
						}
						case '4':{
							sum=sum+50;
							break;
						}
						case '5':{
							sum=sum+60;
							break;
						}
						case '6':{
							sum=sum+80;
							break;
						}
						case '7':{
							sum=sum+60;
							break;
						}
						case '8':{
							sum=sum+90;
							break;
						}
						case '9':{
							sum=sum+100;
							break;
						}
						default:
						cout<<"\nWrong Choice";
					}
					cout<<"\n\t\t\t\t\tDo you want another order?\n\t\t\t\t\tIf Yes then please press 'Y' else press 'n':  ";
					next=getche();
					if(next=='y'){
						goto flag4;
					}
					else if(next=='n'){
						cout<<"\n\t\t\t\t\tDo you want to order from another category?\n";
					cout<<"\t\t\t\t\tIf Yes then Please Enter 'y' or 'Y' else Enter 'n' or 'N':";
					another=getche();
					
					if(another=='y'|| another=='Y')
					{
						goto start;
					}
					else if(another=='n' || another=='N'){
						ofstream dessert;
						dessert.open("student.dat", ios :: app);
						if(!dessert){
							cout<<"file not found:";
						}
						else{
							cout<<"\nEnter your student ID:";
							cin>>ID;
							s.id=ID;
							cout<<"\nYour bill is Rs"<<sum;
							s.bill=sum;
							cout<<"\nEnter your paid amount: ";
							cin>>paidAmt;
							s.paid=paidAmt;
							dessert<<s.id<<"\t"<<s.bill<<"\t\t"<<s.paid<<endl;
							dessert.close();
							if(paidAmt>sum){
								amt=paidAmt-sum;
								cout<<"\nReturn amount Rs"<<amt;
								getch();
							}
							else if(paidAmt<sum){
								amt=sum-paidAmt;
								cout<<"\nYour due amount is Rs"<<amt;
								ofstream a;
								s.paid=amt;
								a.open("liability.dat", ios :: app);{
									a<<s.id<<"\t"<<s.bill<<"\t\t"<<s.paid<<endl;
									a.close();
								}
								getch();
							}
							else {
								cout<<"Return amount is Rs 0";
								getch();
							}
							break;
						}
					}

					}
					else {
						cout<<"wrong input";
					}
					fflush(stdin);
						break;
					}
						}
					break;
				}
			case '2':			
			{
				system("cls");
				char passwordChoice;
	ifstream fin;
	fin.open("password.dat");
	if(!fin){
		cout<<"\n\n\t\t\t\t\tHello admin \n\t\t\t\tThe software does not have password!!!\n\t\t\t\tDo you want to set password if yes press 'y' if no press 'n' \n";
		passwordChoice=getche();
		if(passwordChoice=='y'){
			system("cls");
			string accessToken,accessTemp;
			ofstream fout;
			flag11:
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
				cout<<"\n\t\t\t\t\tPassword set sucessfully \n";
				getch();
				view();
			}
			else{
				system("cls");
				cout<<"\n\t\t\t\t\tYour password does not match\n\t\t\t\t\t Please enter password again  \n";
				getch();
				goto flag11;
			}
		}
		else if(passwordChoice=='n'){
			system("cls");
			cout<<"\n\n\t\t\t\t\tAnyone could see the list. It is recommended to set password";
			getch();
			view();
		}
		
	}
	else{
		system("cls");
		string check,accessToken1;
		getline(fin,check);
		cout<<"Hello admin"<<endl;
		flag12:
		cout<<"\nEnter your password to access the program  ";
		cin>>accessToken1;
		if(check==accessToken1){
			fin.close();
			system("cls");
			cout<<"\t\t\t\t\t\t\t\tWelcome";
			getch();
			view();
		}
		else
		{
			cout<<"\n\t\t\t\t\tThe entered password did not match!!!Try again!!!\n";
			goto flag12;
		}
	}
				break;
			}
		case '3' :
		{
			string pass,pass1;
			system("cls");
			ifstream test;
			test.open("password.dat");
			if(!test){
				cout<<"Password not set. Please set the password first from view list option: ";
				getch();
			}
			else{
				cout<<"Enter old password ";
				getline(cin,pass);
				test>>pass1;
				test.close();
				if(pass1!=pass){
					cout<<endl<<"Password is incorrect. Access Denied"<<endl;
					getche();
				}
				else{
					string access1,access2;
					again:
						system("cls");
					cout<<"Enter new password ";
					getline(cin,access1);
					cout<<"Enter your new password again ";
					getline(cin,access2);
					if(access1==access2){
						ofstream newPassword;
					newPassword.open("password.dat");{
					newPassword<<access2;
					newPassword.close();
					}
					}
					else{
						cout<<"Password did not match please enter again";
						getch();
						goto again;
						system("cls");
					}
					
				}
			}
			break;
		}
			case '4':
			{
			/*	system("cls");
				int deleteId;
				cout<<"Enter student ID you want to delete: ";
				cin>>deleteId;
				fflush(stdin);
				ifstream d;
				d.open("liability.dat");
				ofstream e;
				e.open("new.dat");
					while(!d.eof()){
						 if(s.id==deleteId){
						 	continue;
						 }
						 else{
						 	e<<s.id<<"\t"<<s.bill<<"\t\t"<<s.paid<<endl;
						 }
					}
					cout<<"Record deleted";
					e.close();
					d.close();
					remove("liability.dat");
					rename("new.dat","liability.dat");
								break;*/
			}
			case '5':
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
	obj.menu();
	return 0;
}
