#include <iostream>
#include <string>

using namespace std;
int main () {

    //Name of user
    cout << "What is your name?" <<endl;
    string name;
    getline(cin, name);

    //Greeting user
    cout << "\nHello, " << name << " Let's Get Started With The Quiz!. \n\n";
    
    //Rules
    cout << "Rule 1 : Must Answer The Questions With The Proper Nouns." << endl;
    cout << "Rule 2 : Must Answer The Questions In Full Sentences, For Example Not Using Acronyms. \n\n";
    cout << "Press ENTER To Go To The Questions \n\n";
    string rules;
    getline(cin, rules);
    if (rules == "") {
        cout << "";
    }
    else {
        cout<<" \n";
    }
    
    //Questions
    cout << "Questions 1 : What is the Capital Of Malaysia?" << endl;
    string answer1;
    getline(cin, answer1);
    if (answer1 == "Kuala Lumpur") {
        cout << "Correct! \n\n"; }
        else {
            cout << "Sorry, the answer is Kuala Lumpur. \n\n";
        
    }

    cout << "Questions 2 : Who Is The First Prime Minister In Malaysia?" << endl;
    string answer2;
    getline(cin, answer2);
    if (answer2 == "Tunku Abdul Rahman") {
        cout << "Correct! \n\n"; }
        else {
            cout << "Sorry, the answer is Tunku Abdul Rahman. \n\n";
        
    }

    cout << "Question 3 : When did Malaysia become independent?" << endl;
    string answer3;
    getline(cin, answer3);
    if (answer3 == "31 August 1957") {
        cout << "Correct! \n\n"; 
    }
    else {
        cout << "Sorry, the answer is 31 August 1957. \n\n";
    }

    cout << "Last Questions : Who is the current Prime Minister in Malaysia?" << endl;
    string answer4;
    getline (cin, answer4);
    if (answer4 == "Anwar Ibrahim") {
        cout << "Correct. \n\n"; }
        else {
            cout << "Sorry, the answer is Anwar Ibrahim. \n\n";
        
    }

    cout << "Thanks For Playing The Quiz, " << name << "! \n\n";

    // hehe saja nak credit diri sendiri >_<
    cout << "Coded By Sakura_Newbie" << endl;
    return 0;

}
