#include <iostream>

bool leap_year(int year){
    bool ly;

    if( (year % 4) == 0){
        if( (year % 100) == 0) {
            if( (year % 400) == 0){
                ly = true;
            }
            else{
                ly = false;
            }
        }
        else{
            ly = true;
        }  
    }
    else{
        ly = false;
    }
    return ly;
}

void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){
    int maxdays = 31;
    if (m1 == 4 || m1 == 6 || m1 == 9 || m1 == 11){
        maxdays = 30;
    }
    else if (m1 == 2){
        if(leap_year(y1) == 1){
            maxdays = 29;
        }
        else{
            maxdays = 28;
        }
    }

    if (d1 < maxdays){
        d2 = d1 + 1;
        m2 = m1;
        y2 = y1;
    }

    if (d1 == maxdays){
        if(m1 == 12){
            y2 = y1 + 1;
            m2 = 1;
            d2 = 1;
        }
        else{
            d2 = 1;
            m2 = m1 + 1;
            y2 = y1;
        }
    }

    // TODO: d1, m1, y1 correspond to the date d1/m1/y1
    // d2, m2, y2 are outputs that the function must compute
    // corresponding to the date d2/m2/y2 
    // which is the day after d1/m1/y1

    // function leap_year is useful for this task
}

int main(){
    // TODO: write a main to test the function

    int d1, d2, m1, m2, y1, y2;

    d1 = 31; m1 = 12; y1 = 2024;
    next_date(d1, m1, y1, d2, m2, y2);
    std::cout << "Date today: " << d1 << " / " << m1 << " / " << y1 << std::endl;
    std::cout << "Date tomorrow: " << d2 << " / " << m2 << " / " << y2 << std::endl;


    d1 = 28; m1 = 2; y1 = 1500;
    next_date(d1, m1, y1, d2, m2, y2);
    std::cout << "Date today: " << d1 << " / " << m1 << " / " << y1 << std::endl;
    std::cout << "Date tomorrow: " << d2 << " / " << m2 << " / " << y2 << std::endl;

}