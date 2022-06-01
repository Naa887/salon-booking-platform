
//Noura Mohammed Al Julidan 2210003577 //Group No.1
//Norah Abduallah Al abeedah 2210003771
//lama Nasser Al Qhahtani 2210003578
//Program description :
//The idea of this project is to create a code to book beauty salon appointments
//Our salon is ** Lamoda Salon ** 

#include <iostream>
#include<cstdlib>
#include<ctime>
#include <iomanip>
#include<fstream>
#include <string.h>
using namespace std;

int LogIn(string userName, string userPassword) //Database to Sign in
{
    if (userName == "Norah" && userPassword == "Norah123")
    {
        cout << "\n--------- Welcome Norah ---------\n";
        return 1;
    }
    else if (userName == "Lama" && userPassword == "Lama123")
    {
        cout << "\n--------- Welcome Lama ---------\n";
        return 1;
    }
    if (userName == "Noura" && userPassword == "Noura123")
    {
        cout << "\n--------- Welcome Noura ---------\n";
        return 1;
    }
    else
    {
        cout << "\nInvalid login attempt. Please try again.\n" << '\n';
        return 0;
    }
}

void rege (string *username , string *pass ){ //void fun to registration
}

void Package(int menu1 ){ //function to display the package of the week
	
	cout<<endl;
	cout<<"\n------------------------------------------------------------------------------------------------------------------------";
	cout<<"\nPackage of the week : ";
	cout<<"\n\t\t\t\t|------------------------------------------------------------|";
	cout<<"\n\t\t\t\t|Package 1                                                   |";
	cout<<"\n\t\t\t\t|1-Acrylic Nails , Pedicure and Manicure  "<<" 120 SR        |";
	cout<<"\n\t\t\t\t|------------------------------------------------------------|";
	cout<<"\n\t\t\t\t|Package 2                                                   |";
	cout<<"\n\t\t\t\t|2-Hair Dye  , Hair Cut , Protein Hair Treatment "<<" 420 SR |";
	cout<<"\n\t\t\t\t|------------------------------------------------------------|";
	cout<<"\n\t\t\t\t|Package 3                                                   |";
	cout<<"\n\t\t\t\t|3-Hair Styles , MakeUp "<<" 350 SR                          |";	
	cout<<"\n\t\t\t\t|------------------------------------------------------------|\n";
	cout<<"\n------------------------------------------------------------------------------------------------------------------------";
}

void policy_sug( int PS ){ //function to read/write and from/in a file //using overloding here
	
	ofstream outFile;
	ifstream inFile;
	string suggestions;
	outFile.open( "Display.txt", ios::app ); //open file
	inFile.open( "Display.txt", ios::in ); 
	
	if ( outFile.is_open() || outFile.is_open() == true || inFile.is_open() || inFile.is_open() == true ) //to cheak the file if open or not
	{
				outFile<<"\n------------------------------------------------------------------------------------------------------------------------\n";			
	            outFile<<"\nFor suggestions or complaints please send us an Email or kindly leave your number to help us improve our services :";
				outFile<<"\nOur Email : lamoda.salon.ksa@gmail.com ";
				outFile<<endl;
				outFile<<"Or You Can Leave Your Suggestions Below :\n";
		    	getline(inFile, suggestions,',');
				outFile<<"\n\n\n** Thank You Dear **";	
				outFile<<"\n------------------------------------------------------------------------------------------------------------------------\n";			

	}
	outFile.close(); //close file
	inFile.close();		
}

void policy_sug( double ps ){ //function to read from a file //using overloding here
	
	ofstream outFile;
	outFile.open( "Display.txt", ios::app ); //open file
	
		if ( outFile.is_open() == true || outFile.is_open() ) { //to cheak the file if open or not
			
				outFile<<"\nOur Policy ";
                outFile<<"\nWhen you create a Lamoda Site Account, you provide us with personal information";
				outFile<<"\nincluding your name and password.You can choose to add your phone number or";
                outFile<<"\npayment information to your account.Even if you are not signed in to a";
				outFile<<"\nLamoda Site Account, you can choose to provide us with information";
				outFile<<"\nsuch as a mail address email to receive updates about our services";
				outFile<<endl;
				outFile<<"\n\n\n** Thank You Dear **";	
				outFile<<"\n------------------------------------------------------------------------------------------------------------------------\n";			
		}
	outFile.close(); //close file			
}




