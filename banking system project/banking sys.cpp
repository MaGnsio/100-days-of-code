//start of the program
//preprocessor directives
#include <iostream>
#include <exception>
#include <fstream>
#include <map>
#include <string>
#define ll long long
#define MIN_BALANCE 500
//exception handling structures
struct opt_error : public std::exception
{
	const char * what () const throw ()
	{
		return "This Option Does Not Exist.\n";
	}
};
struct balance_errror : public std::exception
{
	const char * what () const throw ()
	{
		return "Your Account Balance Can't Be Less than 500\n";
	}
};
struct security_error : public std::exception
{
	const char * what () const throw ()
	{
		return "Your Inputs're not Right. TRY AGAIN\n";
	}
};
struct data_missing :public std::exception
{
	const char * what () const throw ()
	{
		return "Data File Is Missing\n";
	}
};
//program main classes
class account
{
	//class properties
	private:
		ll	acc_num;				//account number (automatically set)
		std::string	acc_name;		//account name (user set)
		long double acc_balance;	//account palance (withdraw-->useer set<--deposit)
		std::string	account_pass;	//account password (user set)
		static	ll	next_acc_num;	//for automatically change the account number
	//class behaviors	
	public:
		//constructors
		account ();
		account	(std::string acc_name, ll acc_balance, std::string account_pass);
		//accessors
		ll get_acc_num ();
		std::string	get_acc_name ();
		long double get_acc_balance ();
		std::string get_acc_pass ();
		static void set_last_acc_num (ll acc_num);
		//mutators
		static ll get_last_acc_num ();
		//facilitators
		void deposit (long double amount);
		void withdraw (long double amount);
		//operations overloading
		friend std::ofstream& operator<< (std::ofstream &ofs,account &acc);
		friend std::ifstream& operator>> (std::ifstream &ifs,account &acc);
		friend std::ostream& operator<< (std::ostream &os,account &acc);
};

class bank
{
	//properties
	private:
		std::map<ll, account> accs_list;	//map structure to list the bank accounts
		std::string bank_password;
	//class behaviors
	public:
		//constructors
		bank ();
		//accessors
		std::string get_bank_password ();
		//mutators
		void set_bank_password (std::string bank_password);
		//facilitators
		account open_acc (std::string acc_name, ll acc_balance, std::string account_pass);
		account view_acc (ll acc_num);
		account deposit (ll acc_num, long double amount);
		account withdraw (ll acc_num, long double amount);
		void close_acc (ll acc_num);
		void show_accs_list ();
		ll total_budget ();
		//enquiries
		bool is_bank_pass_true (std::string bank_password);
		bool is_acc_exist (ll acc_num, std::string acc_name, std::string acc_passs);
		//destructor
		~bank ();
};
//static members
	ll account::next_acc_num = 5000;
	void account::set_last_acc_num (ll last_acc_num)
	{
		next_acc_num = last_acc_num;
	}
	ll account::get_last_acc_num ()
	{
		return next_acc_num;
	}
