# 📌 Utility Library (OOP)

## 🔹 Overview

This project was implemented as part of **Course 11 – OOP as it Should Be (Application)** in the **Programming Advices Track (https://programmingadvices.com/)** by **Dr. Mohammed Abu-Hadhoud**.

The main idea is to build a **Utility Library** as a single class `clsUtil`, where **all methods are static**. These methods don’t belong to a specific object context, but instead serve as **general-purpose helpers** for randomness, array operations, swapping, text encryption, and formatting.

---

## ✨ Features

* ✅ **Random Utilities**: Generate random numbers, characters, words, and formatted keys.
* ✅ **Array Helpers**: Fill arrays with random numbers, words, or keys, and shuffle arrays.
* ✅ **Swap Functions**: Overloaded `Swap` methods for `int`, `double`, `bool`, `char`, `string`, and even `clsDate`.
* ✅ **Text Encryption/Decryption**: Simple Caesar‑style cipher using a numeric key.
* ✅ **Useful validation methods**: Check is a prime, palindrome, or perfect number. and Reserve number.
* ✅ **Formatting Helper**: Generate tab spacing easily.
* ✅ **Encapsulation**: All logic wrapped in one class with static members, easy to reuse anywhere.

---

## 📂 Project Structure

📁 Project-11-Utility-Library-OOP

* clsUtil.h   # Header file containing the clsUtil class and all static methods
* clsDate.h   # Date helper class (used in Swap method)
* main.cpp    # Sample code to demonstrate usage
* README.md   # Project documentation

---

## 🧾 Sample Demonstration

Here are some examples from the `main.cpp` file:

```cpp
#include <iostream>
#include "clsUtil.h"
using namespace std;

int main()
{
    clsUtil::Srand();
    cout << clsUtil::RandomNumber(1, 100) << endl;
    cout << clsUtil::GetRandomCharacter(clsUtil::SmallLetter) << endl;
    cout << clsUtil::GenerateWord(clsUtil::MixChars, 10) << endl;
    cout << clsUtil::GenerateKey(clsUtil::CapitalLetter) << endl;
    clsUtil::GenerateKeys(5, clsUtil::MixChars);

    int Num1 = 10, Num2 = 20;
    clsUtil::Swap(Num1, Num2);
    cout << Num1 << "\t" << Num2 << endl;

    string A = "Mango", B = "Apple";
    clsUtil::Swap(A, B);
    cout << A << "\t" << B << endl;

    string arr1[10];
    clsUtil::FillArrayWithRandomWords(arr1, 10, clsUtil::CapitalLetter, 5);
    clsUtil::PrintArray(arr1, 10);

    int arr2[10];
    clsUtil::FillArrayWithRandomNumbers(arr2, 10, 1, 100);
    clsUtil::PrintArray(arr2, 10);
    cout << "Max Number: " << clsUtil::MaxNumberInArray(arr2, 10) << endl;
    cout << "Min Number: " << clsUtil::MinNumberInArray(arr2, 10) << endl;
    clsUtil::ShuffleArray(arr2, 10);
    cout << "Array after shuffling: "; clsUtil::PrintArray(arr2, 10);

    cout << "Is 234432 Palindrome: " << clsUtil::IsPalindromeNumber(234432) << endl;
    cout << "Reverse 12345: " << clsUtil::ReverseNumber(12345) << endl;

    string Text1 = "Sami Yahya";
    Text1 = clsUtil::EncryptText(Text1, 5);
    cout << "Encrypted: " << Text1 << endl;
    Text1 = clsUtil::DecryptText(Text1, 5);
    cout << "Decrypted: " << Text1 << endl;

    system("pause>0");
    return 0;
}
```

---

## 🖥️ Example Output

* 5
* s
* YA19z4Z126
* GWKE-TEMA-DFTP-HHLN
* Key \[1] : 00B7-6174-4NWo-i4u6
* Key \[2] : ADw7-oSY5-M46i-j9PD
* Key \[3] : JY44-Rezi-Y71l-wpf4
* Key \[4] : YN15-6h1d-0yv9-VKdO
* Key \[5] : 3dfS-mv02-0CG0-Ye6s
* 20      10
* Apple   Mango
* RVXQR   KGBGJ   PQCOT   MMCML   FSUTG   HFKCQ   DABHM   CNCXP   USURQ   XVVMB
* 83      32      94      4       72      7       15      63      47      78
* Max Number: 94
* Min Number: 4
* Array after shuffling: 78       32      63      4       72      15      94      83      47      7
* Is 234432 Palindrome: 1
* Reverse 12345: 54321
* Encrypted: Xfrn%^fm~f
* Decrypted: Sami Yahya

---

## 🙏 Acknowledgments

This project is part of the Programming Advices Training Track led by

- 👨‍🏫 Dr. Mohammed Abu-Hadhoud
- 📚 Platform:  [ProgrammingAdvices](https://programmingadvices.com/).