string Fname , phonNumber , date , month; 
void Bill(){ //function to display the form of the bill with enterd information
	
	cout<<"\n------------------------------------------------------------------------------------------------------------------------";
	cout<<"\n\n---------- THE BILL ----------- ";
	srand(time(0));
	cout<<"\n\nThe bill number : "; 
	cout<<1+rand()%(100-1+1); //using srand to genertae the number of bill randomlly in a range 
	cout<<"\n-------------------------------\n";
	cout<<"Fisrt Name : "<<Fname;	
	cout<<"\n-------------------------------\n";
	cout<<"Phone Number : "<<phonNumber;
	cout<<"\n-------------------------------\n";
	cout<<"Appointment date :";
	cout<<"\nDay : "<<date<<"\tMonth : "<<month; 
	cout<<"\n-------------------------------\n";
}

struct Person { //struct within struct to display employees information
	int employee;	
};

struct Employee 
{
    string Name;
    string Wday;
};

int Price[] = { 30, 60, 150, 20, 300, 250, 100, 300, 250 , 100 }; //int array to store the price of each service
void view_menu()
{
	//string array to store services
    string menu [10] = { "Hair Cut  ", "Pedicure and Manicure ", "MakeUp  ", "Bleaching Eyebrows  ", "Hair Styles  ", "Massage and Spa  " , "Hair and Skin Care  ", "Protein Hair Treatment  ", "Hair Dye  ", "Acrylic Nails  " };
    
	cout<<"\n------------------------------------------------------------------------------------------------------------------------";	
	cout<<"\nTHE SERVICES MENU "; //for loop to display the menu ( services and prices )
    cout<<"\n\t\t\t\t|----------------------------------------------|\n";
    int num=1, price [100];
    for(int i = 0 ; i < 10 ; i++) {
    cout<<"\n\t\t\t\t "<<num<<" . "<<menu[i]<<" "<<Price[i]<<" SR  "<<endl;
    cout<<"\n\t\t\t\t|----------------------------------------------|\n";
    num++; 
	}
    cout<<"\n------------------------------------------------------------------------------------------------------------------------";
};

int service;
int Billl [100];
string The_service[100];
void Total_bill(int arr[] , int size , int service) //function to calculate the bill
{
	arr [size] = Price [service - 1] ;
};

void Total_bill2 (int arr[] , int size , int service )
{ 

	arr [size] = Price [service - 1] ;
};



double sum = 0;
double Discount ( double *discount ) { //returning type function to calculate 10% discount pass by poiter
        
		double const dis = 0.10 ;
		double newTotal = sum * dis;
			return sum-newTotal ;	
};

  double Tax( double &tax)  
  {
  	double calctax;
  	tax = 0.05, calctax;
  	calctax = sum*tax;
  	return sum + calctax;
  	
  } 
     