//start of the main function
int main ()
{
	//an option button for choosing the category
	int option_0;
	//bank object for services calling
	bank mgb;
	mgb.set_bank_password ("mg bank manager");
	std::string bank_password;
	//account object and its properties to store users inputs
	account acc;
	ll acc_num;
	std::string	acc_name;
	ll acc_balance;
	std::string	acc_pass;
	long double amount;
	//a do while function to cntroll the program working span
	do
	{
		//intial menu
		std::cout << "\n\nWelcome to MG Banking System\n\n";
		std::cout << "For Clients Services Enter (1).\n";
		std::cout << "For Managers Services Ebter (2).\n";
		std::cout << "For Exit The System Enter (3).\n";
		//option picker
		std::cout << "Enter Your Choice : ";
		std::cin >> option_0;
		//exception handling for choosing nonexisting number
		try
		{
			if (option_0 != 1 || option_0 != 2 || option_0 != 3)
				throw opt_error ();
		}
		catch (opt_error& o)
		{
			std::cout << o.what ();
			system ("pause");
		}
		//if-else loop for choices
		//for picking category (1) 
		if (option_0 == 1)
		{
			//clearing screen and starting the client program
			system ("CLS");
			std::cout << "Welcome to Clients Service\n\n";
			//option button for clients
			int option_1;
			//clients menu
			std::cout << "For Creating an Account Enter (1).\n";
			std::cout << "For Viewing an Existing Account Enter (2).\n";
			std::cout << "For Making a Deposit into Your Account Enter (3).\n";
			std::cout << "For Withdrawing From Your Account Enter (4).\n";
			std::cout << "For Closing Your Account Enter (5).\n";
			std::cout << "For Going to The Previous Menu Enter (6).\n";
			//option picker
			std::cout << "Enter Your Choice : ";
			std::cin >> option_1;
			//exception handling for choosing nonexisting number
			try
			{
				if (option_1 != 1 || option_1 != 2 || option_1 != 3 || option_1 != 4 || option_1 != 5 || option_1 != 6)
					throw opt_error ();
			}
			catch (opt_error& o)
			{
				std::cout << o.what ();
				system ("pause");
			}
			//switch case for client pick
			switch (option_1)
			{
				//open new account
				case 1:
					system ("cls");
					//taking inputs
					std::cout << "Enter Your Account Name : \n";
					getline (std::cin, acc_name);
					std::cout << "Enter Your Account Intial Balance : \n";
					std::cin >> acc_balance;
					std::cout << "Enter Your Account Password : \n";
					getline (std::cin, acc_pass);
					//exception handling for making account's intial balance < MIN_BALANCE
					try
					{
						if (acc_balance < 0 || acc_balance > MIN_BALANCE)
							throw balance_errror ();
						acc = mgb.open_acc (acc_name, acc_balance, acc_pass);	//saving the data into acc object is optional
						//some msgs
						std::cout << "Your Account has been created\n";
						std::cout << acc << std::endl;
						std::cout << "Remember Your Account number, name and password as They Enable You to Access Your Account.\n";
						std::cout << "If You Forget Your Data You Can Go to Nearest Branch and Restore Them as The Helping System is Still Underunder Construction.";
						system ("pause");
						system ("cls");
					}
					catch (balance_errror& b)
					{
						std::cout << b.what ();
						system ("pause");
					}
					break;
					//view an existing account
				case 2:
					//taking inputs
					std::cout << "Enter Your Account Number : \n";
					std::cin >> acc_num;
					std::cout << "Enter Your Account name : \n";
					getline (std::cin, acc_name);
					std::cout << "Enter Your Account Password : \n";
					getline (std::cin, acc_pass);
					//exception handling for entering wrong inputs
					try
					{
						if (!mgb.is_acc_exist (acc_num, acc_name, acc_pass))
							throw security_error ();
						//calling view account function
						acc = mgb.view_acc (acc_num);
						std::cout << acc;
						system ("pause");
						system ("cls");
					}
					catch (security_error& e)
					{
						std::cout << e.what ();
						system ("pause");
					}
					break;
					//deposit
				case 3:
					//taking inputs
					std::cout << "Enter Your Account Number : \n";
					std::cin >> acc_num;
					std::cout << "Enter The Amount You Want to Deposit : \n";
					std::cin >> amount;
					//calling deposit function
					acc = mgb.deposit (acc_num, amount);
					//some msgs
					std::cout << "Process Done Successfuly\n";
					std::cout << acc;
					system ("pause");
					system ("cls");
					break;
					//withdraw
				case 4:
					//taking inputs
					std::cout << "Enter Your Account Number : \n";
					std::cin >> acc_num;
					std::cout << "Enter Your Account name : \n";
					getline (std::cin, acc_name);
					std::cout << "Enter Your Account Password : \n";
					getline (std::cin, acc_pass);
					std::cout << "Enter The Amount You Want to Withdraw";
					std::cin >> amount;
					//exception handling for entering wrong inputs
					try
					{
						if (!mgb.is_acc_exist (acc_num, acc_name, acc_pass))
							throw security_error ();
						//calling withdraw function
						acc = mgb.withdraw (acc_num, amount);
						//some msgs
						std::cout << "Process Done Successfuly\n";
						std::cout << acc;
						system ("pause");
						system ("cls");
					}
					catch (security_error& e)
					{
						std::cout << e.what ();
						system ("pause");	
					}
					break;
					//close account
				case 5:
					std::cout << "Enter Your Account Number : \n";
					std::cin >> acc_num;
					std::cout << "Enter Your Account name : \n";
					getline (std::cin, acc_name);
					std::cout << "Enter Your Account Password : \n";
					getline (std::cin, acc_pass);
					//exception handling for entering wrong inputs
					try
					{
						if (!mgb.is_acc_exist (acc_num, acc_name, acc_pass))
							throw security_error ();
						//calling close account function
						mgb.close_acc (acc_num);
						//some msgs
						std::cout << "Your Account Has been Successfuly Removed\n";
						std::cout << "Your Balance Will Be Deliverd To You asap\n";
						system ("pause");
						system ("cls");
					}
					catch (security_error& e)
					{
						std::cout << e.what ();
						system ("pause");
					}
					break;
					//go back
				case 6:
					system ("pause");
					system ("cls");
					break;				
			}
		}
		//Managers Menu
		else if (option_0 == 2)
		{
			//clearing screen and starting the managers program
			system ("CLS");
			std::cout << "Welcome to Managers Service\n\n";
			//option button for managers
			int option_2;
			//managers menu
			std::cout << "For Viewing All Accounts Enter (1).\n";
			std::cout << "For Viewing The Bank's Total Budget Enter (2).\n";
			std::cout << "For Going to The Previous Menu Enter (3).\n";
			//option picker
			std::cout << "Enter Your Choice : ";
			std::cin >> option_2;
			try
			{
				if (option_2 != 1 || option_2 != 2 || option_2 != 3)
					throw opt_error ();
			}

			catch (opt_error& o)
			{
				std::cout << o.what ();
				system ("pause");
			}
			//switch case for manager pick
			switch (option_2)
			{
				//view all accounts
				case 1:
				//taking input
				getline (std::cin, bank_password);
				//Bank manager password checker
				try
				{
					if (! mgb.is_bank_pass_true (bank_password))
						throw security_error ();
					//calling show all accounts function
					mgb.show_accs_list ();
				}
				catch (security_error& e)
				{
					std::cout << e.what ();
					system ("pause");
				}
				system ("pause");
				system ("cls");
				//view bank's total budget	
				case 2:
				//taking input
				getline (std::cin, bank_password);
				//Bank manager password checker
				try
				{
					if (! mgb.is_bank_pass_true (bank_password))
						throw security_error ();
					//calling total budget function
					ll total_budget = mgb.total_budget ();
					//msgs
					std::cout << "Bank's Total Budget Is " << total_budget << std::endl;
				}
				catch (security_error& e)
				{
					std::cout << e.what ();
					system ("pause");
				}
				system ("pause");
				system ("cls");
					break;
				//go back	
				case 3:
					system ("pause");
					system ("cls");
					break;		
			}
		}	
	}
	while (option_0 != 3);
	//terminate program
	system ("CLS");
	std::cout << "\n\n\n\n\n\nThanks For Using Our Banking System...\n";
	system ("pause");
}
//end of the main function
//implementation of account methods
	account::account ()		//account's default constructor
	{

	}
	account::account (std::string acc_name, ll acc_balance, std::string account_pass) //account's parameterized cinstructor
	{
		++next_acc_num;

		acc_num = next_acc_num;
		this -> acc_name = acc_name;
		this -> acc_balance = acc_balance;
		this -> account_pass = account_pass;
	}
	ll account::get_acc_num ()	//for accessing account number
	{
		return acc_num;
	}
	std::string	account::get_acc_name ()	//for accessing account name
	{
		return acc_name;
	}
	long double account::get_acc_balance ()	//for accessing account balance (incase)
	{
		return acc_balance;
	}
	std::string account::get_acc_pass ()	//for accessing account password
	{
		return account_pass;
	}
	//deposit & withdraw functins exist in account to help accessing balance, could ignore by using itr in bank function deposit & withdraw
	void account::deposit (long double amount)	//add to balance
	{
		acc_balance += amount;
	}
	void account::withdraw (long double amount)	//take from balance
	{
		//to make sure account remains having its minimum value
		if (acc_balance - amount < MIN_BALANCE)
			throw balance_errror ();
		acc_balance -= amount;
	}
	std::ofstream& operator<< (std::ofstream &ofs,account &acc)	//operator overloading to write in the file
	{
		ofs << "Account Number : " << acc.get_acc_num () << std::endl;
		ofs << "Account Name : " << acc.get_acc_name () << std::endl;
		ofs << "Account Password : " << acc.get_acc_pass () << std::endl;
		ofs << "Account Balance : " << acc.get_acc_balance () << std::endl;
		return ofs;	
	}
	std::ifstream& operator>> (std::ifstream &ifs,account &acc)	//operator overloading to reading from the file
	{
		ifs >> acc.acc_num;
		getline (ifs, acc.acc_name) ;
		getline (ifs, acc.account_pass) ;
		ifs >> acc.acc_balance;
		return ifs;
	}
	std::ostream& operator<< (std::ostream &os,account &acc)	//operator overloading to displaying on screen
	{
		os << "Account Number : " << acc.get_acc_num () << std::endl;
		os << "Account Name : " << acc.get_acc_name () << std::endl;
		os << "Account Password : " << acc.get_acc_pass () << std::endl;
		os << "Account Balance : " << acc.get_acc_balance () << std::endl;
		return os;
	}
