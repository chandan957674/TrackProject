#include <iostream>
using namespace std;

void q1();  // WAP to print Hello world.
void q2();  // WAP to read two numbers and print their sum.
void q3();  // WAP to read two nos. and print their sum, difference, product and Quitent.
void q4();  // WAP to read radius of a circle and print area and circumferance.
void q5();  // WAP to read length & breadth of a rectangle and print Area and perimeter.
void q6();  // WAP to swap two nos. using third variable.
void q7();  // WAP to swap two nos. without using third variable.
void q8();  // WAP to read marks of five subjects and print total marks and Averagee.
void q9();  // WAP to read celcius and convert into fahrenheit.
void q10(); // WAP to read second and convert into sec, minute and hour.
void q11(); // WAP to read a number and check it whether it is even or odd.
void q12(); // WAP to read a number and check whether it is positive, negative or zero.
void q13(); // WAP to read three numbers and find the largest among them.
void q14(); // WAP to read three numbers and find the smallest among them.
void q15(); // WAP to read a year and check whether it is a leap year or not.
void q16(); // WAP to read a character and check whether it is vowel or consonant;
void q17(); // WAP to read a character and check whether it is alphabet, digit or special character.
void q18(); // WAP to read the marks of a student and print the grade(A/B/C/D/Fail)
void q19(); // WAP to read a number and check whether it is divisible by 3 or 5.
void q20(); // WAP to read the age of a person and check weather they are eligible to vote or not.
void q21(); // WAP to display all the natural nos. from 1 to n.
void q22(); // WAP to display all the natural nos. from 1 to n in reverse order.
void q23(); // WAP to display all even nos. from 1 to n.
void q24(); // WAP to display all odd nos. from 1 to n.
void q25(); // WAP to find the sum of all natural nos. from 1 to n.
void q26(); // WAP to display sum of all even nos. from 1 to n.
void q27(); // WAP to display sum of all odd nos. from 1 to n.
void q28(); // WAP to find the product of all natural nos. from 1 to n (factorial of n).
void q29(); // WAP to display multiplication of a number m to nth terms.
void q30(); // WAP to display multiplication of a number n.
void q31(); // WAP to count how many nos. are divisible by 3? form 1 to n.
void q32(); // WAP to display all nos. from 1 to n are divisible by 3 and 5.
// Digits and number manupulation.
void q33(); // WAP to count the digits in a number N.
void q35(); // WAP to find the sum of all digit of a no. n;
void q36(); // Write a program to find the product of all digits of a number n.
void q37(); // WAP to reverse a no. n;

