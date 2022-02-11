#include <iostream>
using namespace std;
int main()
{
	double w_income;
	double m_income;
	double gym = 20;
	double crunch = 8;
	double fun = 8;
	double phone = 220;
	double r_balance;
	double chase1 = 100;
	double chase2 = 100;
	double paypal = 100;
	double affirm = 150;
	double synchrony = 50;
	double gas = 160;
	double balance = 0;
	int months = 0;
	double m_expenses = 0;
	double xbox = 10;
	double acorns = 201;
	double twitch = 5;
	double r_income;
	


	cout << "Enter number of months: ";
	cin >> months;
	//ideally app will ask days, weeks or months? then ask for time span input
	cout << "Current balance: ";
	cin >> balance;
	//enter current bank account balance, later will ask if you want to add other accounts (savings, investments, etc.)
	cout << "Income: ";
	cin >> w_income; 
	m_income = w_income * 4;
	cout << "Monthly income: " << m_income << endl;
	
	//income should have option for daily, weekly, or monthly
	cout << "Monthly expense 1: " << xbox << endl;
	cout << "Monthly expense 2: " << fun << endl;
	cout << "Monthly expense 3: " << gym << endl;
	cout << "Monthly expense 4: " << gas << endl;
	cout << "Monthly expense 5: " << crunch << endl;
	cout << "Monthly expense 6: " << phone << endl;
	cout << "Monthly expense 7: " << chase1 << endl;
	cout << "Monthly expense 8: " << chase2 << endl;
	cout << "Monthly expense 9: " << paypal << endl;
	cout << "Monthly expense 10: " << synchrony << endl;
	cout << "Monthly expense 11: " << affirm << endl;
	cout << "Monthly expense 12: " << acorns << endl;
	cout << "Monthly expense 13: " << twitch << endl;



	m_expenses = phone + fun + gas + chase1 + chase2 + paypal + affirm + synchrony + twitch + xbox + acorns + crunch + gym;

	cout << "Total monthly expenses: " << m_expenses << endl;

	r_income = m_income - m_expenses;

	cout << "Total remaining income: " << r_income << endl;
	

	r_balance = (balance + (m_income * months)) - (m_expenses * months);

	cout << "In "<< months << " months, your remaining balance will be: " << r_balance << endl;


	return 0;
}


