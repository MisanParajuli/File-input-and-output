#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {

    //intialize vector for storing superhero names
    vector<string>superhero;
    cout << "Enter your 7 favourite Superheroes: " << endl;
    string hero;

    //taking names as input from users
    for (int i = 0; i<7; i++){
        getline(cin, hero);
        superhero.push_back(hero);
    }



    //opening a new file and putting user given values to it
    ofstream file ("heroes.txt");
    file << "My favourite superheroes are: " << endl <<endl;
    for (int i = 0; i<7; i++){
        file << i+1 << ". ";
        file << superhero.at(i) << endl;
    }
    file.close();


    // adding your own value at the end of the file content
ofstream files ("heroes.txt", ios::app);
if (files.is_open()){
    files <<"8. Black Widow" << endl;
    files.close();
}
else cerr << "Error opening the file ";


//reading content from the file
    ifstream inputfile ("heroes.txt");
    string line;
    if (inputfile.is_open()) {
        while (getline(inputfile, line)) {
            cout << line << endl;
        }
        file.close();
    }
    else cerr << "Error reading the file ";

    return 0;
}
