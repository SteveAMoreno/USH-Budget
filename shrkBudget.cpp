// Shrek 4-D Budget
// Created by Steve Moreno
// 7-1-17
// 

int shrkBudget(int pH, int proj)
{
    int hours; // Return variable

    switch (pH)
    {
        // Open for 7 hours
        case 7: if(proj >= MIN_PROJ && proj < MAX_PROJ)
            {
                hours = 66;
            }
            break;

        // Open for 8 hours
        case 8: if(proj >= MIN_PROJ && proj < MAX_PROJ)
            {
                hours = 70;
            }
            break;

        // Open for 9 hours
        case 9: if(proj >= MIN_PROJ && proj < MAX_PROJ)
            {
                hours = 72;
            }
            break;

        // Open for 10 hours
        case 10: if(proj >= MIN_PROJ && proj < 10000)
            {
                hours = 88;
            }
            else if(proj >= 10000 && proj < 14000)
            {
                hours = 91;
            }
            else if(proj >= 15000 && proj < 19000)
            {
                hours = 101;
            }
            break;

    }
    return hours;
}