void q1()
{
    cout << "---first program---" << endl
         << "Hello world!" << endl;
}
void q2()
{
    double a, b;
    cout << "---Enter two nos. to print their sum:--- " << endl;
    cout << "Enter a:" << endl;
    cin >> a;
    cout << "Enter b:" << endl;
    cin >> b;

    cout << "Sum = " << a + b << endl;
}
void q3()
{
    int a, b;
    cout << "---Enter two nos. for getting sum, difference, product and quitent---" << endl;
    cout << "Enter a:" << endl;
    cin >> a;
    cout << "Enter b:" << endl;
    cin >> b;

    cout << "Sum is =" << a + b << endl
         << "Difference is =" << a - b << endl
         << "Product is =" << a * b << endl
         << "Quitent is =" << a % b << endl;
}
void q4()
{
    double radius;
    cout << "--- find area and circumference of a circle--- " << endl;
    cout << "Enter radius:" << endl;
    cin >> radius;

    cout << "Area of circle is " << 3.14 * radius * radius << endl;
    cout << "Circumfarence of circle is " << 2 * 3.14 * radius << endl;
}
void q5()
{
    double length, breadth;
    cout << "---calculate area and perimeter of a rectangle---" << endl;
    cout << "Enter length:" << endl;
    cin >> length;
    cout << "Enter breadth:" << endl;
    cin >> breadth;

    cout << "Area of rectangle is " << length * breadth << endl;
    cout << "Perimeter of rectangle is " << 2 * (length + breadth) << endl;
}
void q6()
{
    int a, b, c;
    cout << "P6 ---Enter two nos. for swapping using third variable---" << endl;
    cout << "Enter a: " << endl;
    cin >> a;
    cout << "Enter b: " << endl;
    cin >> b;

    c = a;
    a = b;
    b = c;

    cout << "a = " << a << endl
         << "b = " << b << endl;
}
void q7()
{
    int a, b;
    cout << "---Swap two nos. without using third variable---" << endl;
    cout << "Enter a:" << endl;
    cin >> a;
    cout << "Enter b:" << endl;
    cin >> b;

    a = a - b;
    b = a + b;
    a = b - a;
    cout << "---Swapped nos. is---" << endl
         << "a = " << a << endl;

    cout << "b = " << b << endl;
}
void q8()
{
    int Eng, Hindi, Math, Science, Sst;
    cout << "---calculate toral marks and average of a student---" << endl;
    cout << "Enter Eng. marks: " << endl;
    cin >> Eng;
    cout << "Enter Hindi marks: " << endl;
    cin >> Hindi;
    cout << "Enter Math marks: " << endl;
    cin >> Math;
    cout << "Enter Science: " << endl;
    cin >> Science;
    cout << "Enter sst marks: " << endl;
    cin >> Sst;

    cout << "Total obtained marks = " << Eng + Hindi + Math + Science + Sst << endl;
    cout << "Average of marks = " << (Eng + Hindi + Math + Science + Sst) / 5 << endl;
}
void q9()
{
    double celcius; // celcius = 0 freezing || fahrenheit = 32 && celcius = 100 boiling || fahrenheit = 212
    cout << "---convert celcius into fahrenhiet---" << endl;
    cout << "Enter celcius: " << endl;
    cin >> celcius;

    cout << "---converted temperature into fahrenhiet--- " << endl
         << "fahrenhiet = " << (9 * celcius) / 5 + 32 << endl;
}
void q10()
{
    int totalsecond;
    cout << "---convert second into hour, minute and second---" << endl;
    cout << "Enter second: " << endl;
    cin >> totalsecond;

    int hours = totalsecond / 3600;
    int remainingSecond = totalsecond % 3600;
    int minute = remainingSecond / 60;
    int second = remainingSecond % 60;

    cout << "--- conversions are--- " << endl;
    cout << hours << "hours " << minute << "minute and " << second << "seconds" << endl;
}
void q11()
{ // check even or odd.
    int number;
    cout << "---Enter no. and check whether it is even or odd---" << endl;
    cout << "Enter the number: " << endl;
    cin >> number;

    if (number > 0)
    {
        cout << number << " -> It is a positive no. " << endl;
    }
    else
    {
        cout << number << " -> It is a negative no. " << endl;
    }
}
void q12()
{
    int number;
    cout << "---check positive, negative or zero---" << endl;
    cout << "Enter the number: " << endl;
    cin >> number;

    if (number > 0)
    {
        cout << number << " -> It is a positive no. " << endl;
    }
    else if (number == 0)
    {
        cout << number << " -> It is zero. " << endl;
    }
    else
    {
        cout << number << " -> It is negative no. " << endl;
    }
}
void q13()
{ // find the greatest.
    int num1, num2, num3;
    cout << "--- find the greatest no. from three input nos.---" << endl;
    cout << "Enter first number: " << endl;
    cin >> num1;
    cout << "Enter second number: " << endl;
    cin >> num2;
    cout << "Enter third number: " << endl;
    cin >> num3;

    if (num1 >= num2 && num1 >= num3)
    {
        cout << num1 << " is the greatest" << endl;
    }
    else if (num2 >= num3 && num2 >= num1)
    {
        cout << num2 << " is the greatest" << endl;
    }
    else
    {
        cout << num3 << " is the greatest" << endl;
    }
}
void q14()
{
    int num1, num2, num3;
    cout << "---find smallest input no. from three nos.---" << endl;
    cout << "Enter first number: " << endl;
    cin >> num1;
    cout << "Enter second number: " << endl;
    cin >> num2;
    cout << "Enter third number: " << endl;
    cin >> num3;

    if (num1 <= num2 && num1 <= num3)
    {
        cout << num1 << " is the smallest" << endl;
    }
    else if (num2 <= num3 && num2 <= num1)
    {
        cout << num2 << " is the smallest" << endl;
    }
    else
    {
        cout << num3 << " is the smallest" << endl;
    }
}
void q15()
{ // Leap year
    int year;
    cout << "---Find leap of non - leap year---" << endl;
    cout << "Enter the year: " << endl;
    cin >> year;

    if (year % 4 == 0)
    {
        cout << year << " is a leap year. " << endl;
    }
    else
    {
        cout << year << " is not a leap year. " << endl;
    }
}
void q16()
{
    char ch;
    cout << "Enter character: ";
    cin >> ch;

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            cout << ch << " it is a vowel" << endl;
        }
        else
        {
            cout << ch << " it is a consonant" << endl;
        }
    }
    else
    {
        cout << ch << " it is an invalid input" << endl;
    }
}
void q17()
{
    char ch;
    cout << "Enter character: " << endl;
    cin >> ch;

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        cout << ch << " It is an alphabet" << endl;
    }
    else if (ch >= '0' && ch <= '9')
    {
        cout << ch << " it is a digit" << endl;
    }
    else
    {
        cout << ch << " it is a special symbol" << endl;
    }
}

