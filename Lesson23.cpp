#include <iostream>

using namespace std;

class User {
    string name;
    string surName;
    int age;
public:
    static int amountOfUsers;

    User(string name, string surName, int age) {
        this->name = name;
        this->surName = surName;
        this->age = age;
        IncrementAmountOfUsers();

    }
    static void IncrementAmountOfUsers() {
        amountOfUsers++;
    }
};

int User::amountOfUsers = 1;

int main() {
    User obj = User("Alexey", "Marahovskiy", 16);
    cout << User::amountOfUsers << endl;
}