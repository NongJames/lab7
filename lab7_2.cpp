#include <iostream>
#include <string>
using namespace std;

void chatWithFahsai() {
    string name, studentID, movie, day;

    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
    cout << "?????: ";
    getline(cin, name);

    cout << "Fahsai: Wow!!! " << name << " is a really cool name.\n";

    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cout << name << ": ";
    getline(cin, studentID);

    int gear = stoi(studentID.substr(0, 2)) - 12;

    cout << "Fahsai: I think you may be GEAR " << gear << ". I have a free movie ticket for you.\n" ;
    cout << "Fahsai: Let's go to the cinema together!!!\n";

    cout << "Fahsai: What movie do you want to watch?\n" ;
    cout << name << ": ";
    getline(cin, movie);

    cout << "Fahsai: So....which day are you free to go with me?\n";
    cout << name << ": ";
    getline(cin,day);

    cout << "Fahsai: " << day << "....that is OK!!! I'm looking forward to watching " << movie << " with you.\n";

    cout << name << ": ";
    cout << "Fahsai: 555+ see you " << day << ". Bye Bye \\(^ ^)/\n";
}

int main() {
    chatWithFahsai();

    return 0;
}