void q18()
{
    double marks;
    cout << "Enter student marks: " << endl;
    cin >> marks;

    if (marks >= 33)
    {
        cout << marks << " You are passed the exam :) " << endl;
        if (marks >= 33 && marks <= 45)
        {
            cout << marks << " Your grade is D " << endl;
        }
        else if (marks >= 46 && marks <= 60)
        {
            cout << marks << " your grade is C " << endl;
        }
        else if (marks >= 61 && marks <= 80)
        {
            cout << marks << " your grade is B " << endl;
        }
        else
        {
            cout << marks << " your grade is A" << endl;
        }
    }
    else
    {
        cout << marks << " You are fail [:(] )" << endl;
    }
}
void q19()
{
    int n;
    cout << "Enter a number to check divisibility by 3 or 5" << endl;
    cin >> n;

    if (n % 3 == 0)
    {
        cout << n << " it is divisible by 3" << endl;
    }
    else if (n % 5 == 0)
    {
        cout << n << " it is divisible by 5" << endl;
    }
    else
    {
        cout << n << " it is not divisible by 3 or 5" << endl;
    }
}
void q20()
{ // check elegibility for vote or not
    int age;
    cout << "Enter the age of the person: " << endl;
    cin >> age;

    if (age >= 18)
    {
        cout << age << " -> Yes you can vote! " << endl;
    }
    else
    {
        cout << age << "-> No :( you are a minnor, you can't vote.)" << endl;
    }
}
void q21()
{ // prints natural nos. 1 to n.
    int n;
    cout << "Enter n nos :" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << n << endl;
    }
}
void q22()
{ // prints n to 1 (reverse order)
    int n;
    cout << "Enter n :" << endl;
    cin >> n;

    for (int i = n; i <= 1; i--)
    {
        cout << n << endl;
    }
}
void q23()
{ // prints all even nos. from 2 to n.
    int n;
    cout << "Enter n :" << endl;
    cin >> n;
    for (int i = 2; i <= n; i + 2)
    {
        cout << n << endl;
    }
}
void q24()
{ // prints all odd nos form 1 to n.
    int n;
    cout << "Enter n: " << endl;
    cin >> n;

    for (int i = 1; i <= n; i + 2)
    {
        cout << n << endl;
    }
}
void q25()
{ // prints sum of all natural nos. from 1 to n.
    int n;
    int sum = 0;
    cout << "Enter n :" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << "Final sum value = " << sum << endl;
}
void q26()
{ // prints sum of all even nos. from 1 to n.
    int n;
    int sum = 0;
    cout << "Enter n :" << endl;
    cin >> n;
    for (int i = 1; i <= n; i + 2)
    {
        sum = sum + i;
    }
    cout << "Final sum value = " << sum << endl;
}
void q27()
{ // prints sum of all odd nos. form 1 to n.
    int n;
    int sum = 0;
    cout << "Enter n :" << endl;
    cin >> n;
    for (int i = 1; i <= n; i + 2)
    {
        sum = sum + i;
        cout << sum << endl;
    }
    cout << "Final sum value = " << sum << endl;
}
void q28()
{ // prints the product of all natural nos. from 1 to n.
    int n;
    int mul = 1;
    cout << "Enter n :" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        mul = mul * i;
    }
    cout << "Final product value = " << mul << endl;
}
void q29()
{ // prints multiplication table of a number n.
    int n;
    int mul = 1;
    cout << "Enter n :" << endl;
    cin >> n;
    for (int i = 1; i <= 10; i + 2)
    {
        mul = n * i;
        cout << n << "*" << i << mul << endl;
    }
    cout << "Final product value to last term " << mul << endl;
}
void q30()
{ // prints multiplication of no. m to nth terms.
    int m, n, a;
    int mul = 1;
    cout << "for getting table of a no: Enter a " << endl;
    cin >> a;
    cout << "it will be first term of starting multiplication to a, Enter M: " << endl;
    cin >> m;
    cout << "for multipling a, form m for nth terms, Enter n:  :" << endl;
    cin >> n;

    for (int i = m; i <= n; i++)
    {
        mul = a * i;
        cout << a << "*" << i << "=" << mul << endl;
    }
    cout << "Final product of no. a form m to nth terms: " << mul << endl;
}
void q31()
{
    int n, div = 0;
    cout << "Enter n: " << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            div = div + 1;
            cout << i << " is divisible by 3" << endl;
        }
        else
        {
            div = div + 0;
        }
    }
    cout << "Total nos. of divisible nos. between 1 to n is = " << div << endl;
}
void q32()
{
    int n;
    int Div3 = 0, Div5 = 0, DivBoth = 0;
    cout << "Enter Nth Number: " << endl;
    cin >> n;

    cout << "\nNumbers which are divisible by 3: " << endl;
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            cout << i << " ";
            Div3++;
        }
    }
    cout << "\nNumbers which are divisible by 3: " << endl;
    for (int i = 1; i <= n; i++)
    {
        if (i % 5 == 0)
        {
            cout << i << " ";
            Div5++;
        }
    }
    cout << "\nNumbers which are divisible by 3: " << endl;
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            cout << i << " ";
            DivBoth++;
        }
    }
    cout << "\ntotal no. of divisible nos. by 3 is: " << Div3 << endl;
    cout << "\ntotal no. of divisible nos. by 5 is: " << Div5 << endl;
    cout << "\ntotal no. of divisible nos. by 3 and 5 is: " << DivBoth << endl;
}
void q33()
{
    int n;
    cout << "Enter Number n: " << endl;
    cin >> n;

    int count = 0;
    int temp = n;

    if (temp == 0)
    {
        count = 1;
    }
    while (temp != 0)
    {
        temp = temp / 10;
        count++;
    }
    cout << "Total digits in " << n << " is " << count << endl;
}
void q35()
{
    int n;
    int sum = 0;
    cout << "Enter the no.: " << endl;
    cin >> n;

    if (n < 0)
    {
        n = -n;
    }

    while (n > 0)
    {
        int lastDigit = n % 10;
        sum = sum + lastDigit;
        n = n / 10;
    }
    cout << "sum of all digits = " << sum << endl;
}
void q36()
{
    int n;
    int product = 1;
    cout << "Enter the no. N: " << endl;
    cin >> n;

    if (n == 0)
    {
        product = 0;
    }
    else if (n < 0)
    {
        n = -n;
    }

    while (n > 0)
    {
        int lastDigit = n % 10;
        product *= lastDigit;
        n = n / 10;
    }
    cout << "Product of the no. N: " << product << endl;
}
void q37(){
    int n;
    int reverse = 0;
    cout << "Enter the no. N: " << endl;
    cin >> n;

    if(n == 0){
        reverse = 0;
    }
    else if(n < 0){
        n = -n;
    }
    while(n > 0){
        
    }

}

int main()
{
    q36();
    return 0;
}