int main ()
{   //declear our variabals
 
    string Services[10] = {"Hair Cut", "Pedicure and Manicure", "MakeUp", "Bleaching Eyebrows", "Hair Styles", "Massage and Spa" , "Hair and Skin Care", "Protein Hair Treatment", "Hair Dye", "Acrylic Nails" };
    string userName , userPassword,*username , *pass , *Email , menu ; 
    int  booking  , menu1 , view ,PS ,Payment , result_of , loginAttempt = 0 , choice, Confirmation,price [100] ;
    int count1 = 0 , count2 = 0, count3 = 0 ;
    char start; 
    double calctax, tax, ps, *discount;
    Person employee;
	time_t ttime = time(0);
	tm *local_time = localtime(&ttime);
	int year = 1900 + local_time->tm_year; 
    username = new string;
    pass = new string;
    Email = new string;

	cout<<"\n------------------------------------------------------------------------------------------------------------------------";
    cout<<"\n\t\t\t\tHi Dear .. We're so excited to have you in LAMODA SALON \n";
    cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
	cout<<endl<<endl;	
    cout << "Do you have account in LAMODA Salon? Choose Y - To sign in -  |  N - To sign up - : ";
    cin>>start;
    cout<<"--------------------------------------------------------------------------------------";
    	
	if ( start == 'Y' || start =='y' ) { //if statment for sign in 
 
    while (loginAttempt < 3)
    {
        cout<<endl;
        cout<<"\nTo Sign In :";
        cout<<"\n---------------\n";

        cout << "\nEnter Your Username : ";
        cin >> userName;
        cout<<endl;
        cout << "\nEnter Your Password : ";
        cin >> userPassword;
        
        result_of = LogIn(userName, userPassword); //calling the function
        
        if (result_of == 0)
            loginAttempt++;
        else
            break;
    }
    
        if (loginAttempt == 3)
        cout<<"\n\t\t\t\t\tToo many login attempts! The program will now terminate."; //login attempts for 3 times only
    }
    
    else if ( start == 'N' || start == 'n' ){ //if statment for sign up
		
		cout<<endl;
        cout<<"\nTo Sign Up :";
        cout<<"\n---------------\n";

        cout << "\nEnter The Username : ";
        cin >> *username;
        cout<<endl;
        cout << "\nEnter The Password : ";
        cin >> *pass;
        cout<<endl;
        cout << "\nEnter The Email : ";
        cin >> *Email;
		cout<<endl;
        cout<<"\n\t\t\t\t--------- Welcome "<<*username<<" You've registered successfully ---------";
}
    	
    else if ( start != 'Y' || start !='y' || start != 'N' || start != 'n' ) { 
	cout <<"\n\nInvalid Choice!! Only Y Or N \n\n"; 
	cout << "Do you have account in LAMODA Salon? Choose Y - To sign in -  |  N - To sign up - : ";
    cin>>start;
    cout<<"--------------------------------------------------------------------------------------";
    }    
	
    do 
	{
		cout<<endl; //display our services choices
		cout<<"\n------------------------------------------------------------------------------------------------------------------------";
		cout<< "\nChoose The Operation : \n"
		    <<"\n\t\t\t\t|----------------------------------------------|\n"
			<< "\n\t\t\t\t| 1. Services And Prices                       |\n"
		    <<"\n\t\t\t\t|----------------------------------------------|\n"
			<< "\n\t\t\t\t| 2. Appointment Booking                       |\n"
			<<"\n\t\t\t\t|----------------------------------------------|\n"
			<< "\n\t\t\t\t| 3. Package Of The Week                       |\n"
			<<"\n\t\t\t\t|----------------------------------------------|\n"
			<< "\n\t\t\t\t| 4. Complaints And Suggestion                 | \n"
			<<"\n\t\t\t\t|----------------------------------------------|\n"
			<< "\n\t\t\t\t| 5. Privacy Policy                            |\n"
			<<"\n\t\t\t\t|----------------------------------------------|\n"
			<< "\n\t\t\t\t| 0. Exit                                      |\n" 
			<<"\n\t\t\t\t|----------------------------------------------|\n"
			<<"\n\n"
			<<"\nEnter Your Choice : ";	
			cin >>choice;
			cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";			

	switch (choice) //switch statment into a do while 
		{
			case 0:
				break; //exit the loop while enter 0 
				
			case 1: 
			view_menu(); //display the services only
				break ;
				
			case 2: 
			cout<<"\nFILL THE BLANKS TO MAKE YOUR APPOINTMENT PLEASE :\n"; //enter booking an appointmente information
			cout<<"\nEnter your first name : ";
			cin>>Fname;	
			cout<<endl;	
		    cout<<"\nEnter your phone number : ";
			cin>>phonNumber;
		    while(phonNumber.length()!=10){ 
			cout<<"\nThe phone number should be 10 digits\n"; //must enterd 10 digits only
			cout<<"\nEnter your phone number again : ";
			cin>>phonNumber; }
		    cout<<endl;	
		    cout<<"\nEnter the appointment date : \n";
		    cout<<"\nDay : ";
		    cin>>date;
		    cout<<"\nMonth : ";
			cin>>month;
		    cout<<"\n\t - Choose an employee from the following table - ";
		    cout<<endl; 
    
	Employee* DynArray; //struct with dyn array to display employees information
    DynArray = new Employee[3]; //create dynamic array 
    
    DynArray[0].Name = "1) Noura Mohammed";
    DynArray[0].Wday = "* Sunday , Monday , Thursday , Friday , Saturday *";

    DynArray[1].Name = "2) Noura Abduallh";
    DynArray[1].Wday = "* Tuesday , Wednesday , Thursday , Friday , Saturday *";
  
    DynArray[2].Name = "3) Lama Nasser";
    DynArray[2].Wday = "* Sunday , Monday , Tuesday , Wednesday , Thursday *";
   
    cout<<"\nEmployee Details are as follows :\n";
    for (int i = 0; i < 3; i++)
    {
        cout << "\nName : " << DynArray[i].Name << endl; 
        cout << "\nWork's Days : \t" <<  DynArray[i].Wday << endl; 
        cout<<"----------------------------------------------------------------------------\n";
    }
    delete[] DynArray; //delete dynamic array 
    
			cout<<"\nPress 1, 2 or 3 To Continue : ";
	        cin>>employee.employee; 
	        
	        view_menu(); //calling the function
    do{
	        	cout<<"\nTo Book an appointment: \n Comment: Yes (YES/yes) : ";
	        	cin>>menu;
        
            if ( menu == "YES" || "yes" )  //if statement to book an appointmente
            {
	        cout<<"\nChoose the service you want : ";  
            cin>>service;
            
            The_service [count1] = Services [service - 1];
            count1++;
            
            Total_bill(Billl , count2 , service );
            count2++;
            
            Total_bill2(price , count3 , service);
                count3++;
                
            do{
            cout<<"\n\t\t\t( Press 1 to add another service OR 2 to confirm your appointment ) : ";
            cin>>Confirmation;
            
            if(Confirmation == 1 ) //if statmente to add service
            {
			    cout<<"\n\nChoose the service you want : "; 
                cin>>service;
                
                The_service [count1] = Services [service - 1];
                count1++;
                
                Total_bill(Billl , count2 , service );
                count2++;
                Total_bill2(price , count3 , service);
                count3++;
            }
            
		    if (Confirmation == 2 ) //if statmente to add another service
            {
            	
            	Bill(); //calling the bill fuction 
               int num=1; 
                for(int i = 0 ; i < count1 ; i++)
                {cout<<num<<" . "<<The_service[i]<<"   "<<price[i]<<" SR"<<endl; //for loop to display the menu
                num++;
                }
                    
                for(int i = 0 ; i < count2 ; i++) //foe loop to calculate the bill
                {sum += Billl [i];}
                cout<<"\n-------------------------------\n";
                cout<<"\nThe Total Bill : "<<sum<<" SR\n"<<endl;
                cout<< "The Total Bill After Tax: "<< Tax(tax ) << " SR\n"<<endl;
                cout<<"\nPayment Methods : "<<"1) Apple Pay | 2) Mada Card | 3) Bank Transfer : ";
                cin>>Payment;	
                cout<<"\n\n** Booked Successfuly ! Thank You ** \n";	
		        cout<<"\n------------------------------------------------------------------------------------------------------------------------";
                
                if(	sum >= 100)	{ //if statment for discount
			cout<<endl;
			cout<<"\n------------------------------------------------------------------------------------------------------------------------";
			cout<<"\n\t\t\t\tCongratulation , you have got a discount coupon %10 in LAMODA SALON ";

			cout<<"\nYour new total bill is : "<<Discount(discount); //calling the discount function
			cout<<"\n------------------------------------------------------------------------------------------------------------------------";
			}
		   	}        
            } while(Confirmation != 2 );
        }
        
	
		break;
		 	 
    } while (menu != "no" || "NO" );
    
        break; 

			case 3: 
			cout<<"\nEnter your first name : ";
			cin>>Fname;		
			cout<<endl;
		    cout<<"\nEnter your phone number : ";
		    cin>>phonNumber;
		    cout<<endl;
		    cout<<"\nEnter the appointment date : ";
		    cout<<endl;
		    cout<<"\nDays : ";
		    cin>>date;
		    cout<<"Month : ";
			cin>>month;
			Package( menu1 );
			cout<<"\n\nChoose the number of the packege ( 1 , 2 , 3 ) : ";
			cin>>menu1;
		
	if ( menu1 == 1 ) { // if statment to display packge 1 
    Bill();
    cout<<"\n-------------------------------\n";
	cout<<"\nPackage Price : "<<" 120 "<<" SR.";
	cout<<"\n-------------------------------\n";
			    cout<<"Payment Methods : "<<"1) Apple Pay | 2) Mada Card | 3) Bank Transfer : ";
			    cin>>Payment;
			    cout<<"\n\n** Booked Successfuly ! Thank You ** ";	
		}
		
		else if ( menu1 == 2) { // if statment to display packge 2 
    Bill();
	cout<<"\n-------------------------------\n";
	cout<<"\nPackage Price : "<<" 420 "<<" SR.";
	cout<<"\n-------------------------------\n";
			    cout<<"Payment Methods : "<<"1) Apple pay | 2) Mada Card | 3) Bank Transfer : ";
			    cin>>Payment;
			    cout<<"\n\n** Booked Successfully ! Thank You ** ";	
		}
		
		else if ( menu1 == 3 ) { // if statment to display packge 
    Bill();
    cout<<"\n-------------------------------\n";
	cout<<"\nPackage Price : "<<" 350 "<<" SR.";
	cout<<"\n-------------------------------\n";
			    cout<<"Payment Methods : "<<"1) Apple Pay | 2) Mada Card | 3) Bank Transfer : ";
			    cin>>Payment;
			    cout<<"\n\n** Booked Successfully ! Thank You ** ";	
		}	
		
		else {
			cout<<"\n\nInvalid choice!!\n\n";
		} 
			break;
				
			case 4: //void function by overloding
        policy_sug(PS);
        cout<<"\nCHECK OUR FILE .. THANK YOU !";
		       break ;
		       
			case 5: //void function by overloding
        policy_sug(ps);
        cout<<"\nCHECK OUR FILE .. THANK YOU !";
                break;

	        default: 
				cout<<"\n\nInvalid choice!!\n\n";
				break;
		}
		
//delete dynamic variabals 
delete pass;
delete username;
delete Email;

} while (choice != 0);
    return 0;
}
