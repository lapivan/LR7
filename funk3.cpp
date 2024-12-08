#include <iostream>
#include <cmath>
#include <string>


int numberword(std::string mystr, int length)
{
int numberword = 0;
    if(mystr[0] != ' ')
        {
            numberword++;
        }
    for(int i = 0; i<length; i++) //O(n)
    {  
        if(mystr[i] == ' ' && mystr[i+1] != ' ')
        {
            if((i == length - 1) && (mystr[i] == ' '))
            {
                break;
            }
            numberword++;
        }
    }    
    return numberword;
}
bool whatisbigger(std::string num1, std::string num2, int **&a, int **&b, bool num1otr, bool num2otr)
{
    bool oneisbigger = 0;
    if(num1otr == 1 && num2otr != 1)
    {
        oneisbigger = 0;
        return oneisbigger;
    }
    if(num1otr != 1 && num2otr == 1)
    {
        oneisbigger = 1;
        return oneisbigger;
    }
    if(num1otr == 1 && num2otr != 1)
        {
            oneisbigger = 0;
            return oneisbigger;
        }
    if(numberword(num1, (int)num1.size()) > numberword(num2, (int)num2.size()))
    {
        oneisbigger = 1;
        return oneisbigger;
    }
    if(numberword(num1, (int)num1.size()) < numberword(num2, (int)num2.size()) && num1otr!= 1 && num2otr != 1)
    {
        oneisbigger = 0;
        return oneisbigger;
    }
    bool bothotr = 0;
    if(num1otr == 1 && num2otr == 1)
    {
        num1.erase(0, 1);
        num2.erase(0, 1);
        bothotr = 1;
    }
    bool exit  = 0;
    int  it = 0;
    while(!exit) //O(n)
    {
        if(a[2][it] > b[2][it])
        {
            exit =  1;
            oneisbigger =  1;
            break;
        }
        if(a[2][it] < b[2][it])
        {
            exit =  1;
            oneisbigger =  0;
            break;
        }
        if(a[2][it] == b[2][it])
        {
            it++;
        }
    }
    if(bothotr == 1)
    {
        if(oneisbigger == 1)
        {
            oneisbigger = 0;
        }
        else
        {
            oneisbigger = 1;
        }
        // !oneisbigger;
    }
    return oneisbigger;
}
bool absbigger(std::string num1, std::string num2, int **&a, int **&b)
{
    bool oneabsbigger = 0;
    if(num1.front() == '-')
    num1.erase(0, 1);
    if(num2.front() == '-')
    num2.erase(0, 1);
    if(numberword(num1, (int)num1.size()) > numberword(num2, (int)num2.size()))
    {
        oneabsbigger = 1;
        return oneabsbigger;
    }
    if(numberword(num1, (int)num1.size()) < numberword(num2, (int)num2.size()))
    {
        oneabsbigger = 0;
        return oneabsbigger;
    }
    bool exit  = 0;
    int  it = 0;
    while(!exit) //O(n)
    {
        if(a[2][it] > b[2][it])
        {
            exit =  1;
            oneabsbigger =  1;
            break;
        }
        if(a[2][it] < b[2][it])
        {
            exit =  1;
            oneabsbigger =  0;
            break;
        }
        if(a[2][it] == b[2][it])
        {
            it++;
        }
    }
    return oneabsbigger;
}
void amassive(std::string mystr, int** a, int j, int length) //O(n)
{
int countlet{};
    if(length == 1)
    {
        a[0][j] = 1;
        a[1][j] = 0;
        return;
    }
    for(int i = 0; i < length; i++) //O(n)
    {
        if(mystr[i] != ' ' && mystr[i+1] == ' ')
        {; 
            countlet++;
            a[0][j] = countlet;
            a[1][j] = i - countlet + 1;
            j++;
            countlet = 0;
        }
        if(mystr[i] != ' ' && mystr[i+1] != ' ')
        {
            countlet++;
        }
        if((i == length - 1) && (mystr[i] == ' '))
        {
            break;
        }   
        
        if(mystr[i] != ' ' && i == length - 1)
        {
            a[0][j] = countlet;
            a[1][j] = i - countlet + 1;
            j++;
            countlet = 0;
        }
    } 
}
std::string sum(int** a, int** b, int numw1, int numw2, int osn, std::string** array) //O(max(numw1, numw2) * osn)
{
    std::string space = " ";
    std::string tmp;
    std::string result;
    bool prom1check = 0;
    int j = 0;
    for(int i = std::max(numw1, numw2) - 1; i>=0; i--) //O(max(num1, num2))
    {
        int prom = a[2][numw1 - 1 -  j] + b[2][numw2 - 1 - j];
        if((numw1 - 1 -  j) < 0 || (numw2 - 1 - j) < 0)
        {
            if(numw1 > numw2)
            {
                prom = a[2][numw1 - 1 -  j];
            }
            else
            {
                prom = b[2][numw2 - 1 - j];
            }
        }
        int prom1;
        if(prom >= osn)
        {
            if(numw1 - 2 - j < 0)
            {
                prom1 = 1;
                prom1check = 1;
                prom -= osn;
            }
            else
            {
                a[2][numw1 - 2 - j] += 1;
                prom -= osn;
            }
        }
        for(int i = 0; i < osn; i++) //O(m) m-str len
        {
            if(std::to_string(prom) == array[i][0])
            {
                
                tmp  =  space + array[i][1] + result;
                result = tmp;
                break;
            }
        }
        if(i == 0)
        {
            if(prom1check == 1)
                {
                    for(int i = 0; i < osn; i++)
                    {
                        if(std::to_string(prom1) == array[i][0]) // O(m) m - str len
                        {
                            tmp  =  space + array[i][1] + result;
                            result = tmp;
                            break;
                        }
                    }
                }
        }
        j++;
    }
    return result;
}
std::string diff(int** a, int** b, int numw1, int numw2, int osn, std::string** array) //O(max(numw1, numw2) * osn)
{
    std::string result;
    std::string space = " ";
    std::string tmp;
    bool prom1check = 0;
    int j = 0;
    for(int i = std::max(numw1, numw2) - 1; i>=0; i--) //O(max(num1, num2))
    {
        int prom = a[2][numw1 - 1 -  j] - b[2][numw2 - 1 - j];
        if((numw1 - 1 -  j) < 0 || (numw2 - 1 - j) < 0)
        {
            if(numw1 > numw2)
            {
                prom = a[2][numw1 - 1 -  j];
            }
            else
            {
                prom = b[2][numw2 - 1 - j];
            }
        }
        int prom1;
        if(prom < 0)
        {
            if(numw1 - 2 - j < 0)
            {
                prom1 = -1;
                prom1check = 1;
                prom += osn;
            }
            else
            {
                a[2][numw1 - 2 - j] -= 1;
                prom += osn;
            }
        }
        for(int i = 0; i < osn; i++) //O(m) m-str len
        {
            if(std::to_string(prom) == array[i][0])
            {
                tmp  =  space + array[i][1] + result;
                result = tmp;
                break;
            }
        }
        if(i == 0)
        {
            if(prom1check == 1)
                {
                    for(int i = 0; i < osn; i++)
                    {
                        if(std::to_string(prom1) == array[i][0]) // O(m) m - str len
                        {
                            tmp  =  space + array[i][1] + result;
                            result = tmp;
                            break;
                        }
                    }
                }
        }
        j++;
    }
    return result;
}