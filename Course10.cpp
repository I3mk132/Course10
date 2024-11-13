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



/// Project 1
// Calculator
/*
#include <iostream>
using namespace std;

class clsCalculator {

private:
    float _Number = 0;
    float _PrevNumber = 0;
    string _PrevOp = "Clearing ";
    float _PrevResult = 0;

    void GetPrevNumberAndOperation(float PrevNum, string PrevOp){
        _PrevResult = _PrevNumber;
        _PrevNumber = PrevNum;
        _PrevOp = PrevOp;
    }

    bool _isZero(float Number){
        return (Number == 0);
    }

public:

    void Add(float Number){

        _Number += Number;
        GetPrevNumberAndOperation(Number, "Adding ");

    }
    void Subtract(float Number){

        _Number -= Number;
        GetPrevNumberAndOperation(Number, "Subtracting ");

    }
    void Multiply(float Number){

        _Number *= Number;
        GetPrevNumberAndOperation(Number, "Multiplying ");

    }
    void Divide(float Number){

        Number = (_isZero(Number))?1:Number;
        _Number /= Number;
        GetPrevNumberAndOperation(Number, "Dividing ");

    }
    void Clear(){

        _Number = 0;
        GetPrevNumberAndOperation(0, "Clearing ");

    }
    void PrintFinalResult() const {

        cout << "\nFinal Results is : " << _Number << endl;

    }
    void PrintResults(){

        cout << "Results after ";
        cout << _PrevOp;
        cout << _PrevNumber;
        cout << " is: ";
        cout << _Number << endl;

    }
    void CancelLastOperation(){
        GetPrevNumberAndOperation(_Number, "Canceling Last Operation ");
        _Number = _PrevResult;
    }
};

int main(){
    clsCalculator Calculator1;

    Calculator1.Add(10);
    Calculator1.PrintResults();

    Calculator1.Divide(2);
    Calculator1.PrintResults();

    Calculator1.Multiply(15);
    Calculator1.PrintResults();

    Calculator1.Clear();
    Calculator1.PrintResults();

    Calculator1.Add(25);
    Calculator1.PrintResults();

    Calculator1.Subtract(10);
    Calculator1.PrintResults();

    Calculator1.CancelLastOperation();
    Calculator1.PrintResults();

    Calculator1.PrintFinalResult();

    return 0;
}
 */




/// Example 3
// Constructor
/*
#include <iostream>
using namespace std;

class clsAddress {

private:

    string _AddressLine1;
    string _AddressLine2;
    string _ZipCode;
    string _Country;
    string _City;

public:
    // Constructor
    clsAddress(string AddressLine1, string AddressLine2, string Country, string City, string ZipCode){
        _AddressLine1 = AddressLine1;
        _AddressLine2 = AddressLine2;
        _Country = Country;
        _City = City;
        _ZipCode = ZipCode;
    }
    // Copy Constructor
    clsAddress(clsAddress & Old){
        _AddressLine1 = Old.AddressLine1();
        _AddressLine2 = Old.AddressLine2();
        _Country = Old.Country();
        _City = Old.City();
        _ZipCode = Old.ZipCode();
    }

    // Print
    void Print(){
        cout << "============================\n";
        cout << "AddressLine1: " << _AddressLine1 << endl;
        cout << "AddressLine2: " << _AddressLine2 << endl;
        cout << "Country: " << _Country << endl;
        cout << "City: " << _City << endl;
        cout << "ZipCode: " << _ZipCode << endl;
        cout << "============================\n";
    }



    // Setter
    void setAddressLine1(string AddressLine1){
        _AddressLine1 = AddressLine1;
    }
    // getter
    string AddressLine1(){
        return _AddressLine1;
    }



    // Setter
    void setAddressLine2(string AddressLine2){
        _AddressLine2 = AddressLine2;
    }
    // Getter
    string AddressLine2(){
        return _AddressLine2;
    }



    // Setter
    void setCountry(string Country){
        _Country = Country;
    }
    // Getter
    string Country(){
        return _Country;
    }



    // Setter
    void setCity(string City){
        _City = City;
    }
    // Getter
    string City(){
        return _City;
    }



    // Setter
    void setZipCode(string ZipCode){
        _ZipCode = ZipCode;
    }
    // Getter
    string ZipCode(){
        return _ZipCode;
    }


};

int main(){
    clsAddress Address1("balipasa", "apt:122", "Country1", "city1", "98100");
    clsAddress Address2("BattalGazi", "apt:192", "Country2", "city2", "98500");

    clsAddress Address3 = Address1;
    clsAddress Address4 = Address3;

    Address1.Print();
    Address2.Print();
    Address3.Print();
    Address4.Print();

    return 0;
}
 */



