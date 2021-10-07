#include <iostream>

#define CONFIG_HAL_BOARD 3
#define CONFIG_HAL_BOARD_SUBTYPE -1

#include <AC_WPNav_OA.h>
#include <AC_WPNav.h>
#include <AC_Loiter.h>
#include <AC_Circle.h>
#include <Copter.h>
//#include "/home/agk/ardupilot/libraries/AC_WPNav/AC_WPNav_OA.h"

using namespace std;

int main() {
    cout << "Memory allocated to create an object of the class AC_WPNav_OA is " << sizeof(AC_WPNav_OA)<< " bytes" << '\n';
    cout << "Memory allocated to create an object of the class AC_WPNav is " << sizeof(AC_WPNav)<< " bytes" << '\n'; 
    cout << "Memory allocated to create an object of the class AC_Loiter is " << sizeof(AC_Loiter)<< " bytes" << '\n';
    cout << "Memory allocated to create an object of the class AC_Circle is " << sizeof(AC_Circle)<< " bytes" << '\n';
    cout << "Memory allocated to create an object of the class Copter is " << sizeof(Copter)<< " bytes" << '\n';
    return 0;
}