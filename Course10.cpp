/// ================================= Course 10 =========================================
/// ==================== Object Oriented Programming (OOP) ==============================

/// Example 1
/*
#include <iostream>
using namespace std;

class clsPerson {

public:
    string FirstName;
    string LastName;
    short Age;

    void PrintUserCard(){
        cout << PrivateClass() << endl;
        cout << "-------------------------\n";
        cout << "Full Name = " << FullName() << "\n";
        cout << "Age = " << Age << "\n";
        cout << "-------------------------\n";
    }

protected:
    string FullName(){
        return FirstName + " " + LastName;
    }

private:
    string PrivateClass(){
        return FirstName + " " + LastName + " " + to_string(Age);
    }

};

int main(){
    clsPerson Person1, Person2, Person3;
    Person1.FirstName = "Ammar";
    Person1.LastName = "Alaee";
    Person1.Age = 20;

    Person2.FirstName = "Mohammed";
    Person2.LastName = "Abu-Hadhoud";
    Person2.Age = 30;

    Person3.FirstName = "Braa";
    Person3.LastName = "The-Nigga";
    Person3.Age = 42;

    Person1.PrintUserCard();
    Person2.PrintUserCard();
    Person3.PrintUserCard();

    return 0;
}
 */



/// Example 2
/*
#include <iostream>
#include <string>
using namespace std;

class clsEmployees {
private:
    int _ID = 10;
    string _FirstName;
    string _LastName;
    int _Salary;

public:

    // Getter - This is Read Only Variable.
    int getID(){
        return _ID;
    }
    //__declspec(property(get = getID)) int ID;


    // Setter
    void setFirstName(string FirstName){
        _FirstName = FirstName;
    }
    // Getter
    string getFirstName(){
        return _FirstName;
    }
    //__declspec(property(get = getFirstName, put = setFirstName)) string FirstName;


    // Setter
    void setLastName(string LastName){
        _LastName = LastName;
    }
    // Getter
    string getLastName(){
        return _LastName;
    }
    //__declspec(property(get = getFirstName, put = setFirstName)) string FirstName;


    // Setter
    void setSalary(int Salary){
        _Salary = Salary;
    }
    // Getter
    int getSalary(){
        return _Salary;
    }
    //__declspec(property(get = getFirstName, put = setFirstName)) string FirstName;

};



int main(){
    clsEmployees Employee1, Employee2, Employee3;

    Employee1.setFirstName("Ammar");
    Employee1.setLastName("Alaee");
    Employee1.setSalary(15000);

    Employee2.setFirstName("Fares");
    Employee2.setLastName("Alaee");
    Employee2.setSalary(20000);

    Employee3.setFirstName("Mohammed");
    Employee3.setLastName("Fehim");
    Employee3.setSalary(25000);

    cout << Employee1.getID() << endl;
    cout << Employee1.getFirstName() << endl;
    cout << Employee1.getLastName() << endl;
    cout << Employee1.getSalary() << endl;

    cout << "\n";

    cout << Employee2.getID() << endl;
    cout << Employee2.getFirstName() << endl;
    cout << Employee2.getLastName() << endl;
    cout << Employee2.getSalary() << endl;

    cout << "\n";

    cout << Employee3.getID() << endl;
    cout << Employee3.getFirstName() << endl;
    cout << Employee3.getLastName() << endl;
    cout << Employee3.getSalary() << endl;

    return 0;
}
*/

