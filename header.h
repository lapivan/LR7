#include <iostream>
#include <cmath>
#include <string>

int getValue();
int getinteger();
int length(char* a);
int closest2(int a);
void delna2(std::string &num);
void lindectobin(std::string &dec);
int counter(std::string a);
char* convert10to2(int a, int counter);
void converttodop(char* a);
char* sumdopcode(char* a, char* b, int size);
void todirectcode(char* a, int len);
long double tonum(char* a, int len);
int numberword(std::string mystr, int length);
bool whatisbigger(std::string num1, std::string num2, int **&a, int **&b, bool num1otr, bool num2otr);
bool absbigger(std::string num1, std::string num2, int **&a, int **&b);
void amassive(std::string mystr, int** a, int j, int length);
std::string sum(int** a, int** b, int numw1, int numw2, int osn, std::string** array);
std::string diff(int** a, int** b, int numw1, int numw2, int osn, std::string** array);
bool to3(std::string num);
std::string sum0(std::string num1, std::string num2);
std::string sum1(std::string num1, std::string num2);
bool to23(std::string num);
bool to107(std::string num);
int number(int left, int right, int numslaves, int  target);