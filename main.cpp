//Real-World Applications Requiring Arrays
// nattybongo-prog - array-applications-cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    const int MAX = 50;
    string names[MAX];
    int grades[MAX];
    
    int n;
    cout << "How many students? ";
    cin >> n;
    cin.ignore();

    for(int i=0; i<n; i++){
        cout << "Name " << i+1 << ": ";
        getline(cin, names[i]);
        cout << "Grade: ";
        cin >> grades[i];
        cin.ignore();
    }

    int total=0, highest=grades[0], lowest=grades[0];
    int hi=0, lo=0;
    for(int i=0;i<n;i++){
        total+=grades[i];
        if(grades[i]>highest){ highest=grades[i]; hi=i; }
        if(grades[i]<lowest){ lowest=grades[i]; lo=i; }
    }

    cout << "\n--- RESULTS ---\n";
    cout << "Average: " << (double)total/n << endl;
    cout << "Highest: " << highest << " by " << names[hi] << endl;
    cout << "Lowest: " << lowest << " by " << names[lo] << endl;
    
    // Why array needed: O(1) access, contiguous, fixed size
    cout << "Memory contiguous: " << &grades[0] << " to " << &grades[n-1] << endl;
    return 0;
}