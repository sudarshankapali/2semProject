#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<windows.h>
#include<conio.h>
using namespace std;
void view(){
	string readAndWrite;
	char menuChoice;
	cout<<"\nHere are the list you can view\n";
				cout<<"\n1>>Veg Food\n2>>Non-veg Food\n3>>Drinks\n4>>Snacks\n5>>Dessert\n6>>All list";
				menuChoice=getche();
				ifstream readData;
				switch(menuChoice){
					case '1':{
						readData.open("vegFood.dat");
						getline(readData,readAndWrite);
						cout<<readAndWrite<<endl;
						getch();
						readData.close();
						break;
					}
					case '2':{
						readData.open("nonVegFood");
						getline(readData,readAndWrite);
						cout<<readAndWrite<<endl;
						getch();
						readData.close();
						break;
					}
					case '3':{
						readData.open("drinks.dat");
						getline(readData,readAndWrite);
						cout<<readAndWrite<<endl;
						readData.close();
						getch();
						break;
					}
					case '4':{
						readData.open("snacks.dat");
						getline(readData,readAndWrite);
						cout<<readAndWrite<<endl;
						readData.close();
						getch();
						break;
					}
					case '5':{
						readData.open("dessert.dat");
						getline(readData,readAndWrite);
						cout<<readAndWrite<<endl;
						readData.close();
						getch();
						break;
					}
					case '6':{
						cout<<"\nVeg";
						readData.open("vegFood.dat");
						getline(readData,readAndWrite);
						cout<<readAndWrite<<endl;
						getch();
						readData.close();
						cout<<"\n Non-veg";
						readData.open("nonVegFood");
						getline(readData,readAndWrite);
						cout<<readAndWrite<<endl;
						getch();
						readData.close();
						cout<<"\n Drinks";
						readData.open("drinks.dat");
						getline(readData,readAndWrite);
						cout<<readAndWrite<<endl;
						getch();
						readData.close();
						cout<<"\n Snacks";
						readData.open("snacks.dat");
						getline(readData,readAndWrite);
						cout<<readAndWrite<<endl;
						getch();
						readData.close();
						cout<<"\n Desserts";
						readData.open("dessert.dat");
						getline(readData,readAndWrite);
						cout<<readAndWrite<<endl;
						getch();
						readData.close();
						break;
					}
					default:
						cout<<"\nWrong choice";
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
						vegFood.open("vegFood.dat");
						if(!vegFood){
							cout<<"file not found:";
						}
						else{
							cout<<"\nEnter your student ID:";
							cin>>ID;
							cout<<"\nYour bill is Rs"<<sum;
							cout<<"\nEnter your paid amount: ";
							cin>>paidAmt;
							if(paidAmt>sum){
								amt=paidAmt-sum;
								cout<<"\nReturn amount Rs"<<amt;
								getch();
							}
							else if(paidAmt<sum){
								amt=sum-paidAmt;
								cout<<"\nYour due amount is Rs"<<amt;
								getch();
							}
							else {
								cout<<"Return amount is Rs 0";
								getch();
							}
							vegFood<<ID;
							break;
						}
						vegFood.close();
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
						nonVegFood.open("nonVegFood.dat");
						if(!nonVegFood){
							cout<<"file not found:";
						}
						else{
							cout<<"\nEnter your student ID:";
							cin>>ID;
							cout<<"\nYour bill is Rs"<<sum;
							cout<<"\nEnter your paid amount: ";
							cin>>paidAmt;
							if(paidAmt>sum){
								amt=paidAmt-sum;
								cout<<"\nReturn amount Rs"<<amt;
								getch();
							}
							else if(paidAmt<sum){
								amt=sum-paidAmt;
								cout<<"\nYour due amount is Rs"<<amt;
								getch();
							}
							else {
								cout<<"Return amount is Rs 0";
								getch();
							}
							nonVegFood<<ID;
							break;
						}
						nonVegFood.close();
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
						drinks.open("drinks.dat");
						if(!drinks){
							cout<<"file not found:";
						}
						else{
							cout<<"\nEnter your student ID:";
							cin>>ID;
							cout<<"\nYour bill is Rs"<<sum;
							cout<<"\nEnter your paid amount: ";
							cin>>paidAmt;
							if(paidAmt>sum){
								amt=paidAmt-sum;
								cout<<"\nReturn amount Rs"<<amt;
								getch();
							}
							else if(paidAmt<sum){
								amt=sum-paidAmt;
								cout<<"\nYour due amount is Rs"<<amt;
								getch();
							}
							else {
								cout<<"Return amount is Rs 0";
								getch();
							}
							drinks<<ID;
							break;
						}
						drinks.close();
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
						snacks.open("snacks.dat");
						if(!snacks){
							cout<<"file not found:";
						}
						else{
							cout<<"\nEnter your student ID:";
							cin>>ID;
							cout<<"\nYour bill is Rs"<<sum;
							cout<<"\nEnter your paid amount: ";
							cin>>paidAmt;
							if(paidAmt>sum){
								amt=paidAmt-sum;
								cout<<"\nReturn amount Rs"<<amt;
								getch();
							}
							else if(paidAmt<sum){
								amt=sum-paidAmt;
								cout<<"\nYour due amount is Rs"<<amt;
								getch();
							}
							else {
								cout<<"Return amount is Rs 0";
								getch();
							}
							snacks<<ID;
							break;
						}
						snacks.close();
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
						dessert.open("dessert.dat");
						if(!dessert){
							cout<<"file not found:";
						}
						else{
							cout<<"\nEnter your student ID:";
							cin>>ID;
							cout<<"\nYour bill is Rs"<<sum;
							cout<<"\nEnter your paid amount: ";
							cin>>paidAmt;
							if(paidAmt>sum){
								amt=paidAmt-sum;
								cout<<"\nReturn amount Rs"<<amt;
								getch();
							}
							else if(paidAmt<sum){
								amt=sum-paidAmt;
								cout<<"\nYour due amount is Rs"<<amt;
								getch();
							}
							else {
								cout<<"Return amount is Rs 0";
								getch();
							}
							dessert<<ID;
							break;
						}
						dessert.close();
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
				char passwordChoice;
	ifstream fin;
	fin.open("password.dat");
	if(!fin){
		cout<<"\nHello admin \n The software does not have password!!!\n Do you want to set password if yes press 'y' if no press 'n' \n";
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
				cout<<"\t\t\t\t\tPassword set sucessfully \n";
				getch();
				view();
			}
			else{
				system("cls");
				cout<<"Your password does not match\n Please enter password again  \n";
				getch();
				goto flag11;
			}
		}
		else if(passwordChoice=='n'){
			system("cls");
			cout<<"\nAnyone could see the list. It is recommended to set password";
			view();
		}
		
	}
	else{
		system("cls");
		string check,accessToken1;
		getline(fin,check);
		cout<<"Hello admin"<<endl;
		flag12:
		cout<<"Enter your password to access the program  ";
		cin>>accessToken1;
		if(check==accessToken1){
			fin.close();
			system("cls");
			cout<<"\t\t\t\t\t\t\t\tWelcome";
			getch();
		}
		else
		{
			cout<<"The entered password did not match!!!Try again!!!\n";
			goto flag12;
		}
	}
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
	obj.menu();
	return 0;
}