//implementation of bank methods
	bank::bank ()	//bank's default
	{
		//when the bank is created (i.e open\run) it should...
		account acc;
		std::ifstream bank_data;
		bank_data.open ("bank.data");
		//check that data file is exist
		if(!bank_data)
			throw data_missing ();
		while (!bank_data.eof ())
		{	
			//backup all data from the file
			bank_data >> acc;
			//add it to the map
			accs_list.insert (std::pair<ll, account> (acc.get_acc_num(), acc));
		}
		//set the last acc number to new what the nextone should be
		account::set_last_acc_num (acc.get_acc_num());
		bank_data.close();
	}
	std::string bank::get_bank_password ()	//for accessing bank password
	{
		return bank_password;
	}
	void bank::set_bank_password (std::string bank_password)	//for setting bank bassword (should be set inside)
	{
		this -> bank_password = bank_password;
	}
	account bank::open_acc (std::string acc_name, ll acc_balance, std::string account_pass)	//for make a new account
	{
		//opening new account
		account acc (acc_name, acc_balance, account_pass);
		accs_list.insert (std::pair<ll, account>(acc.get_acc_num (), acc));
		//make sure that all data are saved inside the file
		std::ofstream bank_data;
		bank_data.open ("bank.data", std::ios::trunc);
		std::map<ll, account>::iterator itr;
		for(itr = accs_list.begin (); itr != accs_list.end (); itr++)
			bank_data << itr -> second;
		bank_data.close ();
		return acc;
	}
	account bank::view_acc (ll acc_num)	//for viewing an existing account
	{
		std::map<ll, account>::iterator itr = accs_list.find(acc_num);
		return itr -> second;	
	}
	account bank::deposit (ll acc_num, long double amount)	//for depositing into an existing account
	{
		std::map<ll, account>::iterator itr = accs_list.find(acc_num);
		itr -> second.deposit (amount);
		return itr -> second;
	}
	account bank::withdraw (ll acc_num, long double amount)	//for withdrawing from an existing account
	{
		std::map<ll, account>::iterator itr = accs_list.find(acc_num);
		itr -> second.withdraw (amount);
		return itr -> second;
	}
	void bank::close_acc (ll acc_num)	//for closing an existed account
	{
		std::map<ll, account>::iterator itr = accs_list.find(acc_num);
		accs_list.erase (acc_num);
	}
	void bank::show_accs_list ()	//for showing all existing account (bank managers property)
	{
		std::map<ll, account>::iterator itr;
		for (itr = accs_list.begin (); itr != accs_list.end (); ++itr)
			std::cout << itr -> second << std::endl;
	}
	ll bank::total_budget ()	//for showing bank total budget (bank managers property)
	{
		ll sum = 0;
		std::map<ll, account>::iterator itr;
		for(itr = accs_list.begin (); itr != accs_list.end (); ++itr)
		{
			sum += itr -> second.get_acc_balance ();
		}
		return sum;
	}
	bool bank::is_bank_pass_true (std::string bank_password)	//to checking if the bank password is right
	{
		if (bank_password == get_bank_password ())
			return true;
		else return false;
	}
	bool bank::is_acc_exist (ll acc_num, std::string acc_name, std::string acc_pass)	//to checking if the account is exist
	{
		std::map<ll, account>::iterator itr=accs_list.find(acc_num);

		if (itr -> second.get_acc_name () == acc_name && itr -> second.get_acc_pass () == acc_pass)
		{
			return true;
		}
		else return false;
	}
	bank::~bank ()	//bank's destructor
	{
		//to make sure that all data are saved in the file and close the file
		std::ofstream bank_data;
		bank_data.open ("bank.data", std::ios::trunc);
		std::map<ll, account>::iterator itr;
		for (itr = accs_list.begin (); itr != accs_list.end (); ++itr)
			bank_data << itr -> second;
		bank_data.close();
	}
//end of the program