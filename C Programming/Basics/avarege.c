#include <stdio.h>

int main() {
    int m_1,m_2,m_3,m_4;
    float average;

    m_1 = 78;
    m_2 = 50;
    m_3 = 44;
    m_4 = 20;

    average = (m_1 + m_2 + m_3 + m_4) / 4.0;

    if (average >= 50) {
        printf("The average is %.2f, which is a passing grade.\n", average);
    } 
    else {
        printf("The average is %.2f, which is a failing grade.\n", average);
    }
    
    return 0;
}