/// Example 4
// Destructor
/*
#include <iostream>
using namespace std;

class clsPersons{
private:
    int _Var;
public:
    static int Counter;

    // Constructor
    clsPersons(){
        cout << "\nHello This is Constructor. " << endl;
        Counter++;
    }

    void setVar(int Var){
        _Var = Var;
    }
    void PrintVar(){
        cout << "\n" << _Var << endl;
    }

    static int PrintVAR(int Num){
        return 15 + Num;
    }

    // Destructor
    ~clsPersons(){
        cout << "\nHello This is Destructor. " << endl;

    }

};

int clsPersons::Counter = 0;

int main(){

    clsPersons P1;
    cout << "\n" << clsPersons::Counter << endl;
    clsPersons P2;
    cout << "\n" << clsPersons::Counter << endl;
    clsPersons P3;
    cout << "\n" << clsPersons::Counter << endl;
    clsPersons P4;
    cout << "\n" << clsPersons::Counter << endl;
    clsPersons P5;
    cout << "\n" << clsPersons::Counter << endl;
    clsPersons P6;
    cout << "\n" << clsPersons::Counter << endl;

    cout << "\n\n";
    cout << clsPersons::PrintVAR(20) << endl;

}
*/



/// Person Exercise
/*
#include <iostream>
using namespace std;

class clsPerson{
private:
    int _ID;
    string _FirstName;
    string _LastName;
    string _Email;
    string _Phone;

public:
    // Constructor
    clsPerson(int ID, string FirstName, string LastName, string Email, string Phone){
        _ID = ID;
        _FirstName = FirstName;
        _LastName = LastName;
        _Email = Email;
        _Phone = Phone;
    }

    // Setters
    void setFirstName(string FirstName){
        _FirstName = FirstName;
    }
    void setLastName(string LastName){
        _LastName = LastName;
    }
    void setEmail(string Email){
        _Email = Email;
    }
    void setPhone(string Phone){
        _Phone = Phone;
    }


    // Getter
    int ID(){
        return _ID;
    }
    string FirstName(){
        return _FirstName;
    }
    string LastName(){
        return _LastName;
    }
    string Email(){
        return _Email;
    }
    string Phone(){
        return _Phone;
    }


    void SendEmail(string Subject, string Body){
        cout << "\nEmail Successfully sent to " << _Email << endl;
        cout << "Subject: " << Subject << endl;
        cout << "Body: " << Body << endl;
    }
    void SendSMS(string Message){
        cout << "\nSMS Successfully sent to " << _Phone << endl;
        cout << "Message: " << Message << endl;
    }
    void Print(){
        cout << "=======================================\n";
        cout << "ID: " << _ID << "\n";
        cout << "FirstName: " << _FirstName << "\n";
        cout << "LastName: " << _LastName << "\n";
        cout << "Email: " << _Email << "\n";
        cout << "Phone: " << _Phone << "\n";
        cout << "=======================================\n";
    }
};

int main(){
    clsPerson Person(10, "Ammar", "Alaee", "qwerty@example.com", "05444888775");

    Person.Print();

    Person.SendEmail("HI", "How are you...");
    Person.SendSMS("This is SMS Message");

    return 0;
}
 */



