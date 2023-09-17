/*
Problem Statement

Help India, a famous NGO has been selective in identifying events to raise funds for charity. Suzanne is a volunteer from the 
NGO who was selling tickets to the public for the charity event. She sold X more adult tickets than children tickets and she sold 
twice as many senior tickets as children tickets. Assume that an adult ticket costs $5, a children's ticket costs $2, and a senior
 ticket cost $3.
Suzanne made Y dollars from ticket sales. Help her to find the number of adult tickets, children's tickets, and senior tickets sold.

Note: This is a sample question asked in a Capgemini interview.

Input format :
The first input is an integer value X that corresponds to the number of adult tickets than children tickets.
The second input is an integer value Y that corresponds to the money in dollars made by Suzanne from ticket sales.

Output format :
The first line of the output should display the number of children's tickets sold.
The second line of the output should display the number of adult tickets sold.
The third line of the output should display the number of senior tickets sold.

Sample test cases :
Input 1 :
10
700
Output 1 :
Number of children tickets sold : 50
Number of adult tickets sold : 60
Number of senior tickets sold : 100
*/

// You are using GCC
#include <iostream>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;

    int childrenTickets = (Y-5*X)/13;
    int adultTickets = childrenTickets + X;
    int seniorTickets = 2 * childrenTickets;

    cout << "Number of children tickets sold : " << childrenTickets << endl;
    cout << "Number of adult tickets sold : " << adultTickets << endl;
    cout << "Number of senior tickets sold : " << seniorTickets;

    return 0;
}