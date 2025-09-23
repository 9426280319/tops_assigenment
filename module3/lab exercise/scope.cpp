#include <iostream>
using namespace std;

// Global variable
int globalVar = 100;

void showLocal() {
    int localVar = 50;  // Local variable
    cout << "Inside showLocal() - localVar = " << localVar << endl;
    cout << "Inside showLocal() - globalVar = " << globalVar << endl;
}

void modifyGlobal() {
    globalVar = globalVar + 10;  // modifying global variable
    cout << "Inside modifyGlobal() - globalVar = " << globalVar << endl;
}

int main() {
    cout << "In main() - globalVar = " << globalVar << endl;

    showLocal();       // shows local and global
    modifyGlobal();    // modifies global

    cout << "Back in main() - globalVar = " << globalVar << endl;

    
    // cout << localVar;

    return 0;
}

