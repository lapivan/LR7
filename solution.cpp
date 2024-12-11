#include  <iostream>
#include  <cmath>
#include  <string>
#include "header.h"
void menu();
void tasks();
void task1() 
{
    std::cout << "                                Вариант 13 " << std::endl << "Перевести числа из дополнительного кода в прямой код" << std::endl << "Сложение выполните в дополнительном коде. " << std::endl << "Выполнил: Лапунов Иван" << std::endl << "Группа: 453501";
    std::cout << std::endl <<"Введите 0 для возврата в главное меню: ";
    int k;
    k = getValue();
    bool check = 0;
    while (check == 0) {
    if (k == 0)
    { 
        system("clear");
        tasks();  
        check = 1;
    }
    else 
    {
        std::cout << "Введите повторно: ";
        k = getValue();
    }
    
}
}
void task2() 
{
    std::cout << "                                Вариант 13 " << std::endl << "Найдите сумму двоичных чисел, заданных в естественной форме." << std::endl << "Сложение выполните в дополнительном коде. " << std::endl << "Выполнил: Лапунов Иван" << std::endl << "Группа: 453501";
    std::cout << std::endl <<"Введите 0 для возврата в главное меню: ";
    int k;
    k = getValue();
    bool check = 0;
    while (check == 0) {
    if (k == 0)
    { 
        system("clear");
        tasks();  
        check = 1;
    }
    else 
    {
        std::cout << "Введите повторно: ";
        k = getValue();
    }
    
}
}
void task3() 
{
    std::cout << "                                Вариант 13 " << std::endl << "Осуществить сложение и вычитание чисел в заданной системе счисления." << std::endl << "Выполнил: Лапунов Иван" << std::endl << "Группа: 453501";
    std::cout << std::endl <<"Введите 0 для возврата в главное меню: ";
    int k;
    k = getValue();
    bool check = 0;
    while (check == 0) {
    if (k == 0)
    { 
        system("clear");
        tasks();  
        check = 1;
    }
    else 
    {
        std::cout << "Введите повторно: ";
        k = getValue();
    }
    
}
}
void task4() 
{
    std::cout << "                                Вариант 13 " << std::endl << "Разработать программу, которая проверяет, делится ли введенное пользователем число на заданное простое." << std::endl << "3, 23, 107 " << std::endl << "Выполнил: Лапунов Иван" << std::endl << "Группа: 453501";
    std::cout << std::endl <<"Введите 0 для возврата в главное меню: ";
    int k;
    k = getValue();
    bool check = 0;
    while (check == 0) {
    if (k == 0)
    { 
        system("clear");
        tasks();  
        check = 1;
    }
    else 
    {
        std::cout << "Введите повторно: ";
        k = getValue();
    }
    
}
}
void task5() 
{
    std::cout << "                                Вариант 13 " << std::endl << "Патриций решил устроить праздник и для этого приготовил 240 бочек вина. Однако к нему пробрался недоброжелатель по имени Пользователь, который подсыпал яд в одну из бочек." << std::endl <<  "Про яд известно, что человек, который его выпил, умирает в течение 24 часов. До праздника осталось два дня, то есть 48 часов. У патриция есть пять рабов, которыми он готов пожертвовать, чтобы узнать, в какой именно бочке яд." << std::endl << "Aлгоритм решения возвращает номер отравленной бочки, которую отравил пользователь в самом начале. " << std::endl << "Выполнил: Лапунов Иван" << std::endl << "Группа: 453501";
    std::cout << std::endl <<"Введите 0 для возврата в главное меню: ";
    int k;
    k = getValue();
    bool check = 0;
    while (check == 0) {
    if (k == 0)
    { 
        system("clear");
        tasks();  
        check = 1;
    }
    else 
    {
        std::cout << "Введите повторно: ";
        k = getValue();
    }
    
}
}
void tasks()
{
    int n;
    std::cout << "Нажмите 1, чтобы узнать информацию о задании 1" << std::endl << "Нажмите 2, чтобы узнать информацию о задании 2" << std::endl << "Нажмите 3, чтобы узнать информацию о задании 3 " << std::endl << "Нажмите 4, чтобы узнать информацию о задании 4 "  << std::endl << "Нажмите 5, чтобы узнать информацию о задании 5 "<< std::endl << "Нажмите 0, чтобы вернуться в меню " << std::endl;
    n = getValue();
bool check = 0;
while(check == 0) {   
if (n == 1) {
    system("clear");
    task1();
    check = 1;
}
else if(n == 3) {
    system("clear");
    task3();
    check = 1;
}
else if(n == 2)  {
    system("clear");
    task2();
    check = 1;
}
else if(n == 4)  {
    system("clear");
    task4();
    check = 1;
}
else if(n == 5)  {
    system("clear");
    task5();
    check = 1;
}
else if(n == 0)  {
    system("clear");
    menu();
    check = 1;
}
else { 
std::cout << "Введите повторно: ";
n = getValue();
}
}
}
void mainprogramm1() //O(n*m)
{
    system("clear");
    std::cin.clear();
    std::cin.ignore(32767,'\n'); 
    std::string inputcode;
    std::cout << "Введите дополнительный код: ";
    bool inputcheck = 0;
    while(!inputcheck) //O(n (inputtriess)) the worst O(n * m) m-length, n - inptimes
    {
        int checkcounter = 0;
        std::getline(std::cin, inputcode);
        for(char c: inputcode) //O(n (lengthstr))
        {
            
            if (c != '0' && c != '1') 
            {

                std::cout << "В строке не должно быть ничего, кроме 0 и 1. Введите повторно: " << std::endl;
                break;
            }
            else
            {
                checkcounter++;
            }
        }
        if(checkcounter == (int)inputcode.size())
        {
            float fcheckcounter = (float)checkcounter;
            if(fcheckcounter == 1)
            {
                 std::cout << "Вводить символы в формате кода(число цифр должно быть равно одной из степеней двойки)" << std::endl<< "Введите повторно: " << std::endl;
                continue;
            }
            if(fcheckcounter == 2)
            {
                 std::cout << "Некорректнй ввод" << std::endl<< "Введите повторно: " << std::endl;
                continue;
            }
            if(fcheckcounter == 4)
            {
                 std::cout << "Некорректнй ввод" << std::endl<< "Введите повторно: " << std::endl;
                continue;
            }
            while(fcheckcounter > 1) //O(log fcheckcounter)
            {
                fcheckcounter /= 2;
            }
            if(fcheckcounter == 1)
            {
                inputcheck = 1;
            }
            else
            {
                std::cout << "Вводить символы в формате кода(число цифр должно быть равно одной из степеней двойки)" << std::endl<< "Введите повторно: " << std::endl;
                continue;
            }
        }
    }
    std::cout << "Вы ввели: " << inputcode << std::endl;

    if(inputcode[0] == '0')  //O(1)
    {
        std::cout << "Прямой код числа: "<< inputcode;
        std::cout << std::endl <<"Введите 0 для возврата в главное меню: ";
    int k;
    k = getValue();
    bool check = 0;
    while(check == 0) //O(n)
    {
    if (k == 0)
    {
        system("clear");
        menu();
        check = 1;
    }
    else
    {
        std::cout << "Введите повторно: ";
        k = getValue(); 
    }
    }   
    }
    if(inputcode[(int)inputcode.size() - 1] == '1')
    {
        inputcode[(int)inputcode.size() - 1] = '0'; //O(1)
        char x = inputcode[0];
        inputcode.erase(0, 1); //O(1)
        int i = 0;
        for(char c: inputcode) //O(n)
        {
            if (c != '0') 
            {
                inputcode[i] = '0';
            }
            else
            {
                inputcode[i] = '1';
            }
            i++;
        }
        inputcode.insert(0, 1, x);  //O(1)
        std::cout << "Прямой код числа: "<< inputcode;
    }
    else
    {
        inputcode[(int)inputcode.size() - 1] = '0'; //O(1)
        char x = inputcode[0]; 
        inputcode.erase(0, 1); //O(1)
        int i = 0;
        for(char c: inputcode) //O(n)
        {
            if (c == '0') 
            {
                inputcode[i] = '1';
            }
            else
            {
                inputcode[i] = '0';
            }
            i++;
        }
        i = (int)inputcode.size() - 1;
        while(0 == 0) //O(n)
        {
            if ( inputcode[i] == '0') 
            {
                inputcode[i] = '1';
                break;
            }
            else
            {
                inputcode[i] = '0';
            }
            i--;
        }
        inputcode[(int)inputcode.size() - 1] = '0';
        inputcode.insert(0, 1, x);
        std::cout << "Прямой код числа: "<< inputcode;
    }
    

    std::cout << std::endl <<"Введите 0 для возврата в главное меню: ";
    int k;
    k = getValue();
    bool check = 0;
    while(check == 0) //O(n)
    {
    if (k == 0)
    {
        system("clear");
        menu();
        check = 1;
    }
    else
    {
        std::cout << "Введите повторно: ";
        k = getValue(); 
    }
    }
}
void mainprogramm2() //O(n)
{
    system("clear");
    std::cin.clear();
    std::cin.ignore(32767,'\n'); 
    std::cout << "Введите первое число: " <<std::endl;
    std::string num1;
    bool ch1 = false;
    while(ch1 == false) //O(n)
    {
        std::getline(std::cin, num1);
        for(int i = 0; i < (int)num1.length(); i++)
        {
//O(m m num sumbols)
            if(num1[i] != '0' && num1[i] != '1' && num1[i] != '2' && num1[i] != '3' && num1[i] != '4' && num1[i] != '5' && num1[i] != '6' && num1[i] != '7' && num1[i] != '8' && num1[i] != '9'&& num1[i] != '-')
            {
                std::cout << "Введите повторно: ";
                break;
            }
            if(i==(int)num1.length()-1)
            {
                ch1=1;
            }
        }
        
    }
    std::cout << "Введите второе число: "<< std::endl;
    std::string num2;
    bool ch2 = false;
    while(ch2 == false)  //O(n)
    {
        std::getline(std::cin, num2);
        for(int i = 0; i < (int)num2.length(); i++)
        {
            //O(m m num sumbols)
            if(num2[i] != '0' && num2[i] != '1' && num2[i] != '2' && num2[i] != '3' && num2[i] != '4' && num2[i] != '5' && num2[i] != '6' && num2[i] != '7' && num2[i] != '8' && num2[i] != '9' && num2[i] != '-')
            {
                std::cout << "Введите повторно: ";
                break;
            }
            if(i==(int)num2.length()-1)
            {
                ch2=1;
            }
        }
    }
    lindectobin(num1);
    lindectobin(num2);
    int lcode1= counter(num1);
    int lcode2= counter(num2);
    if(lcode2 <  lcode1)
    {
        lcode2 = lcode1;
    }
    else
    {
        lcode1 = lcode2;
    }
    lcode1 *= 2;
    lcode2 *= 2;
    while((int)num1.size() != lcode1) //O(n)
    {
        if(num1[0] == '1')
        {
            num1.insert(1, 1, '0');
        }
        else
        {
            num1.insert(0, 1, '0');
        }
    }
    while((int)num2.size() != lcode2) //O(n)
    {
        num2.insert(1, 1, '0');
    }
    char* code1 = new char [(int)num1.size()];
    char* code2 = new char [(int)num2.size()];
    for (int i = 0; i < (int)num1.size(); i++)
    {
        code1[i] = num1[i]; //O(n)
    }
    for (int i = 0; i < (int)num2.size(); i++)
    {
        code2[i] = num2[i]; //O(n)
    }
    std::cout << "Прямой код первого числа: " << std::endl;
    for(int i = 0; i < lcode1; i++)
    {
        std::cout << code1[i]; //O(n)
    }
    std::cout <<  std::endl;
    std::cout << "Прямой код второго числа: " << std::endl;
    for(int i = 0; i < lcode2; i++)
    {
        std::cout << code2[i]; //O(n)
    }
    std::cout <<  std::endl;
    converttodop(code1, lcode1);
    converttodop(code2, lcode1);
    std::cout << "Дополнительнй код первого числа: " << std::endl;
    for(int i = 0; i < lcode1; i++)
    {
        std::cout << code1[i]; //O(n)
    }
    std::cout <<  std::endl;
    std::cout << "Дополнительнй код второго числа: " << std::endl;
    for(int i = 0; i < lcode2; i++)
    {
        std::cout << code2[i]; //O(n)
    }
    std::cout <<  std::endl;
    char* dop = sumdopcode(code1, code2, lcode1);
    std::cout << "Дополнительный код суммы чисел: " << std::endl;
    for(int i = 0; i < lcode2; i++)
    {
        std::cout << dop[i]; //O(n)
    }
    std::cout <<  std::endl;
    todirectcode(dop, lcode1);
    std::cout << "Прямой код суммы чисел: " << std::endl;
    int size = 0;
    for(int i = 0; i < lcode2; i++)
    {
        std::cout << dop[i];
        size++;
    }
    std::cout <<  std::endl;
    std::string sum;
    sum.resize(size);
    for(int i = 0; i < size; i++)
    {
        sum[i] = dop[i];
    }
    bool minus = 0;
    if(sum[0] == '1')
    {
        sum[0] = '0';
        minus = 1;
    }
    bintodec(sum);
    if(minus == 0)
    std::cout << "Сумма чисел в естественной форме: " << sum << std::endl;
    else
    std::cout << "Сумма чисел в естественной форме: -" << sum << std::endl;
    delete[] code1;
    code1 = nullptr;
    delete[] code2;
    code2 = nullptr;
    delete[] dop;
    dop = nullptr;
    std::cout << std::endl <<"Введите 0 для возврата в главное меню: ";
    int k;
    k = getValue();
    bool check = 0;
    while(check == 0) //O(n)
    {
    if (k == 0)
    {
        system("clear");
        menu();
        check = 1;
    }
    else
    {
        std::cout << "Введите повторно: ";
        k = getValue(); 
    }
    }
}
void mainprogramm3() //O(n*n)
{
    system("clear");
    std::cin.clear();
    std::cin.ignore(32767,'\n'); 
    std::cout << "Введите основание системы счисления: ";
    int osn = getinteger();
    long alphabet = 26;
    long alphabet1 = 36;
    int maxnumlet = 1;
    int na = 2;
    bool oneisbigger = 0;
    while(osn > alphabet1) //O(log na)
    {
        alphabet1 += pow(alphabet,na);
        maxnumlet = maxnumlet+1;
        na++;
    }
    std::string** array = new std::string*[osn];
    for (int i = 0; i < osn; i++) 
    {
        array[i] = new std::string[2]; //O(n)
    }
    for (int i = 0; i < osn; i++) 
    {
        array[i][0] = std::to_string(i); //O(n)
    }
    int j1 = 0;
    for (int i = 0; i < osn; i++)  //O(n*m)
    {
        std::string buferstr;
        if (i < 10)
        {
            array[i][1] = std::to_string(i);
        } 
        else 
        {     
            int index = j1;
            
            while (index >= 0) //O(m)
            {
                buferstr = char('A' + (index % 26)) + buferstr;
                index = index / 26 - 1;
            }
            array[i][1] = buferstr;
            j1++;
        }
        // if(i == osn - 1) //otladka O(1)
        // {
        //     max = i;
        // }
    }
    start:
    std::cout << "Введите первое число. Каждую цифру числа разделяйте пробелами: " << std::endl;
    std::string num1;
    bool checkinput = false;
    while(checkinput == false) //O(n)
    {
        std::getline(std::cin, num1);
        int len1 = num1.size();
        int countlet{};
        for(int i = 0; i < len1; i++) //O(n)
        {
            if(num1[i] != ' ' && num1[i+1] == ' ')
            {
                countlet++;
                if(countlet > maxnumlet)
                {
                    std::cout << "Введите повторно: ";
                    break;
                }
                countlet = 0;
            }
            if(num1[i] != ' ' && num1[i+1] != ' ')
            {
                countlet++;
                if(countlet > maxnumlet)
                {
                    std::cout << "Введите повторно: ";
                    break;
                }
            }
            if((i == len1 - 1) && (num1[i] == ' '))
            {
                checkinput =  true;
                break;
            }   
            if(i == len1 - 1)
            {
                checkinput =  true;
                break;
            }
            if(num1[i] != ' ' && i == len1 - 1)
            {
                if(countlet > maxnumlet)
                {
                    std::cout << "Введите повторно: ";
                    break;
                }
                countlet = 0;
            }
            
        } 
    }
    bool num1otr = 0;
    if(num1.front() == '-')
    {
        num1.erase(0, 1);
        num1otr = 1;
    }
    std::cout << "Введите второе число. Каждую цифру числа разделяйте пробелами: " << std::endl;
    std::string num2;
    bool checkinput2 = false;
    while(checkinput2 == false)//O(n)
    {
        std::getline(std::cin, num2);
        int len2 = (int)num2.size();
        int countlet{};
        for(int i = 0; i < len2; i++)//O(n)
        {
            if(num2[i] != ' ' && num2[i+1] == ' ')
            {
                countlet++;
                if(countlet > maxnumlet)
                {
                    std::cout << "Введите повторно: ";
                    break;
                }
                countlet = 0;
            }
            if(num2[i] != ' ' && num2[i+1] != ' ')
            {
                countlet++;
                if(countlet > maxnumlet)
                {
                    std::cout << "Введите повторно: ";
                    break;
                }
            }
            if((i == len2 - 1) && (num2[i] == ' '))
            {
                checkinput2 = true;
                break;
            }   
            if(i == len2 - 1)
            {
                checkinput2 =  true;
                break;
            }
            if(num2[i] != ' ' && i == len2 - 1)
            {
                if(countlet > maxnumlet)
                {
                    std::cout << "Введите повторно: ";
                    break;
                }
                countlet = 0;
            }
        } 
    }
    bool num2otr = 0;
    if(num2.front() == '-')
    {
        num2.erase(0, 1); //O(1)
        num2otr = 1;
    }
    int numw1 = numberword(num1, num1.size());
    int numw2 = numberword(num2, num2.size());
    if(num1.front() == '-')
    {
        numw1--;
    }
    if(num2.front() == '-')
    {
        numw2--;
    }
    int **a = new int *[3];
    for(int i = 0; i < 3; i++)
    {
        a[i] = new int[numw1];//O(n)
    }
    int **b = new int *[3];
    for(int i = 0; i < 3; i++)
    {
        b[i] = new int[numw2];//O(n)
    }
    amassive(num1, a, 0, num1.size());
    amassive(num2, b, 0, num2.size());
    for(int i = 0; i < numw1; i++) //O(n * (m + p))  n - len num1   m - len buf   p — num el array. IT WAS i < (int)num1.size();
    {
        a[2][i] = -1;
        if(i == numw1)
        {
            break;
        }
        std::string buf;
        buf.resize(maxnumlet);
        int j = 0;
        for(int k = a[1][i]; k<a[1][i] + a[0][i]; k++) //O(m)
        {
            if(buf == " ")
            {
                break;
            }
            if(num1[k] == '-')
            {
                continue;
            }
            buf[j] += num1[k];
            j++;
        }
        while(buf.back() == 0)
        {
            buf.pop_back(); //O(n)
        }
        for(int k = 0; k < osn; k++) //O(n)
        {
            if(buf == array[k][1]) //O(p * n) p - num elements in array
            {
                a[2][i] = std::stoi(array[k][0]); //O(m) m - len buf
                break;
            }
        }
    }
    for(int i = 0; i < numw1; i++) //O(n)
    {
        if(a[2][i] == -1)
        {
            std::cout << "Данной цифры в системе счисления с основанием " << osn << " не существует " << std::endl;
            goto start;
        }
    }
    for(int i = 0; i < numw2; i++) //O(n * (m + p))  n - len num1   m - len buf   p — num el array.
    {
        if(i == numw2)
        {
            break;
        }
        std::string buf;
        buf.resize(maxnumlet);
        int j = 0;
        for(int k = b[1][i]; k<b[1][i] + b[0][i]; k++) //O(m)
        {
            b[2][i] = -1;
            if(buf == " ")
            {
                break;
            }
            if(num2[k] == '-')
            {
                continue;
            }
            buf[j] += num2[k];
            j++;
        }
        while(buf.back() == 0)
        {
            buf.pop_back(); //O(n)
        }
        for(int k = 0; k < osn; k++) //O(n)
        {
            if(buf == array[k][1]) //O(p * n) p - num elements in array
            {
                b[2][i] = std::stoi(array[k][0]); //O(m) m - len buf
                break;
            }           
        }
    }
    for(int i = 0; i < numw2; i++) //O(n)
    {
        if(b[2][i] == -1)
        {
            std::cout << "Данной цифры в системе счисления с основанием " << osn << " не существует " << std::endl;
            goto start;
        }
    }
    oneisbigger = whatisbigger(num1, num2, a, b, num1otr, num2otr);
    bool oneabsbigger = absbigger(num1, num2, a, b);
    std::cout << "Сумма чисел равна: " ;
    if(oneisbigger == 1 && num1otr == 0 && num2otr == 0)
    {
        std::string summa = sum(a, b, numw1, numw2, osn, array);
        std::cout << summa << std::endl;
    }
    if(oneisbigger == 0 && num1otr == 0 && num2otr == 0)
    {
        std::string summa = sum(b, a, numw2, numw1, osn, array);
        std::cout << summa << std::endl;
    }
    if(oneisbigger == 1 && num1otr == 0 && num2otr == 1 && oneabsbigger == 1)
    {
        std::string summa = diff(a, b, numw1, numw2, osn, array);
        std::cout << summa << std::endl;
    }
    if(oneisbigger == 0 && num1otr == 1 && num2otr == 0 && oneabsbigger == 0)
    {
        std::string summa = diff(b, a, numw2, numw1, osn, array);
        std::cout << summa << std::endl;
    }
     if(oneisbigger == 0 && oneabsbigger == 1 && num1otr == 1 && num2otr == 1)
    {
        std::string summa = sum(a, b, numw1, numw2, osn, array);
        std::cout<< '-' << summa << std::endl;
    }
    if(oneisbigger == 1 && oneabsbigger == 0 && num1otr == 1 && num2otr == 1)
    {
        std::string summa = sum(b, a, numw2, numw1, osn, array);
        std::cout<< '-' << summa << std::endl;
    }
    if(oneisbigger == 1 && num1otr == 0 && num2otr == 1 && oneabsbigger == 0)
    {
        std::string summa = diff(b, a, numw2, numw1, osn, array);
        std::cout << '-' << summa << std::endl;
    }
    if(oneisbigger == 0 && num1otr == 1 && num2otr == 0 && oneabsbigger == 1)
    {
        std::string summa = diff(a, b, numw1, numw2, osn, array);
        std::cout << '-' << summa << std::endl;
    }
    amassive(num1, a, 0, (int)num1.size());
    amassive(num2, b, 0, (int)num2.size());
    for(int i = 0; i < (int)num1.size(); i++) //O(n * (m + p))  n - len num1   m - len buf   p — num el array.
    {
        if(i == numw1)
        {
            break;
        }
        std::string buf;
        buf.resize(maxnumlet);
        int j = 0;
        for(int k = a[1][i]; k<a[1][i] + a[0][i]; k++) //O(m)
        {
            if(buf == " ")
            {
                break;
            }
            buf[j] += num1[k];
            j++;
        }
        for(int k = 0; k < osn; k++) //O(n)
        {
            if(buf == array[k][1]) //O(p * n) p - num elements in array
            {
                a[2][i] = std::stoi(array[k][0]); //O(m) m - len buf
                break;
            }
        }
    }
    for(int i = 0; i < (int)num2.size(); i++) //O(n * (m + p))  n - len num1   m - len buf   p — num el array.
    {
        if(i == numw2)
        {
            break;
        }
        std::string buf;
        buf.resize(maxnumlet);
        int j = 0;
        for(int k = b[1][i]; k<b[1][i] + b[0][i]; k++) //O(m)
        {
            if(buf == " ")
            {
                break;
            }
            buf[j] += num2[k];
            j++;
        }
        for(int k = 0; k < osn; k++) //O(n)
        {
            if(buf == array[k][1]) //O(p * n) p - num elements in array
            {
                b[2][i] = std::stoi(array[k][0]); //O(m) m - len buf
                break;
            }
        }
    }
    std::cout << "Разность чисел равна: " ;
    if(oneisbigger == 1 && num1otr == 0 && num2otr == 0)
    {
        std::string differ = diff(a, b, numw1, numw2, osn, array);
        std::cout << differ << std::endl;
    }
    if(oneisbigger == 0 && num1otr == 0 && num2otr == 0)
    {
        std::string differ = diff(b, a, numw2, numw1, osn, array);
        std::cout<< '-' << differ << std::endl;
    }
    if(oneisbigger == 1 && num1otr == 0 && num2otr == 1 && oneabsbigger == 1)
    {
        std::string differ = sum(a, b, numw1, numw2, osn, array);
        std::cout << differ << std::endl;
    }
    if(oneisbigger == 0 && num1otr == 1 && num2otr == 0 && oneabsbigger == 0)
    {
        std::string differ = sum(b, a, numw2, numw1, osn, array);
        std::cout<< '-' << differ << std::endl;
    }
    if(oneisbigger == 1 && oneabsbigger == 0 && num1otr == 1 && num2otr == 1)
    {
        std::string differ = diff(b, a, numw2, numw1, osn, array);
        std::cout << differ << std::endl;
    }
    if(oneisbigger == 0 && oneabsbigger == 1 && num1otr == 1 && num2otr == 1)
    {
        std::string differ = diff(a, b, numw1, numw2, osn, array);
        std::cout <<'-' << differ << std::endl;
    }
    if(oneisbigger == 1 && num1otr == 0 && num2otr == 1 && oneabsbigger == 0)
    {
        std::string diff = sum(b, a, numw2, numw1, osn, array);
        std::cout << diff << std::endl;
    }
    if(oneisbigger == 0 && num1otr == 1 && num2otr == 0 && oneabsbigger == 1)
    {
        std::string summa = sum(a, b, numw1, numw2, osn, array);
        std::cout << '-' << summa << std::endl;
    }
    for (int i = 0; i < osn; ++i) 
    {
        delete[] array[i]; //O(n)
        array[i] = nullptr;
    }
    delete[] array;
    array = nullptr;
    for(int i = 0; i < 3; i++)
    {
        delete[] a[i]; //O(n)
        a[i] = nullptr;
    }
    delete[] a;
    a = nullptr;
    for(int i = 0; i < 3; i++)
    {
        delete[] b[i]; //O(n)
        b[i] = nullptr;
    }
    delete[] b;
    b = nullptr;
    std::cout << std::endl <<"Введите 0 для возврата в главное меню: ";
    int k;
    k = getValue();
    bool check = 0;
    while(check == 0) //O(n)
    {
    if (k == 0)
    {
        system("clear");
        menu();
        check = 1;
    }
    else
    {
        std::cout << "Введите повторно: ";
        k = getValue(); 
    }
    }
}
void mainprogramm4() //O(n*n)
{
    system("clear");
    std::cin.clear();
    std::cin.ignore(32767,'\n'); 
    std::string num;
    std::cout << "Введите число, делимость которого хотите проверить: ";
    bool checkinput = false;
    while(checkinput == false) //O(n)
    {
        std::getline(std::cin, num);
        if(num.front() == '-')
        {
            num.erase(0, 1);
        }
        for(int i = 0; i < (int)num.size(); i++) //O(n)
        {
            if( num[i] != '0' &&  num[i] != '1' && num[i] != '2' && num[i] != '3' && num[i] != '4' && num[i] != '5' && num[i] != '6' && num[i] != '7'  && num[i] != '8' && num[i] != '9')
            {
                std::cout << "Введите повторно: ";
                break;
            }
            if(i == (int)num.size() - 1)
            {
                checkinput = true;
            }
        }
    }

    if(num.front() == '-')
    {
        num.erase(0, 1);
    }
    bool TO3 = to3(num);
    bool TO23 = to23(num);
    bool TO107 = to107(num);
    if(TO3 == 1)
    {
        std::cout << "Делится на 3" << std::endl;
    }
    else
    {
        std::cout << "Не делится на 3" << std::endl;
    }
    if(TO23 == 1)
    {
        std::cout << "Делится на 23" << std::endl;
    }
    else
    {
        std::cout << "Не делится на 23" << std::endl;
    }
    if(TO107 == 1)
    {
        std::cout << "Делится на 107" << std::endl;
    }
    else
    {
        std::cout << "Не делится на 107" << std::endl;
    }
    std::cout << std::endl <<"Введите 0 для возврата в главное меню: ";
    int k;
    k = getValue();
    bool check = 0;
    while(check == 0) //O(n)
    {
    if (k == 0)
    {
        system("clear");
        menu();
        check = 1;
    }
    else
    {
        std::cout << "Введите повторно: ";
        k = getValue(); 
    }
    }
}
void mainprogramm5() //O(n)
{
    system("clear");
    std::cin.clear();
    std::cin.ignore(32767,'\n'); 
    std::cout << "Введите номер отравленной бочки: " << std::endl;
    int target = getinteger(); 
    system("clear");
    bool sl1 = 1;
    bool sl2 = 1;
    bool sl3 = 1;
    bool sl4 = 1;
    bool sl5 = 1;
    int result;
    if(target > 0 && target < 17)
    {
        sl1 = 0;
        result = number(0, 16, 4, target);
    }
    if(target >= 17 && target < 33)
    {
        sl2 = 0;
        result = number(17, 32, 4, target);
    }
    if(target >= 33 && target < 49)
    {
        sl3 = 0;
        result = number(33, 48, 4, target);
    }
    if(target >= 49 && target < 65)
    {
        sl4 = 0;
        result = number(49, 64, 4, target);
    }
    if(target >= 65 && target < 81)
    {
        sl5 = 0;
        result = number(65, 80, 4, target);
    }
    if(target >= 81 && target < 89)
    {
        sl1 = 0;
        sl2 = 0;
        result = number(81, 88, 3, target);
    }
    if(target >= 89 && target < 97)
    {
        sl1 = 0;
        sl3 = 0;
        result = number(89, 96, 3, target);
    }
    if(target >= 97 && target < 105)
    {
        sl1 = 0;
        sl4 = 0;
        result = number(97, 104, 3, target);
    }
    if(target >= 105 && target < 113)
    {
        sl1 = 0;
        sl5 = 0;
        result = number(105, 113, 3, target);
    }
    if(target >= 113 && target < 121)
    {
        sl2 = 0;
        sl3 = 0;
        result = number(113, 121, 3, target);
    }
    if(target >= 121 && target < 129)
    {
        sl2 = 0;
        sl4 = 0;
        result = number(121, 128, 3, target);
    }
    if(target >= 129 && target < 137)
    {
        sl2 = 0;
        sl5 = 0;
        result = number(129, 136, 3, target);
    }
    if(target >= 137 && target < 145)
    {
        sl3 = 0;
        sl4 = 0;
        result = number(137, 144, 3, target);
    }
    if(target >= 145 && target < 153)
    {
        sl3 = 0;
        sl5 = 0;
        result = number(145, 152, 3, target);
    }
    if(target >= 153 && target < 161)
    {
        sl4 = 0;
        sl5 = 0;
        result = number(153, 160, 3, target);
    }
    if(target >= 161 && target < 165)
    {
        sl1 = 0;
        sl2 = 0;
        sl3 = 0;
        result = number(161, 164, 2, target);
    }
    if(target >= 165 && target < 169)
    {
        sl1 = 0;
        sl2 = 0;
        sl4 = 0;
        result = number(165, 168, 2, target);
    }
    if(target >= 169 && target < 173)
    {
        sl1 = 0;
        sl2 = 0;
        sl5 = 0;
        result = number(169, 172, 2, target);
    }
    if(target >= 173 && target < 177)
    {
        sl1 = 0;
        sl3 = 0;
        sl4 = 0;
        result = number(173, 176, 2, target);
    }
    if(target >= 177 && target < 181)
    {
        sl1 = 0;
        sl3 = 0;
        sl5 = 0;
        result = number(177, 180, 2, target);
    }
    if(target >= 181 && target < 185)
    {
        sl1 = 0;
        sl4 = 0;
        sl5 = 0;
        result = number(181, 184, 2, target);
    }
    if(target >= 185 && target < 189)
    {
        sl2 = 0;
        sl3 = 0;
        sl4 = 0;
        result = number(185, 188, 2, target);
    }
    if(target >= 189 && target < 193)
    {
        sl2 = 0;
        sl3 = 0;
        sl5 = 0;
        result = number(189, 192, 2, target);
    }
    if(target >= 193 && target < 197)
    {
        sl2 = 0;
        sl4 = 0;
        sl5 = 0;
        result = number(193, 196, 2, target);
    }
    if(target >= 197 && target < 201)
    {
        sl3 = 0;
        sl4 = 0;
        sl5 = 0;
        result = number(197, 200, 2, target);
    }
    if(target >= 201 && target < 203)
    {
        sl1= 0;
        sl2 = 0;
        sl3 = 0;
        sl4 = 0;
        result = number(201, 202, 1, target);
    }
    if(target >= 203 && target < 205)
    {
        sl1= 0;
        sl2 = 0;
        sl3 = 0;
        sl5 = 0;
        result = number(203, 204, 1, target);
    }
    if(target >= 205 && target < 207)
    {
        sl1= 0;
        sl2 = 0;
        sl4 = 0;
        sl5 = 0;
        result = number(205, 206, 1, target);
    }
    if(target >= 207 && target < 209)
    {
        sl1= 0;
        sl3 = 0;
        sl4 = 0;
        sl5 = 0;
        result = number(207, 208, 1, target);
    }
    if(target >= 209 && target < 211)
    {
        sl2= 0;
        sl3 = 0;
        sl4 = 0;
        sl5 = 0;
        result = number(209, 210, 1, target);
    }
    if(target >= 211 && target < 241)
    {
        result = number(209, 240, 5, target);
    }
    std::cout << "По итогам первого дня умер(ли): " << std::endl;
    int slalive = 0;
    if(sl1 == 0)
    {
        std::cout << "Раб 1" << std::endl;
    }
    else
    {
        slalive++;
    }
     if(sl2 == 0)
    {
        std::cout << "Раб 2" << std::endl;
    }
    else
    {
        slalive++;
    }
     if(sl3 == 0)
    {
        std::cout << "Раб 3" << std::endl;
    }
    else
    {
        slalive++;
    }
    if(sl4 == 0)
    {
        std::cout << "Раб 4" << std::endl;
    }
    else
    {
        slalive++;
    }
     if(sl5 == 0)
    {
        std::cout << "Раб 5" << std::endl;
    }
    else
    {
        slalive++;
    }
    int outputnumbarrows = 2;
    outputnumbarrows = pow(2, slalive);
    if(slalive == 5)
    {
        outputnumbarrows = 30;
    }
    std::cout << "За второй день оставшиеся " << slalive << " раба нашли нужную бочку среди " << outputnumbarrows << " оставшихся " << std::endl;
    std::cout << "И ее номер: " << result << std::endl;
    std::cout << std::endl <<"Введите 0 для возврата в главное меню: ";
    int k;
    k = getValue();
    bool check = 0;
    while(check == 0) //O(n)
    {
    if (k == 0)
    {
        system("clear");
        menu();
        check = 1;
    }
    else
    {
        std::cout << "Введите повторно: ";
        k = getValue(); 
    }
    }
}
void mainprogramms()
{
    system("clear");
    int n;
    std::cout << "Нажмите 1, чтобы запустить задание 1 " << std::endl << "Нажмите 2, чтобы запустить задание 2 " << std::endl << "Нажмите 3, чтобы запустить задание 3  " << std::endl << "Нажмите 4, чтобы запустить задание 4 "<< std::endl << "Нажмите 5, чтобы запустить задание 5 "<< std::endl << "Нажмите 0, чтобы  вернуться в меню ";
    n = getValue();
bool check = 0;
while(check == 0) {   
if (n == 1) {
    system("clear");
    mainprogramm1();
    check = 1;
}
else if(n == 2)  {
    system("clear");
    mainprogramm2();
    check = 1;
}
else if(n == 3)  {
    system("clear");
    mainprogramm3();
    check = 1;
}
else if(n == 4)  {
    system("clear");
    mainprogramm4();
    check = 1;
}
else if(n == 5)  {
    system("clear");
    mainprogramm5();
    check = 1;
}
else if(n == 0)  {
    system("clear");
    menu();
    check = 1;
}
else { 
std::cout << "Введите повторно: ";
n = getValue();
}
}
}
void menu() {
    int n;
std::cout << "\t\t\t\tЛабораторнаяя работа 7 " << std::endl;
std::cout << "Нажмите 1, чтобы узнать информацию о заданих" << std::endl << "Нажмите 2, чтобы выбрать задание" << std::endl << "Нажмите 3, чтобы завершить программу ";
n = getValue();
bool check = 0;
while(check == 0) {   
if (n == 1) {
    system("clear");
    tasks();
    check = 1;
}
else if(n == 3) {
     system("clear");
     exit(0);
     check = 1;
}
else if(n == 2)  {
mainprogramms();
check = 1;
}
else { 
std::cout << "Введите повторно: ";
n = getValue();
}
}
}
int main() {

menu();

    return 0;
}