#include <iostream>
using namespace std;

class Train {
private:
    int train_number;
    string train_name;
    string source;
    string destination;
    string train_time;

public:
    set_Train_Details()
	{
        cout << "Enter Train Number: ";
        cin >> train_number;
        cout << "Enter Train Name: ";
        cin >> train_name;
        cout << "Enter Source: ";
        cin >> source;
        cout << "Enter Destination: ";
        cin >> destination;
        cout << "Enter Train Time: ";
        cin >> train_time;
    }

    get_Train_Details() 
	{
        cout << "Train Number: " << train_number << endl;
        cout << "Train Name: " << train_name << endl;
        cout << "Source: " << source << endl;
        cout << "Destination: " << destination << endl;
        cout << "Train Time: " << train_time << endl;
    }
};

int main() {
    
    int i;
    
    Train trains[3];

    for (i=0;i<3;++i) 
	{
        trains[i].set_Train_Details();
        cout << endl;
    }

    int search_number;
    
    cout << "Enter Train Number to search : ";
    cin >> search_number;

    for (i=0;i<3;++i) 
	{
            cout << "Train details for Train Number : " << search_number << endl;
            
            trains[i].get_Train_Details();
            
    }
    

    return 0;
}




