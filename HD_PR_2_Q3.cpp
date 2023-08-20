#include <iostream>
using namespace std;

class Staff {
private:
    string name;
    string account_number;
    string phone_number;
    string email;

public:
    setDetails() 
	{
        cout << "Enter the name of staff: ";
        cin >> name;

        cout << "Enter the account number of staff: ";
        cin >> account_number;

        cout << "Enter the phone number of staff: ";
        cin >> account_number;
        
        cout << "Enter the email of staff: ";
        cin >> email;

    }

    void depositMoney() 
	{
    }

    void transferMoney() 
	{
    }

    void withdrawMoney() 
	{
    }
};

int main() 
{
    char choice;
    
    cout << "Bank Management System" << endl;
    cout << "Designed and Programmed by - Hasti Dholakiya" << endl;
    cout << "Trainer - Vraj Godhani" << endl;

    cout << "Press any key and enter to continue..." << endl;
    cin >> choice;

    cout << "Press A to log in as administrator or S to log in as STAFF: ";
    cin >> choice;

    if (choice == 'S' || choice == 's') {
        cout << "Welcome as STAFF" << endl;
        Staff staff;
        staff.setDetails();

        int process;
        
        cout << "Press 1 to deposit money" << endl;
        cout << "Press 2 to transfer money" << endl;
        cout << "Press 3 to withdraw money" << endl;
        cin >> process;

        switch (process) {
            case 1:
                staff.depositMoney();
                break;
            case 2:
                staff.transferMoney();
                break;
            case 3:
                staff.withdrawMoney();
                break;
            default:
                cout << "Invalid operation choice" << endl;
        }
    } else {
        cout << "Invalid choice" << endl;
    }

    return 0;
}