/// Homework Employee Exercise & Inheritance & Homework Developer Exercise
/*
#include <iostream>
using namespace std;

class clsPerson{
private:
    int _ID;
    string _FirstName;
    string _LastName;
    string _Email;
    string _Phone;

public:
    static int Counter;
    // Constructor
    clsPerson(string FirstName, string LastName, string Email, string Phone){
        _FirstName = FirstName;
        _LastName = LastName;
        _Email = Email;
        _Phone = Phone;
        _ID = Counter++;
    }


    // Setters
    void setFirstName(string FirstName){
        _FirstName = FirstName;
    }
    void setLastName(string LastName){
        _LastName = LastName;
    }
    void setEmail(string Email){
        _Email = Email;
    }
    void setPhone(string Phone){
        _Phone = Phone;
    }


    // Getter
    int ID(){
        return _ID;
    }
    string FirstName(){
        return _FirstName;
    }
    string LastName(){
        return _LastName;
    }
    string Email(){
        return _Email;
    }
    string Phone(){
        return _Phone;
    }


    string FullName(){
        return _FirstName + " " + _LastName;
    }
    void SendEmail(string Subject, string Body){
        cout << "\nEmail Successfully sent to " << _Email << endl;
        cout << "Subject: " << Subject << endl;
        cout << "Body: " << Body << endl;
    }
    void SendSMS(string Message){
        cout << "\nSMS Successfully sent to " << _Phone << endl;
        cout << "Message: " << Message << endl;
    }
    void Print(){
        cout << "=======================================\n";
        cout << "ID: " << _ID << "\n";
        cout << "FirstName: " << _FirstName << "\n";
        cout << "LastName: " << _LastName << "\n";
        cout << "Email: " << _Email << "\n";
        cout << "Phone: " << _Phone << "\n";

    }
};


int clsPerson::Counter = 0;

class clsEmployee : public clsPerson {
private:
    string _Title;
    float _Salary;
    string _Department;

public:

    clsEmployee(string FirstName, string LastName, string Email, string Phone,
                string Title, float Salary, string Department
                ) : clsPerson(FirstName, LastName, Email, Phone){

        _Title = Title;
        _Salary = Salary;
        _Department = Department;
    }

    // set
    void setTitle(string Title){
        _Title = Title;
    }
    // get
    string Title(){
        return _Title;
    }


    // set
    void setSalary(int Salary){
        _Salary = Salary;
    }
    // get
    int Salary(){
        return _Salary;
    }


    // set
    void setDepartment(string Department){
        _Department = Department;
    }
    // get
    string Department(){
        return _Department;
    }


    void Print(){
        clsPerson::Print();
        cout << "Title: " << _Title << endl;
        cout << "Salary: " << _Salary << endl;
        cout << "Department: " << _Department << endl;

    }

};


class clsDeveloper : public clsEmployee {
private:
    string _MainProgrammingLanguage;

public:

    clsDeveloper(string FirstName, string LastName, string Email, string Phone,
                 string Title, float Salary, string Department, string MainProgrammingLanguage
                 ): clsEmployee(FirstName, LastName, Email, Phone, Title, Salary, Department){

        _MainProgrammingLanguage = MainProgrammingLanguage;
    }

    // set
    void setMainProgrammingLanguage(string MainProgrammingLanguage){
        _MainProgrammingLanguage = MainProgrammingLanguage;
    }
    // get
    string MainProgrammingLanguage(){
        return _MainProgrammingLanguage;
    }

    // Print Card
    void Print(){
        clsEmployee::Print();
        cout << "MainProgrammingLanguage: " << _MainProgrammingLanguage << endl;
    }
};


int main(){
    clsEmployee Employee("Ammar", "Alaee", "a@example.com",
                         "03438388", "I3mk", 2000.5, "Library");

    clsDeveloper Developer("Fares", "Alaee", "b@example.com",
                           "04888333", "I4mk", 2500.5,
                           "Hospital", "C++");

    Employee.Print();
    Developer.Print();

    Employee.SendEmail("Hello", "You are a Very Good Developer!. ");
    return 0;
}
*/


