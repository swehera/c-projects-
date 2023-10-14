#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h>
using namespace std;



struct emp {
    string name,department;
    int roll;
};
//vector <emp> e;
emp e[100];
int total = 0;
void empdata() {
    int choice;
    cout << "\t\thow many employee to store: " ;
    cin >> choice;
    for(int i = total; i < total+choice; i++) {
        cout << "\t\tEmployee No: " << i + 1 << endl;
        cout << "\t\tEmployee Name: ";
        cin >> e[i].name;
        cout << "\t\tDepartment Name: ";
        cin >> e[i].department;
        cout << "\t\tRoll No: " ;
        cin >> e[i].roll;
        cout << "\t\t-----------------------------" << endl;
    }
    total = total + choice;
}






void show() {
    cout << "\t\t\t\tAll Employee Data"<<endl;
    cout << "\t\t-----------------------------"<<endl;
    if(total!=0) {
        for(int i = 0; i < total; i++) {
            cout << "\t\t|  Employee No - " << i+1 << endl;
            cout << "\t\t|  Employee Name: "<< e[i].name << endl;
            cout << "\t\t|  Department Name: "<< e[i].department << endl;
            cout << "\t\t|  Roll No: "<< e[i].roll << endl;
            cout << "\t\t-----------------------------" << endl;
        }
    } else {
        cout << "\t\tYour record is empty" << endl;
    }
}








void search() {
    cout << "\t\t\t\tSearch option"<<endl;
    cout << "\t\t------------------------------------"<<endl;
    cout << endl;
    if(total!=0) {
        int roll;
        cout << "\t\tEnter the Roll of employee for find details" << endl;
        cout << "\t\tEmployee Roll: " ;
        cin >> roll;
        cout << "\t\t-----------------------------" << endl;
        for(int i = 0; i < total; i++) {
            if(roll==e[i].roll) {
                cout << "\t\t|  Employee No - " << i+1 << endl;
                cout << "\t\t|  Employee Name: "<< e[i].name << endl;
                cout << "\t\t|  Department Name: "<< e[i].department << endl;
                cout << "\t\t|  Roll No: "<< e[i].roll << endl;
                cout << "\t\t-----------------------------" << endl;
                break;
            }
            if(i==total-1) {
                cout << "No record found" << endl;
            }
        }
    }else {
        cout << "\t\tYour record is empty" << endl;
    }
}





void update() {
    cout << "\t\t\t\tUpdate option"<<endl;
    cout << "\t\t------------------------------------"<<endl;
    cout << endl;
    if(total!=0) {
        int roll;
        cout << "\t\tEnter the Roll for update" << endl;
        cout << "\t\tEmployee Roll: " ;
        cin >> roll;
        cout << "\t\t--------Previous Data--------" << endl;
        for(int i = 0; i < total; i++) {
            if(roll==e[i].roll) {
                cout << "\t\t|  Employee No - " << i+1 << endl;
                cout << "\t\t|  Employee Name: "<< e[i].name << endl;
                cout << "\t\t|  Department Name: "<< e[i].department << endl;
                cout << "\t\t|  Roll No: "<< e[i].roll << endl;
                cout << "\t\t-----------------------------" << endl;
                cout << endl;
                cout << "\t\t--------Update Data--------" << endl;

                cout << "\t\tEmployee Name: ";
                cin >> e[i].name;
                cout << "\t\tDepartment Name: ";
                cin >> e[i].department;
                cout << "\t\tRoll No: " ;
                cin >> e[i].roll;
                cout << "\t\t-----------------------------" << endl;

                break;
            }
            if(i==total-1) {
                cout << "\t\tNo record found" << endl;
            }
        }

    }else {
        cout << "\t\tYour record is empty" << endl;
    }
}






