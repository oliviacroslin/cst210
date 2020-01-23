// Olivia Croslin
// This is my own work

#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

int main() {
//    int a,b,c,d,e;
//
//    cout << "Enter 5 integers: ";
//    cin >> a >> b >> c >> d >> e;
//    cout << "The numbers are " << a << " " << b << " " << c << " " << d << " " << e  << endl;
//
//    int max = a;
//    if (b > max) max = b;
//    if (c > max) max = c;
//    if (d > max) max = d;
//    if (e > max) max = e;
//
//    cout << "The max value is " << max << endl;
//
//    int min = e;
//    if (a < min) min = a;
//    if (b < min) min = b;
//    if (c < min) min = c;
//    if (d < min) min = d;
//
//    cout << "The min value is " << min << endl;
//
//    return 0;
//}
//    int sum = 0;
//
//    int i = 1;
//    while (i <= 50)
//    {
//        sum = sum + i * 7;
//        i++;
//    }
//    cout << sum << endl;

//    int num = 1;
//
//    int i = 1;
//    while (i <= 10)
//    {
//        num = num * i;
//
//        i ++;
//        cout << num << endl;
//    }
//    char phrase[30];
//    int i, length;
//    int flag = 0;
//
//    cout << "Enter a word to see if is a palindrome: "; cin >> phrase;
//
//    length = strlen(phrase);
//
//    for(i=0; i < length; i++){
//        if(phrase[i] != phrase[length-i-1]){
//            flag = 1;
//            break;
//        }
//    }
//    if (flag) {
//        cout << phrase << " is not a palindrome." << endl;
//    }
//    else {
//        cout << phrase << " is a palindrome." << endl;
//    }
//    return 0;
//}

//    int n, i;
//        bool prime = true;
//
//        cout << "Enter a positive integer: ";
//        cin >> n;
//
//        for(i = 2; i <= n / 2; ++i)
//        {
//            if(n % i == 0)
//            {
//                prime = false;
//                break;
//            }
//        }
//        if (prime)
//            cout << "This is a prime number";
//        else
//            cout << "This is not a prime number";
//
//        return 0;
//    }

//    int a, b, c, d, e;
//
//    cout << "Enter 5 integers: ";
//    cin >> a >> b >> c >> d >> e;
//
//    int array[5] = {a, b, c, d, e};
//
//    double sum = 0;
//    double average;
//
//    for(int i=0; i<5; i++){
//        sum += array[i];
//    }
//    average = sum/5;
//
//    cout << "The average is: " << average << endl;
//    return 0;
//}
    int n;
    string* wordList;
    cout << "Enter the number of words to process: " << endl;
    int size;
    cin >> size;

    wordList = new string[size];

    ifstream fin("input.n");

    if(!fin){
        cerr<< "File not found" << endl;
        exit(1);
    }
    int i = 0;
    while (i < size) {
        fin >> wordList[i];
        i++;
    }
    for (int j = 0; j < size; j++)
    {
        cout << wordList[j]<< "  ";
    }
    cout << endl;

    int longest = 0;

    for (int i=1; i<size; i++) {
        if (wordList[i].size() > wordList[longest].size())
            longest = i;
    }
    cout << "The longest word is " << wordList[longest] << endl;

    delete[] wordList;
    
    return 0;
}