/// Access Specifiers/Modifiers Review
/*
#include <iostream>
using namespace std;

class clsA {
private:
    // Only accessible inside this class, neither derived classes nor outside class.
    int _Var = 1;
    void _Func1 (){
        cout << "Function1" << endl;
    }

protected:
    // only accessible inside this class and all derived classes, but not outside class
    int Var2 = 2;
    void Func2(){
        cout << "Function2" << endl;
    }

public:
    // Accessible inside this class, all derived classes, and outside class
    int Var3 = 3;
    void Func3(){
        cout << "Function3" << endl;
    }
};

class clsB : public clsA {
public:
    void Func4(){
        cout << Var2 << endl;
        Func2();
    }

    void Func5(){
        cout << Var3 << endl;
        Func3();
    }
};

int main(){
    clsA AA;
    clsB BB;

    BB.Func4();
    BB.Func3();

    system("pause > 0");
    return 0;
}
 */



/// Inheritance Visibility Modes,
/// Inheritance Types
// Syntax:
// class DerivedClassName : <Visibility Mode> BaseClassName {};
/*
#include <iostream>
using namespace std;

class clsA {
private:
    int _Var1 = 1;
    void Func1(){
        cout << 1 << endl;
    }

protected:
    int Var2 = 2;
    void Func2(){
        cout << 2 << endl;
    }

public:
    int Var3 = 3;
    void Func3(){
        cout << 3 << endl;
    }
};

class clsB : private clsA{
private:
    int _Var4 = 4;
    void Func4(){
        cout << 4 << endl;

    }

protected:
    int Var5 = 5;
    void Func5(){
        cout << 5 << endl;

    }

public:
    int Var6 = 6;
    void Func6(){
        cout << 6 << endl;

    }
};

int main(){
    clsA A;
    clsB B;


}
 */

/// Up Casting vs Down Casting
/*
#include <iostream>
using namespace std;

class clsPerson {
private:
    int ID;
    string _FirstName;
    string _LastName;
    string _Email;
    string _Phone;

public:
    int Var1 = 1;
    int Var2 = 2;
    int Var3 = 3;


    string PersonStringFunc1(){
        return _FirstName + " " + _LastName;
    }
    int PersonIntFunc1(){
        return 10;
    }
};

class clsEmployee : public clsPerson {
private:
    int _Age;

public:
    string Word;
    string EmployeeStringFunc1(){
        return to_string(Var1) + " " + to_string(Var2);
    }
    int EmployeeIntFunc1(){
        return Var2 + Var3;
    }
};

int main(){
    clsEmployee Employee1;
    cout << Employee1.EmployeeStringFunc1() << endl;

    clsPerson Person;
    cout <<  << endl;
}
 */



/// Virtual Function
/// Static/Early Binding vs Dynamic/Late Binding
/*
#include <iostream>
using namespace std;

class clsPerson {

public:
    virtual  void Print(){

        cout << "Hi, i'm a person!\n ";

    }


};

class clsEmployee : public clsPerson{

public:
    void Print(){

        cout << "Hi, I'm an Employee\n";

    }

};

class clsStudent : public clsPerson{

public:
    void Print() {

        cout << "Hi, I'm a student\n";

    }


};


int main(){

    clsEmployee Employee;
    clsStudent Student;

    clsPerson* Person1;
    clsPerson* Person2;
    clsPerson* Person3;

    Person1 = &Employee;
    Person2 = &Student;

    Person1->Print();
    Person2->Print();


    clsEmployee Employee1;
    clsStudent Student1;
    // Early-Static Binding
    Employee1.Print();
    Student1.Print();

    clsPerson* PersonA = &Employee1;
    clsPerson* PersonB = &Student1;

    // Last-Dynamic Binding
    PersonA->Print();
    PersonB->Print();

    system("pause>0");
    return 0;
}
 */


/// Virtual Abstracted Class
/*
#include <iostream>
using namespace std;

class clsMobile {
    virtual void Dial(string Phone) = 0;
    virtual void SendSMS(string Phone, string Text) = 0;
    virtual void TakePicture() = 0;
    virtual int GetPhone(string Phone) = 0;
};

class clsIphone : clsMobile {
private:
    string _Phone;

public:
    void Dial(string Phone) {
        cout << Phone << endl;
    };
    void SendSMS(string Phone, string Text){
        cout << Phone << Text << endl;
    };
    void TakePicture(){
        cout << "Very Good Picture. " << endl;
    };
    int GetPhone(string Phone){
      _Phone = Phone;
      return stoi(Phone);
    };

};
*/



