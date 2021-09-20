#include<iostream>
#include<string>
using namespace std;
class Account
{
public: //int main and other functions have access to these member functions(methods)
		Account(unsigned int an, string fn, string ln, double b) : firstName{ "Zeinab" },
		LastName{ "Sattarian" },
		accountNumber(99152211),
		balance(100) {
		//class' constructor
		setAccountNumber(an);
		setFirstName(fn);
		setLastName(ln);
		setBalance(b);
	}
	//setters
	void setAccountNumber(unsigned int an) { //setting account number
		accountNumber = an;
	}
	void setFirstName(string fn) { //setting first name
		firstName = fn;
	}
	void setLastName(string ln) { //setting last name
		LastName = ln;
	}
	void setBalance(double b) { //setting balance
		if (b > 0) {
			balance = b;
		}
	}
	//getters
	unsigned int getAccountNumber() { //getting account number
		return accountNumber;
	}
	string getFirstName() { //getting first name
		return firstName;
	}
	string getLastName() { //getting last name
		return LastName;
	}
	double getBalance() { //getting balance
		return balance;
	}
private: // only the class itself can access data members
	unsigned int accountNumber;
	string firstName;
	string LastName;
	double balance;
};
int main()
{
	Account object(99152211, "Zeinab", "sattarian", 100); // creating object and passing arguments to the constructor
		//displaying the stored information
		cout << "your account number is " << object.getAccountNumber() << endl;
	cout << "your first and last name is " << object.getFirstName() << " " <<
		object.getLastName() << endl;
	cout << "your balance is " << object.getBalance() << "$" << endl;
}
