#include<iostream>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>
#include<fstream>
using namespace std;
struct student{
	int id;
	int bill,paid;
}s;
void printReceipt(int a[],int size,int s,int p){
	int array[45],k=0,total,paidAmt;
	for(k=0;k<size;k++){
		array[k]=a[k];
	}
	system("cls");
								cout<<"\t***********************************************"<<endl;
								cout<<"\t\t\tRECEIPT"<<endl;
								cout<<"\t***********************************************"<<endl;
								if(array[0]>=1)
								{
									cout<<"\t"<<array[0]<<" * Gralic Potato          $"<<array[0]*60<<endl;
								}
								if(array[1]>=1)
								{
									cout<<"\t"<<array[1]<<" * Veg Chowmin            $"<<array[1]*50<<endl;
								}
								if(array[2]>=1)
								{
									cout<<"\t"<<array[2]<<" * Veg Momo               $"<<array[2]*60<<endl;
								}
								if(array[3]>=1)
								{
									cout<<"\t"<<array[3]<<" * Potato Chips           $"<<array[3]*50<<endl;
								}
								if(array[4]>=1)
								{
									cout<<"\t"<<array[4]<<" * Burger                 $"<<array[4]*90<<endl;
								}
								if(array[5]>=1)
								{
									cout<<"\t"<<array[5]<<" * Sandwitch              $"<<array[5]*70<<endl;
								}
								if(array[6]>=1)
								{
									cout<<"\t"<<array[6]<<" * Puri Tarkari           $"<<array[6]*80<<endl;
								}
								if(array[7]>=1)
								{
									cout<<"\t"<<array[7]<<" * Alu Paratha            $"<<array[7]*60<<endl;
								}
								if(array[8]>=1)
								{
									cout<<"\t"<<array[8]<<" * Frentch Fry            $"<<array[8]*60<<endl;
								}
								if(array[9]>=1)
								{
									cout<<"\t"<<array[9]<<" * Chicken Momo           $"<<array[9]*90<<endl;
								}
								if(array[10]>=1)
								{
									cout<<"\t"<<array[10]<<" * Chicken Chowmein      $"<<array[10]*80<<endl;
								}
								if(array[11]>=1)
								{
									cout<<"\t"<<array[11]<<" * Chicken Burger        $"<<array[11]*70<<endl;
								}
								if(array[12]>=1)
								{
									cout<<"\t"<<array[12]<<" * Chicken Biriyani      $"<<array[12]*100<<endl;
								}
								if(array[13]>=1)
								{
									cout<<"\t"<<array[13]<<" * Buff Momo             $"<<array[13]*70<<endl;
								}
								if(array[14]>=1)
								{
									cout<<"\t"<<array[14]<<" * Pork Momo             $"<<array[14]*70<<endl;
								}
								if(array[15]>=1)
								{
									cout<<"\t"<<array[15]<<" * Buff/Chicken Sausage  $"<<array[15]*300<<endl;
								}
								if(array[16]>=1)
								{
									cout<<"\t"<<array[16]<<" * Egg Kattiroll         $"<<array[16]*120<<endl;
								}
								if(array[17]>=1)
								{
									cout<<"\t"<<array[17]<<" * Chicken Kattiroll     $"<<array[17]*150<<endl;
								}
								if(array[18]>=1)
								{
									cout<<"\t"<<array[18]<<" * Coffee                $"<<array[18]*50<<endl;
								}
								if(array[19]>=1)
								{
									cout<<"\t"<<array[19]<<" * Cold Drinks           $"<<array[19]*40<<endl;
								}
								if(array[20]>=1)
								{
									cout<<"\t"<<array[20]<<" * Milk Tea              $"<<array[20]*25<<endl;
								}
								if(array[21]>=1)
								{
									cout<<"\t"<<array[21]<<" * Fruit Juice           $"<<array[21]*35<<endl;
								}
								if(array[22]>=1)
								{
									cout<<"\t"<<array[22]<<" * Chocolate Milk        $"<<array[22]*30<<endl;
								}
								if(array[23]>=1)
								{
									cout<<"\t"<<array[23]<<" * Capuccino             $"<<array[23]*50<<endl;
								}
								if(array[24]>=1)
								{
									cout<<"\t"<<array[24]<<" * Americano             $"<<array[24]*60<<endl;
								}
								if(array[25]>=1)
								{
									cout<<"\t"<<array[25]<<" * Espresso              $"<<array[25]*50<<endl;
								}
								if(array[26]>=1)
								{
									cout<<"\t"<<array[26]<<" * Latte                 $"<<array[26]*80<<endl;
								}
								if(array[27]>=1)
								{
									cout<<"\t"<<array[27]<<" * Chatpate              $"<<array[27]*50<<endl;
								}
								if(array[28]>=1)
								{
									cout<<"\t"<<array[28]<<" * Pop Corn              $"<<array[28]*50<<endl;
								}
								if(array[29]>=1)
								{
									cout<<"\t"<<array[29]<<" * Fruit Salad           $"<<array[29]*65<<endl;
								}
								if(array[30]>=1)
								{
									cout<<"\t"<<array[30]<<" * Jelly Cup with Fruit  $"<<array[30]*75<<endl;
								}
								if(array[31]>=1)
								{
									cout<<"\t"<<array[31]<<" * Cookies               $"<<array[31]*60<<endl;
								}
								if(array[32]>=1)
								{
									cout<<"\t"<<array[32]<<" * Muffins               $"<<array[32]*50<<endl;
								}
								if(array[33]>=1)
								{
									cout<<"\t"<<array[33]<<" * Chips                 $"<<array[33]*40<<endl;
								}
								if(array[34]>=1)
								{
									cout<<"\t"<<array[34]<<" * Current Noodles       $"<<array[34]*60<<endl;
								}
								if(array[35]>=1)
								{
									cout<<"\t"<<array[35]<<" * Nimkin/Dalmot         $"<<array[35]*40<<endl;
								}
								if(array[36]>=1)
								{
									cout<<"\t"<<array[36]<<" * Ice Cream             $"<<array[36]*70<<endl;
								}
								if(array[37]>=1)
								{
									cout<<"\t"<<array[37]<<" * Black/White Forest    $"<<array[37]*90<<endl;
								}
								if(array[38]>=1)
								{
									cout<<"\t"<<array[38]<<" * Waffle                $"<<array[38]*75<<endl;
								}
								if(array[39]>=1)
								{
									cout<<"\t"<<array[39]<<" * Cream Doughnut        $"<<array[39]*50<<endl;
								}
								if(array[40]>=1)
								{
									cout<<"\t"<<array[40]<<" * Fruit Pie             $"<<array[40]*60<<endl;
								}
								if(array[41]>=1)
								{
									cout<<"\t"<<array[41]<<" * Stawberry Sundae      $"<<array[41]*80<<endl;
								}
								if(array[42]>=1)
								{
									cout<<"\t"<<array[42]<<" * Pastry                $"<<array[42]*60<<endl;
								}
								if(array[43]>=1)
								{
									cout<<"\t"<<array[43]<<" * Peanut Butter Bread   $"<<array[43]*90<<endl;
								}
								if(array[44]>=1)
								{
									cout<<"\t"<<array[44]<<" * Fruit Cake            $"<<array[44]*100<<endl;
								}
								cout<<"\t==============================================="<<endl;
								cout<<"\tTOTAL AMOUNT              $"<<s<<endl;
								cout<<"\tPAID  AMOUNT              $"<<p<<endl;
								cout<<"\t==============================================="<<endl;
								cout<<"\t\t\tTHANK YOU"<<endl;
								cout<<"\t==============================================="<<endl;
								getch();
}
view(){
	string readAndWrite;
	char menuChoice;
	int searchId;
	cout<<"\n\n\t\t\t\t\tHere are the list you can view\n";
	system("cls");
				cout<<"\n\t\t\t\t\t1>>Paid List\n\t\t\t\t\t2>>Liability list\n\t\t\t\t\t3>>Specific list ";
				menuChoice=getche();
				ifstream readData;
				switch(menuChoice){
					case '1':{
						readData.open("student.dat");
						if(!readData){
							system("cls");
							cout<<"\t\t\tNo Data Recorded: ";
							getch();
						}
						else{
							system("cls");
						cout<<"ID\tBill Amount\tPaid Amount";
						while(!readData.eof()){
						getline(readData,readAndWrite);
						cout<<"\n---------------------------------------";
						cout<<endl<<readAndWrite<<endl;
						}
						getch();
						readData.close();
						}
						break;
					}
					case '2':{
						readData.open("liability.dat");
						if(!readData){
							system("cls");
							cout<<"\t\t\tNo Data Recored: ";
							getch();
						}
						else{
							system("cls");
						cout<<"ID\tBill Amount\tDue Amount";
						while(!readData.eof()){
						getline(readData,readAndWrite);
						cout<<"\n---------------------------------------";
						cout<<endl<<readAndWrite<<endl;
						}
						getch();
						}
						readData.close();
						break;
					}
					case '3':{/*
						system("cls");
						cout<<"\nEnter the ID you want to search: ";
						cin>>searchId;
						ifstream readFile1;
				readFile1.open("student.dat");
				ofstream writeFile1;
				writeFile1.open("specific.dat");
				while(!readFile1.eof()){
					if(s.id==searchId){
						writeFile1<<s.id<<"\t";
						writeFile1<<s.bill<<"\t\t";
						writeFile1<<s.paid<<endl;
					}
					else{
						system("cls");
						cout<<"Record not found with same ID: ";
						getch();
					}
					break;
				}
				writeFile1.close();
				readFile1.close();
				ifstream readFile2;
				readFile2.open("specific.dat");
				if(readFile2!=NULL)
				{
							system("cls");
						cout<<"ID\tBill Amount\tDue Amount";
						while(!readFile2.eof()){
						getline(readFile2,readAndWrite);
						cout<<"\n---------------------------------------";
						cout<<endl<<readAndWrite<<endl;
						}
						getch();
						}
						else{
							system("cls");
							cout<<"file is empty: ";
						}
						break;*/
					}
					default:
						cout<<"\nWrong choice";
						break;
				}
}
class food{
	int order1,ID,paidAmt,amt,temp,array[45],sum;
	int i;
	char menuChoice0,next,another;
	
