// Title:
// Purpose:
// Author: Fransiskus Agapa
// Have fun - Enjoy the process - Practices make improvement

#include "Person.h"
using std::cout;
using std::endl;
using std::cin;

int main()
{
    cout << endl;
    Person perO("Andy", "1234567899", 4);
    Person perT("Bandy", "1122334455", 6);
    Person perTh("Cindy", "9876543211", 8);

    cout << "There are three people that have been recorded " << endl;
    cout << perO.ToString() << endl;
    cout << perO.ToJson() << endl;
    cout << endl;
    cout << perT.ToString() << endl;
    cout << perT.ToJson() << endl;
    cout << endl;
    cout << perTh.ToString() << endl;
    cout << perTh.ToJson() << endl;




  
 return 0; 
}
