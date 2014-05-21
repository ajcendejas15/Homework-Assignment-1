////////////////////
//  Created by AJ Cendejas on 5/20/14.
//  Copyright (c) 2014 AJ Cendejas. All rights reserved.
////////////////////

#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <cstdlib>

void ex02();
void ex03();
void ex04();
int doubleValue (int x);
int sum (int x, int y);
int add1 (int &x);
void ex05();
void outputArray (int array[], int size);
void checkValue (int array[], int size);

const int ARRAYSIZE = 5;

using namespace std;

int main()
{
    srand(time(NULL));
    ex02();
    cout << endl << endl;
    ex03();
    cout << endl << endl;
    ex04();
    cout << endl << endl;
    ex05();
}

// Ex02
void ex02()
{
    //Part a.)
    bool hasPassedTest = true;
    
    //Part b.) Was unsure if you wanted the output for scenario that Y>X so I just threw it in.
    // % 100 just to have manageable numbers.
    int x = rand() % 100;
    int y = rand() % 100;
    if(x >= y)
        cout << "X is greater than or equal to Y." << endl;
    else
        cout << "Y is greater than X." << endl;
    
    //Part c.) Again unsure about scenario that numberOfShares >= 100 so I just threw it in.
    int numberOfShares;
    cout << "\nEnter number of shares: ";
    cin >> numberOfShares;
    if (numberOfShares < 100)
        cout << endl << "Number of Shares is less than 100." << endl;
    else
        cout << endl << "Number of Shares is greater than or equal to 100." << endl;
    
    //Part d.) Again added scenario where boxwidth % bookwidth != 0.
    int boxwidth, bookwidth;
    cout << "\nInput width of the box: ";
    cin >> boxwidth;
    cout << "\nInput width of the book: ";
    cin >> bookwidth;
    if (boxwidth % bookwidth == 0)
        cout << "\nBox width is evenly divisible by book width.\n";
    else
        cout << "\nBox width is not evenly divisible by book width.\n";
    
    //Part e.)
    int shelflife;
    double tempoutside;
    cout << "\nInput the shelf life of the box of chocolate in days: ";
    cin >> shelflife;
    cout << "\nInput the outside tmeperature: ";
    cin >> tempoutside;
    if (tempoutside > 90.0)
        shelflife -= 4;
    cout << "Shelf life of the chocolate is " << shelflife << ".";
}

// Ex03
void ex03()
{
    //Part a)
    double area;
    cout << "Input the area of a square: ";
    cin >> area;
    cout << "\nThe diagonal of the square is: " << sqrt(2*area) << endl;
    
    //Part b)
    char user;
    cout << "\nInput y or n: ";
    cin >> user;
    if (tolower(user) == 'y')
        cout << "Yes" << endl;
    else if (tolower(user) == 'n')
        cout << "No" << endl;
    else
        cout << "Invalid Response." << endl;
    
    //Part c)
    char tab = '\t';

    //Part d)
    string mailingAddress;
    cin.ignore();
    cout << "\nEnter your mailing address (on one line): ";
    getline(cin, mailingAddress);
    cout << endl << mailingAddress;
    //Part e) Using default constructor for string this should be initialized empty.
    string empty;
}

// Ex04
void ex04()
{
    //Part a)
    int user;
    do
    {
        cout << "\nInput a number between 1-10: ";
        cin >> user;
    } while (user <= 0 && user > 10);

    //Part b)
    int total = 0;
    for (int i = 1; i < user; i++)
    {
        total += (i*i*i);
    }
    
    //Part c)
    int i = 0;
    cout << endl;
    do
    {
        cout << "*";
        i++;
    } while(i < user);
    
    //Part d)
    cout << endl << endl;
    for (int i = 2; i <= 40; i+= 2)
    {
        cout << i << " ";
    }
    
    //Part e)
    cout << endl << endl << "Double your value is: " << doubleValue(user);
    
    //Part f) % 100 just to give reasonable numbers.
    int x = rand() % 100, y = rand() % 100;
    cout << endl << "\nSum of Random numbers x and y is: " << sum(x, y);
}

int doubleValue (int x)
{
    return x*2;
}

int sum (int x, int y)
{
    return x+y;
}

//Part g)
int add1 (int &x)
{
    return x++;
}

void ex05()
{
    //Part a)
    int user[ARRAYSIZE];
    for (int i = 0; i < ARRAYSIZE; i++)
    {
        cout << "\nEnter integer " << i+1 << ": ";
        cin >> user[i];
    }
    
    //Part b)
    int sum;
    int product = user[0];
    for (int i = 0; i < ARRAYSIZE; i++)
    {
        sum += user[i];
    }
    for (int i = 1; i < ARRAYSIZE; i++)
    {
        product *= user[i];
    }
    
    //Part c)
    outputArray(user, ARRAYSIZE);
    
    //Part d)
    checkValue(user, ARRAYSIZE);
}

void outputArray (int array[], int size)
{
    cout << endl;
    for (int i = 0; i < size; i ++)
    {
        cout << array[i] << " ";
    }
}

void checkValue (int array[], int size)
{
    int ans;
    bool valueInArray = false;
    cout << endl << "\nEnter an integer to compare with the array: ";
    cin >> ans;
    for (int i = 0; i < size; i++)
    {
        if (ans == array[i])
            valueInArray = true;
    }
    if (valueInArray == true)
        cout << endl << ans << " is in the array.\n";
    else
        cout << endl << ans << " is not in the array.\n";
}