//Uses Zeller's Congruence
#include <iostream>

using namespace std;

string zeller (int, int, int);

int main()
{
    int y, m, d;
    cout << "Enter a date in the format YEAR MONTH DATE" << endl;
    cin >> y >> m >> d;

    cout<<zeller(y, m, d);

    return 0;
}

string zeller (int y, int m, int d)
{
    int dayOfWeek, dayOfMonth = d, month = m, year = y;

     if (month == 1 || month == 2)
    {
        month += 12;
        year -= 1;
    }



    //dayOfWeek = (dayOfMonth + ((13 * (month + 1)) / 5) + yearLastTwo + (yearLastTwo / 4) + (yearFirstTwo / 4) + 5 * yearFirstTwo) % 7;

    dayOfWeek = (dayOfMonth + (13 * (month + 1) / 5) + year + (year / 4) - (year / 100) + (year / 400)) % 7;

    switch (dayOfWeek)
    {
        case 0:
            return "Saturday";
            break;
        case 1:
            return "Sunday";
            break;
        case 2:
            return "Monday";
            break;
        case 3:
            return "Tuesday";
            break;
        case 4:
            return "Wednesday";
            break;
        case 5:
            return "Thursday";
            break;
        case 6:
            return "Friday";
            break;

        default:
            return "Unexpected behavior";
            break;
    }
}