void del() {
    cout << "\t\t\t\tUpdate option"<<endl;
    cout << "\t\t------------------------------------"<<endl;
    cout << endl;
    if(total!=0) {
        char user;
        cout << "\t\tPress 1 to delete full record" << endl;
        cout << "\t\tPress 2 to delete specific record" << endl;
        user = getch();
        if(user=='1') {
            total=0;
            cout << "\t\tAll record is deleted" << endl;
        } else if(user=='2') {
            int roll;
            cout << "\t\tEnter the Roll for delete" << endl;
            cout << "\t\tEmployee Roll: " ;
            cin >> roll;
            for(int i = 0; i < total; i++) {
                if(e[i].roll==roll) {
                    e[i].name = e[i+1].name;
                    e[i].department = e[i+1].department;
                    e[i].roll = e[i+1].roll;
                    total--;
                    cout << "\t\tYour required record is deleted" << endl;
                    break;
                    }
                    if(i==total-1) {
                        cout << "\t\tNo such record found " << i <<endl;
                    }
            }
        }
    }else {
        cout << "\t\tYour record is empty" << endl;
    }
}
//Admin option
char user;
/*
void adminOption() {
    cout << endl;
    cout << endl;
    while(1) {
        cout << "\t\tPress 1 to store data" << endl;
        cout << "\t\tPress 2 to show data" << endl;
        cout << "\t\tPress 3 to search data" << endl;
        cout << "\t\tPress 4 to update data" << endl;
        cout << "\t\tPress 5 to delete data" << endl;
        cout << "\t\tPress 6 to logout data" << endl;
        cout << "\t\tPress 7 to exit data" << endl;
        user = getch();
        switch(user) {
            case '1':
                empdata();
                break;
            case '2':
                show();
                break;
            case '3':
                search();
                break;
            case '4':
                update();
                break;
            case '5':
                del();
                break;
            case '6':
                adminLogin();
            default:
                cout << "\aInvalid Input" << endl;
                break;
        }
    }
}
*/
//Admin SignUp Function
string username, password, check_name,check_pass;

void adminSignUp() {
    cout << endl;
    cout << endl;
    cout << "\t\tEmployee Management System" << endl;
    cout << "\t\t         Sign Up          " << endl;
    cout << "\t\t--------------------------" << endl;
    cout << endl;
    cout << "\t\tEnter your username: " ;
    cin >> username;
    cout << "\t\tEnter your password: " ;
    cin >> password;
    cout << "\t\tYour id is creating please wait";
    for(int i = 0; i < 8; i++) {
        cout << ".";
        Sleep(1000);
    }
    cout << "\n\t\tSuccessfully ID created" << endl;
    system("CLS");
}

// Admin Login Function
void adminLogin() {
    start:
    cout << endl;
    cout << endl;
    cout << "\t\tEmployee Management System" << endl;
    cout << "\t\t           Login          " << endl;
    cout << "\t\t--------------------------" << endl;    
    cout << endl;
    cout << "\t\tEnter username: ";
    cin >> check_name;
    cout << "\t\tEnter password: ";
    cin >> check_pass;
    if(check_name==username && check_pass==password) {
            system("CLS");
            cout << endl;
            cout << endl;
    while(1) {
        cout << endl;
        cout << endl;
        cout << "\t\t***********************************" << endl;
        cout << "\t\tPress 1 to store data" << endl;
        cout << "\t\tPress 2 to show data" << endl;
        cout << "\t\tPress 3 to search data" << endl;
        cout << "\t\tPress 4 to update data" << endl;
        cout << "\t\tPress 5 to delete data" << endl;
        cout << "\t\tPress 6 to logout data" << endl;
        cout << "\t\tPress 7 to exit data" << endl;
        cout << "\t\t***********************************" << endl;
        user = getch();
        system("CLS");
        switch(user) {
            case '1':
                empdata();
                break;
            case '2':
                show();
                break;
            case '3':
                search();
                break;
            case '4':
                update();
                break;
            case '5':
                del();
                break;
            case '6':
                goto start;
            case '7':
                exit(0);
            default:
                cout << "\aInvalid Input";
                break;
        }
    }
    } else if(check_name != username) {
        cout << "\t\tIncorrect username";
        Sleep(3000);
        goto start;
    } else if(check_pass != password) {
        cout << "\t\tIncorrect password";
        Sleep(3000);
        goto start;
    }
}


int main() {

    adminSignUp();
    adminLogin();

    return 0;
}