	public:
		food(){
		temp=0;
	}
		
		void menu1(){
			sum=temp;
			for(i=0;i<45;i++){
			array[i]=temp;
			}
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
							array[0]=array[0]+1;
							break;
						}
						case '2':{
							sum=sum+50;
							array[1]=array[1]+1;
							break;
						}
						case '3':{
							sum=sum+60;
							array[2]=array[2]+1;
							break;
						}
						case '4':{
							sum=sum+50;
							array[3]=array[3]+1;
							break;
						}
						case '5':{
							sum=sum+90;
							array[4]=array[4]+1;
							break;
						}
						case '6':{
							sum=sum+70;
							array[5]=array[5]+1;
							break;
						}
						case '7':{
							sum=sum+80;
							array[6]=array[6]+1;
							break;
						}
						case '8':{
							sum=sum+60;
							array[7]=array[7]+1;
							break;
						}
						case '9':{
							sum=sum+50;
							array[8]=array[8]+1;
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
								printReceipt(array,45,sum,paidAmt);
							}
							else if(paidAmt<sum){
								amt=sum-paidAmt;
								s.paid=amt;
								cout<<"\nYour due amount is Rs"<<amt;
								getch();
								printReceipt(array,45,sum,paidAmt);
								ofstream a;
								a.open("liability.dat", ios :: app);{
									a<<s.id<<"\t"<<s.bill<<"\t\t"<<s.paid<<endl;
									a.close();
								}
							}
							else {
								cout<<"Return amount is Rs 0";
								getch();
								printReceipt(array,45,sum,paidAmt);
							}
							break;
						}
						
					}

					}
					else {
						cout<<"wrong input";
						getch();
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
							array[9]=array[9]+1;
							break;
						}
						case '2':{
							sum=sum+80;
							array[10]=array[10]+1;
							break;
						}
						case '3':{
							sum=sum+70;
							array[11]=array[11]+1;
							break;
						}
						case '4':{
							sum=sum+100;
							array[12]=array[12]+1;
							break;
						}
						case '5':{
							sum=sum+70;
							array[13]=array[13]+1;
							break;
						}
						case '6':{
							sum=sum+70;
							array[14]=array[14]+1;
							break;
						}
						case '7':{
							sum=sum+30;
							array[15]=array[15]+1;
							break;
						}
						case '8':{
							sum=sum+120;
							array[16]=array[16]+1;
							break;
						}
						case '9':{
							sum=sum+150;
							array[17]=array[17]+1;
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
								printReceipt(array,45,sum,paidAmt);
							}
							else if(paidAmt<sum){
								amt=sum-paidAmt;
								cout<<"\nYour due amount is Rs"<<amt;
								getch();
								printReceipt(array,45,sum,paidAmt);
								ofstream a;
								s.paid=amt;
								a.open("liability.dat", ios :: app);{
									a<<s.id<<"\t"<<s.bill<<"\t"<<s.paid<<endl;
									a.close();
							}
							}else {
								cout<<"Return amount is Rs 0";
								getch();
								printReceipt(array,45,sum,paidAmt);
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
							array[18]=array[18]+1;
							break;
						}
						case '2':{
							sum=sum+40;
							array[19]=array[19]+1;
							break;
						}
						case '3':{
							sum=sum+25;
							array[20]=array[20]+1;
							break;
						}
						case '4':{
							sum=sum+35;
							array[21]=array[21]+1;
							break;
						}
						case '5':{
							sum=sum+30;
							array[22]=array[22]+1;
							break;
						}
						case '6':{
							sum=sum+50;
							array[23]=array[23]+1;
							break;
						}
						case '7':{
							sum=sum+60;
							array[24]=array[24]+1;
							break;
						}
						case '8':{
							sum=sum+50;
							array[25]=array[25]+1;
							break;
						}
						case '9':{
							sum=sum+80;
							array[26]=array[26]+1;
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
								printReceipt(array,45,sum,paidAmt);
							}
							else if(paidAmt<sum){
								amt=sum-paidAmt;
								cout<<"\nYour due amount is Rs"<<amt;
								getch();
								printReceipt(array,45,sum,paidAmt);
								ofstream a;
								s.paid=amt;
								a.open("liability.dat", ios :: app);{
									a<<s.id<<"\t"<<s.bill<<"\t\t"<<s.paid<<endl;
									a.close();
								}
							}
							else {
								cout<<"Return amount is Rs 0";
								getch();
								printReceipt(array,45,sum,paidAmt);
							}
							break;
						}
					}

					}
					else {
						cout<<"wrong input";
						getch();
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
							array[27]=array[27]+1;
							break;
						}
						case '2':{
							sum=sum+50;
							array[28]=array[28]+1;
							break;
						}
						case '3':{
							sum=sum+65;
							array[29]=array[29]+1;
							break;
						}
						case '4':{
							sum=sum+75;
							array[30]=array[30]+1;
							break;
						}
						case '5':{
							sum=sum+60;
							array[31]=array[31]+1;
							break;
						}
						case '6':{
							sum=sum+50;
							array[32]=array[32]+1;
							break;
						}
						case '7':{
							sum=sum+40;
							array[33]=array[33]+1;
							break;
						}
						case '8':{
							sum=sum+60;
							array[34]=array[34]+1;
							break;
						}
						case '9':{
							sum=sum+40;
							array[35]=array[35]+1;
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
								printReceipt(array,45,sum,paidAmt);
							}
							else if(paidAmt<sum){
								amt=sum-paidAmt;
								cout<<"\nYour due amount is Rs"<<amt;
								getch();
								printReceipt(array,45,sum,paidAmt);
								ofstream a;
								s.paid=amt;
								a.open("liability.dat", ios :: app);{
									a<<s.id<<"\t"<<s.bill<<"\t\t"<<s.paid<<endl;
									a.close();
								}
							}
							else {
								cout<<"Return amount is Rs 0";
								getch();
								printReceipt(array,45,sum,paidAmt);
							}
							break;
						}
					}

					}
					else {
						cout<<"wrong input";
						getch();
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
							array[36]=array[36]+1;
							break;
						}
						case '2':{
							sum=sum+90;
							array[37]=array[37]+1;
							break;
						}
						case '3':{
							sum=sum+75;
							array[38]=array[38]+1;
							break;
						}
						case '4':{
							sum=sum+50;
							array[39]=array[39]+1;
							break;
						}
						case '5':{
							sum=sum+60;
							array[40]=array[40]+1;
							break;
						}
						case '6':{
							sum=sum+80;
							array[41]=array[41]+1;
							break;
						}
						case '7':{
							sum=sum+60;
							array[42]=array[42]+1;
							break;
						}
						case '8':{
							sum=sum+90;
							array[43]=array[43]+1;
							break;
						}
						case '9':{
							sum=sum+100;
							array[44]=array[44]+1;
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
								printReceipt(array,45,sum,paidAmt);
							}
							else if(paidAmt<sum){
								amt=sum-paidAmt;
								cout<<"\nYour due amount is Rs"<<amt;
								getch();
								ofstream a;
								s.paid=amt;
								a.open("liability.dat", ios :: app);{
									a<<s.id<<"\t"<<s.bill<<"\t\t"<<s.paid<<endl;
									a.close();
								}
								printReceipt(array,45,sum,paidAmt);
							}
							else {
								cout<<"Return amount is Rs 0";
								getch();
								printReceipt(array,45,sum,paidAmt);
							}
							break;
						}
					}

					}
					else {
						cout<<"wrong input";
						getch();
					}
					fflush(stdin);
						break;
					}
						}
				}
};
class viewList{
	public:
		void menu2(){
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
		}
};
class changePassword{
	public:
	void menu3(){
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
						system("cls");
						cout<<"\t\t\tPassword changed sucessfully";
						getch();
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
	}
};
class deleteList{
	public:
		void menu4(){
			string pass,pass1;
			system("cls");
			ifstream test;
			test.open("password.dat");
			if(!test){
				cout<<"Password not set. Please set the password first from view list option: ";
				getch();
			}
			else{
				cout<<"Enter password to delete record: ";
				getline(cin,pass);
				test>>pass1;
				test.close();
				if(pass1!=pass){
					cout<<endl<<"Password is incorrect. Access Denied"<<endl;
					getche();
				}
				else{
					system("cls");
				int deleteId;
				cout<<"Enter student ID you want to delete: ";
				cin>>deleteId;
				ifstream readFile;
				readFile.open("liability.dat");
				ofstream writeFile;
				readFile>>s.id;
				readFile>>s.bill;
				readFile>>s.paid;
				writeFile.open("new.dat");
				while(!readFile.eof()){
					if(s.id!=deleteId){
						writeFile<<s.id<<"\t";
						writeFile<<s.bill<<"\t\t";
						writeFile<<s.paid<<endl;
					}
					else{
						system("cls");
						cout<<"Record deleted from Liability list sucessfully: ";
						getch();
					}
					
					readFile>>s.id;
					readFile>>s.bill;
					readFile>>s.paid;
				}
				writeFile.close();
				readFile.close();
				if(remove("liability.dat")!=0){
					cout<<"Could not remove file: ";
					getch();
				}
				else{
					system("cls");
					cout<<"File removed sucessfully: \n";
				}
				if(rename("new.dat","liability.dat")!=0){
					cout<<"Could not rename file: ";
					getch();
				}
				else{
					cout<<"File renamed sucessfully: ";
					getch();
				}
				ifstream readFile1;
				readFile1.open("student.dat");
				ofstream writeFile1;
				readFile1>>s.id;
				readFile1>>s.bill;
				readFile1>>s.paid;
				writeFile1.open("new1.dat");
				while(!readFile1.eof()){
					if(s.id!=deleteId){
						writeFile1<<s.id<<"\t";
						writeFile1<<s.bill<<"\t\t";
						writeFile1<<s.paid<<endl;
					}
					else{
						system("cls");
						cout<<"Record deleted from all list sucessfully: ";
						getch();
					}
					readFile1>>s.id;
					readFile1>>s.bill;
					readFile1>>s.paid;
				}
				writeFile1.close();
				readFile1.close();
				if(remove("student.dat")!=0){
					cout<<"Could not remove file: ";
					getch();
				}
				else{
					system("cls");
					cout<<"File removed sucessfully: ";
				}
				if(rename("new1.dat","student.dat")!=0){
					cout<<"could not rename file: ";
					getch();
				}
				else{
					cout<<"file renamed sucessfully: ";
					getch();
				}
				}
			}
		}
};
int main(){
	char menuChoice;
	food obj1;
	viewList obj2;
	changePassword obj3;
	deleteList obj4;
	while(1){
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
			switch(menuChoice){
				case '1':{
					obj1.menu1();
					break;
				}
				case '2':{
					obj2.menu2();
					break;
				}
				case '3':{
					obj3.menu3();
					break;
				}
				case '4':{
					obj4.menu4();
					break;
				}
				case '5':{
					exit(0);
					break;
				}
				default:{
					system("cls");
				printf("Invalid option.Press any button: ");
				getch();
					break;
				}	
			}
	}
	return (0);
}