/// Friend Classes
/// Friend Function
/*
#include <iostream>
using namespace std;

class clsA {
private:
    int _Var1;

protected:
    int _Var3;

public:
    int Var2;

    clsA(){
        _Var1 = 10;
        Var2 = 20;
        _Var3 = 30;
    }
    // This will Grant access for everything to class B
    friend class clsB;      // Friend Class
    friend int GetSum(clsA A);
};

class clsB {
public:
    void Display (clsA A1){
        cout << endl << "The Value of Var1= " << A1._Var1;
        cout << endl << "The Value of Var2= " << A1.Var2;
        cout << endl << "The Value of Var3= " << A1._Var3 << endl;
    }
};

int GetSum(clsA A){
    return A._Var1 + A.Var2 + A._Var3;
}

int main(){
    clsA A1;
    clsB B1;

    B1.Display(A1);
    cout << endl << GetSum(A1) << endl;

    return 0;
}
*/



/// Structure inside class
/*
#include <iostream>
using namespace std;

class clsPerson {
private:
    string _FullName;

    class clsAddress {
    private:
        string _AddressLine1;
        string _AddressLine2;
        string _City;
        string _Country;

    public:
        clsAddress(string AddressLine1, string AddressLine2, string City, string Country) {
            _AddressLine1 = AddressLine1;
            _AddressLine2 = AddressLine2;
            _City = City;
            _Country = Country;
        }

        void PrintAddress() {
            cout << "\nAddress: \n";
            cout << "===========================================" << endl;
            cout << "AddressLine1: " << _AddressLine1 << endl;
            cout << "AddressLine2: " << _AddressLine2 << endl;
            cout << "City: " << _City << endl;
            cout << "Country: " << _Country << endl;
            cout << "===========================================" << endl;
        }

        // set
        void setAddressLine1(string AddressLine1) {
            _AddressLine1 = AddressLine1;
        }
        // get
        string AddressLine1() {
            return _AddressLine1;
        }

        // set
        void setAddressLine2(string AddressLine2) {
            _AddressLine2 = AddressLine2;
        }
        // get
        string AddressLine2() {
            return _AddressLine2;
        }

        // set
        void setCity(string City) {
            _City = City;
        }
        // get
        string City() {
            return _City;
        }

        // set
        void setCountry(string Country) {
            _Country = Country;
        }
        // get
        string Country() {
            return _Country;
        }
    };

public:
    clsAddress Address = clsAddress("", "", "", "");
    clsPerson(string FullName, string AddressLine1, string AddressLine2, string City, string Country) {
        _FullName = FullName;
        Address = clsAddress(AddressLine1, AddressLine2, City, Country);
    }

    void setFullName(string FullName) {
        _FullName = FullName;
    }

    string FullName() {
        return _FullName;
    }

};

int main() {
    clsPerson Person1("Ammar Alaee", "hirka-i serif mah. ", "balipasa cd. ", "istanbul", "turkey");

    Person1.Address.PrintAddress();
    Person1.Address.setCity("Jeddah");
    cout << Person1.Address.City() << endl;

    system("pause > 0");
    return 0;
}
*/


/// Seperate Classes in Libraries
/*
#include <iostream>
#include "clsDeveloper.h"

using namespace std;

int main(){

    clsDeveloper Developer1("Fares", "Alaee", "al2@example.com",
        "0533343434", "CAEO", 11000, "Hospital", "Python");

    clsDeveloper Developer2("jouseif", "Niga", "h22@example.com",
    "06977", "CEO", 15000, "Hotel", "C#");

    clsDeveloper Developer3("Ammar", "Alaee", "al@example.com",
    "05343434", "CEO", 2000, "school", "C++");


    Developer1.Print();
    Developer2.Print();
    Developer3.Print();

    return 0;
}
*/



