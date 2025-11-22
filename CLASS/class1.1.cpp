#include <iostream>
using namespace std ; 
class DB;  // Forward declaration 
class DM { 
    float meters; 
    float centimeters; 
public: 
    DM() { 
        meters = 0; 
        centimeters = 0; 
    } 
    void read() { 
        cout << "Enter distance in meters and centimeters:\n"; 
        cout << "Meters: "; 
        cin >> meters; 
        cout << "Centimeters: "; 
        cin >> centimeters; 
    } 
    void display() { 
        cout << "Distance: " << meters << " meters and " << centimeters << " centimeters\n"; 
    } 
    friend DM add(DM, DB);  // Friend function 
}; 
class DB { 
    float feet; 
    float inches; 
public: 
    DB() { 
        feet = 0; 
        inches = 0; 
    } 
    void read() { 
        cout << "Enter distance in feet and inches:\n"; 
        cout << "Feet: "; 
        cin >> feet; 
        cout << "Inches: "; 
        cin >> inches; 
    } 
    void display() { 
        cout << "Distance: " << feet << " feet and " << inches << " inches\n"; 
    } 
    friend DM add(DM, DB);  // Friend function 
}; 
// Friend function to add DM and DB, result in DM 
DM add(DM d1, DB d2) { 
    DM result; 
 
// Convert DB to centimeters 
float total_inches = d2.feet * 12 + d2.inches; 
float total_cm = total_inches * 2.54; 
// Convert DM to centimeters 
float dm_cm = d1.meters * 100 + d1.centimeters; 
// Add both 
float sum_cm = dm_cm + total_cm; 
// Convert back to meters and centimeters 
result.meters = int(sum_cm) / 100; 
result.centimeters = int(sum_cm) % 100; 
return result; 
} 
int main() {  
DM d1, result; 
DB d2; 
d1.read(); 
d2.read(); 
result = add(d1, d2); 
cout << "\n--- Result in Metric (DM) ---\n"; 
result.display(); 
return 0; 
}