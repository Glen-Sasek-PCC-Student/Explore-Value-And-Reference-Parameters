// ------------- FILE HEADER -------------
// Author ✅: 
// Assignment ✅:
// Date ✅:
// Citations: 


// ------------- ZYBOOKS SCORES -------------
// Chapter ✅: 
// Participation ✅: 
// Challenge ✅:
// Labs ✅:


// ------------- DISCORD POSTS -------------
// https://discord.com/invite/URYKKf8YHm
// Count ✅:
// Links (Optional): 


// ------------- DESIGN DOCUMENT -------------
// A. INPUT ✅: 
// B. OUTPUT ✅:
// C. CALCULATIONS ✅:
// D. LOGIC and ALGORITHMS ✅:
//    (Optional) flow chart link or file name: 


// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS ✅: 
// (Optional) Additional tests count:   


// ------------- CODE -------------
#include <iostream>
#include <chrono>

using namespace std;

// Function prototypes (if any)
string appendCharacterByValue(string s, char c) {
  s.push_back(c);
  return s;
}

void appendCharacterByReference(string& s, char& c) {
  s.push_back(c);
}


// Main function
// https://en.cppreference.com/w/cpp/language/main_function.html
int main(int argc, char* argv[]) {
  string s = "S";
  char c = 'C';
  
  for(int i = 1; i < 100; i++) {
    cout << "Iteration: " << i << endl;

    auto start_time = chrono::system_clock::now();

    cout << "appendCharacterByValue" << endl;
    string s2 = appendCharacterByValue(s, c);

    auto duration = chrono::system_clock::now() - start_time;
    auto microseconds = std::chrono::duration_cast<std::chrono::microseconds>(duration).count();
    cout << "MICROSECONDS: " << microseconds << endl;
    cout << endl;

    start_time = chrono::system_clock::now();
    cout << "appendCharacterByReference" << endl;
    appendCharacterByReference(s, c);
    duration = chrono::system_clock::now() - start_time;
    microseconds = std::chrono::duration_cast<std::chrono::microseconds>(duration).count();
    cout << "MICROSECONDS: " << microseconds << endl;
    cout << endl;
    
    s = s + s; // double size
  } 

  return 0;
}

// Function implementations (if any)


// ------------- DESIGN -------------
/* 
Program Name:

Program Description:

Design:
A. INPUT
Define the input variables including name data type. 

B. OUTPUT
Define the output variables including data types. 

C. CALCULATIONS
Describe calculations used by algorithms in step D.  
List all formulas. 
If there are no calculations needed, state there are no calculations.

D. LOGIC and ALGORITHMS
Design the logic of your program using pseudocode or flowcharts. 
Use conditionals, loops, functions or array constructs.
List the steps in transforming inputs into outputs. 
https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt


SAMPLE RUNS
Copy from assignment document.

*/