/// What is 'This' Pointer?
/// Passing Objects to Functions (ByRef/ByVal)
/*
#include <iostream>
#include <vector>
using namespace std;

class clsA {
private:
    string _FirstName;
    string _LastName;
    int _ID;

public:
    clsA(string FirstName, string LastName, int ID) {
        this->_FirstName = FirstName;
        this->_LastName = LastName;
        this->_ID = ID;
    }

    void Print() {
        cout << "==============================" << endl;
        cout << "FirstName: " << this->_FirstName << endl;
        cout << "LastName: " << this->_LastName << endl;
        cout << "ID: " << this->_ID << endl;
        cout << "=============================" << endl;
    }

    static void Func1(clsA A) {
        A.Print();
    }

    void Func2() {
        Func1(*this);
    }


    void setFirstName(string FirstName) {
        this->_FirstName = FirstName;
    }
    void setLastName(string LastName) {
        this->_LastName = LastName;
    }
    void setID(int ID) {
        this->_ID = ID;
    }

    string FirstName() {
        return _FirstName;
    }
    string LastName() {
        return _LastName;
    }
    int ID() {
        return _ID;
    }
};

void Fun1(clsA A1) {
    A1.setFirstName("A3");
    A1.setLastName("gg");
    A1.setID(102);
}

void Fun2(clsA& A1) {
    A1.setFirstName("Ammar");
    A1.setLastName("Alaee");
    A1.setID(10);
}

int main() {
    clsA A("", "", 0);

    cout << "\n\n'A' Before calling function" << endl;
    A.Print();

    Fun1(A);
    cout << "\n\n'A' After Calling Function ByVal: " << endl;
    A.Print();

    Fun2(A);
    cout << "\n\n'A' After Calling Function ByRef: " << endl;
    A.Print();

    return 0;
}
*/


/// Adding Objects to Vector

/*
#include <iostream>
#include <vector>
using namespace std;

class clsA {
public:
    int X;
    // Parameterized Constructor
    clsA(int Value) {
        this->X = Value;
    }

    void Print() {
        cout << "The value of x=" << X << endl;
    }
};

int main() {
    vector <clsA> v1;
    short NumberOfObjects = 5;

    // inserting object at the end of vector
    for (short i = 1; i <= NumberOfObjects; i++) {
        v1.push_back(clsA(i));
    }

    // printing object content
    for (short i = 0; i < NumberOfObjects; i++) {
        v1[i].Print();
    }



    system("pause > 0");
    return 0;
}
*/

/// Objects and Dynamic Array
/*
#include <iostream>
using namespace std;

class clsA {
public:
    // dummy constructor
    clsA() {};

    // Parametarized Constructor
    clsA(int Value) {
        this->X = Value;
    }
    int X;

    void Print() {
        cout << "The value of x is : " << X << endl;
    }
};

int main() {
    short NumberOfObject = 5;

    // allocating dynamic array
    // of Size NumberOfObjects using new keyword
    clsA *arrA = new clsA[NumberOfObject];

    // calling constructor
    // for each index of array
    for (short i = 0; i < NumberOfObject; i++) {
        arrA[i] = clsA(i+1);
    }

    // Painting content of array
    for (short i = 0; i < NumberOfObject; i++) {
        arrA[i].Print();
    }
    delete[] arrA;

    return 0;
    system(" pause > 0");
}
*/



/// Objects with Parameterized Constructor and Array
/*
#include <iostream>
#include <vector>
using namespace std;

class clsA {
public:
    // dummy constructor
    clsA() {};

    // Parametarized Constructor
    clsA(int Value) {
        this->X = Value;
    }
    int X;

    void Print() {
        cout << "The value of x is : " << X << endl;
    }
};

int main() {

    // Initializing 3 array Objects with function calls of
    // parameterized constructor as elements of that array
    clsA obj[] = { clsA(10), clsA(20), clsA(30)};

    // using print method for each of three elements.
    for (short i = 0; i < 3; i++) {
        obj[i].Print();
    }


    system("pause > 0");
    return 0;
}
*/


