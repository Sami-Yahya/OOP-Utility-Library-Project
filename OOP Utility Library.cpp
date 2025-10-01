#include <iostream>
#include "clsUtil.h"
using namespace std;

int main() {
    
    //Random
    clsUtil::Srand();
    cout << clsUtil::RandomNumber(1, 100) << endl;
    cout << clsUtil::GetRandomCharacter(clsUtil::SmallLetter) << endl;
    cout << clsUtil::GenerateWord(clsUtil::MixChars, 10) << endl;
    cout << clsUtil::GenerateKey(clsUtil::CapitalLetter) << endl;
    clsUtil::GenerateKeys(5, clsUtil::MixChars);
    cout << "\n";

    //Filling Arrays
    string arr1[10];
    clsUtil::FillArrayWithRandomWords(arr1, 10, clsUtil::CapitalLetter, 5);
    clsUtil::PrintArray(arr1, 10);

    int arr2[10];
    clsUtil::FillArrayWithRandomNumbers(arr2, 10, 1, 100);
    clsUtil::PrintArray(arr2, 10);
    cout << "Max Number: " << clsUtil::MaxNumberInArray(arr2, 10) << endl;
    cout << "Min Number: " << clsUtil::MinNumberInArray(arr2, 10) << endl;
    cout << "Average: " << clsUtil::ArrayAverage(arr2, 10) << endl;
    cout << "Sum Array: " << clsUtil::SumArray(arr2, 10) << endl;
    cout << "Even Count: " << clsUtil::EvenCount(arr2, 10) << endl;
    cout << "Odd Count: " << clsUtil::OddCount(arr2, 10) << endl;
    clsUtil::ShuffleArray(arr2, 10);
    cout << "Array after shuffling: "; clsUtil::PrintArray(arr2, 10);
    cout << "\n";

    //Check and Reverse
    clsUtil::PrintPrimeNumbersFrom1toN(100);
    cout << "Is 17 Prime: " << clsUtil::CheckPrime(17) << endl;
    cout << "Is 123 Perfect: " << clsUtil::isPerfectNumber(132) << endl;
    cout << "Is 234432 Palindrome: " << clsUtil::IsPalindromeNumber(234432) << endl;
    cout << "Reverse 12345: " << clsUtil::ReverseNumber(12345) << endl;
    cout << "1123111 frequency 1: " << clsUtil::GetFrequency(1123111, 1) << endl;
    cout << "Randome Boolean: " << clsUtil::GetRandomBoolean() << endl;
    cout << "\n";

    //Sawping
    int Num1 = 10, Num2 = 20;
    clsUtil::Swap(Num1, Num2);
    cout << Num1 << "\t" << Num2 << endl;

    double Num3 = 15.398, Num4 = 52.791;
    clsUtil::Swap(Num3, Num4);
    cout << Num3 << "\t" << Num4 << endl;

    string A = "Mango", B = "Apple";
    clsUtil::Swap(A, B);
    cout << A << "\t" << B << endl;

    clsDate D1(7, 10, 2023), D2(8, 12, 2024);
    clsUtil::Swap(D1, D2);
    D1.Print();
    D2.Print();
    
    cout << "\n";

    // Encrypt and Decrypt
    string Text1 = "Sami Yahya";
    Text1 = clsUtil::EncryptText(Text1, 5);
    cout << Text1 << endl;
    Text1 = clsUtil::DecryptText(Text1, 5);
    cout << Text1 << endl;
    cout << "\n";

    //Filling Vectors
    vector<int>vNums;
    clsUtil::FillVectorWithRandomNumbers(vNums, 10, 10, 99);
    clsUtil::PrintVector(vNums);
    clsUtil::ShuffleVector(vNums, 10);
    cout << "Vector after shuffling: "; clsUtil::PrintVector(vNums);
    cout << "\n";

    //And you can try any method at your own.. 

    system("pause>0");
    return 0;
}
