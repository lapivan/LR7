#include <iostream>
#include <cmath>
#include <string>

int length(char* a)  //O(n)
{
    int counter = 0;
    for(int i = 0; ;i++)
    {
        if(a[i] == '0'|| a[i] == '1')
        {
            counter ++;
        }
        else
        {
            break;
        }

    }
    return counter;
}
int closest2(int a) //O(n)
{
    int dva = 8;
    while(dva <= a)
    {
        dva *= 2;
    }
    return dva;
}
void delna2(std::string &num)  //O(n)
{
    std::string result;
    int ostatok = 0;
    for (char el : num) //O(n)
    {
        int oneel = ostatok * 10 + (el - '0');
        result += (oneel / 2) + '0';
        ostatok = oneel % 2;
    }
    while (result.length() > 1 && result[0] == '0') //O(m)
    {
        result.erase(0, 1);
    }
    num = result;
}
void lindectobin(std::string &dec)
{
    bool otr  = 0;
    if(dec[0] == '-')
    {
        dec.erase(0, 1); //O(1)
        otr = 1;
    }
    std::string bin;
    std::string number = dec;
    while(number != "0")
    {
        int ost = (number.back() - '0') % 2; //O(1)
        bin = std::to_string(ost) + bin;  //O(k)
        delna2(number);  //O(n)

    }
    dec = bin;
    if(otr == 1)
    {
        dec = '1' + dec; //O(1)
    }
    else
    {
        dec = '0' + dec; //O(1)
    }
}
int counter(std::string a) //O(n)
{
    int counter = 0;
    counter = (int)a.size();
    counter = closest2(counter); //O(n)
    return counter;
}
char* convert10to2(int a, int counter)
{
    bool pos = false;
    if(a >= 0)
    {
        pos = true;
    }
    a = abs(a);
    int i = counter-1;
    char* b = new char [counter];
    while(i>0)
    {
        if((char)(a%2) == 1)
        {
            b[i] = '1';
        }
        else
        {
            b[i] = '0';
        }
        a/=2;
        i--;
    }
    if(pos == true)
    {
        b[0] = '0';
    }
    else
    {
        b[0] = '1';
    }
return b;
}
void converttodop(char* a) //O(n)
{
    if(a[0] == '0') //O(1)
    {
        return;
    }
    else
    {
        int size = length(a);
        int i = size-1;
        int i1=i;
        while(i!=0) //O(n)
        {
            if(a[i] == '0')
            {
                a[i] = '1';
            }
            else
            {
                a[i] = '0';
            }
            i--;
        }
        while(true) //O(n)
        {
            if(a[i1] == '0')
            {
                a[i1]='1';
                break;
            }
            else
            {
                a[i1] ='0';
                i1--;
                while(a[i1] != '0')
                {
                    a[i1] = '0';
                    i1--;
                }
                a[i1] = '1';
                break;
            }
        }
    }
}
char* sumdopcode(char* a, char* b, int size) //O(n)
{
    char* c = new char[size];
    int ind = size-1;
    int bufa = 0;
    int bufb = 0;
    int bufc = 0;
    while(ind != 0) //O(n)
    //every operation O(1)
    {
        if(a[ind] == '1')
        {
            bufa = 1;
        }
        if(a[ind] == '0')
        {
            bufa = 0;
        }
        if(b[ind] == '1')
        {
            bufb = 1;
        }
        if(b[ind] == '0')
        {
            bufb = 0;
        }
        bufc += bufa + bufb;
        if(bufc == 2)
        {
            c[ind] = '0';
            bufc = 1;
            ind--;
            continue;
        }
        if(bufc == 3)
        {
            c[ind] = '1';
            bufc = 1;
            ind--;
            continue;
        }
        if(bufc == 1)
        {
            c[ind] = '1';
        }
        if(bufc == 0)
        {
            c[ind] = '0';
        }
        bufc  =  0;
        ind--;
    }
    if(a[0] == '0' && b[0] == '0')
    {
        c[0] = '0';
    }
    if(a[0] == '1' && b[0] == '0')
    {
        if(bufc == 1)
        {
            c[0] = '0';
        }
        else
        {
            c[0] = '1';
        }       
    }
    if(a[0] == '0' && b[0] == '1')
    {
        if(bufc == 1)
        {
            c[0] = '0';
        }
        else
        {
            c[0] = '1';
        }
    }
    if(a[0] == '1' && b[0] == '1')
    {
        c[0] = '1';
    }
    return c;    
}
void todirectcode(char* a, int len)
{
    std::string inputcode(len, '\0');
    for(int  i = 0; i<  len; i++) //O(n)
    {
        inputcode[i] = a[i];
    }
    if(inputcode[0] == '0') //O(1)
    {
        return;
    }
    if(inputcode[(int)inputcode.size() - 1] == '1')
    {
        inputcode[(int)inputcode.size() - 1] = '0'; //O(1)
        char x = inputcode[0]; //O(1)
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
        inputcode.insert(0, 1, x); //O(1)
        for(int  i = 0; i<  len; i++)
        {
            a[i]= inputcode[i]; //O(n)
        }
        return;
    }
    else
    {
        inputcode[(int)inputcode.size() - 1] = '0'; //O(1)
        char x = inputcode[0]; //O(1)
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
        while(0 == 0)
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
        for(int  i = 0; i<  len; i++)
        {
            a[i]= inputcode[i]; //O(n)
        }
        return;
    }
}
long double tonum(char* a, int len) //O(n)
{
    long double sum = 0;
    int ind = len-1;
    long double i = 2;
    long double n = 0;
    long double buf = 0;
    while(ind != 0) //O(n)
    {
        if(a[ind] == '1')
        {
            buf = 1;
        }
        else
        {
            buf = 0;
        }
        sum += buf * pow(i, n);
        n++;
        ind--;
    }
    if(a[0] == '1') //O(1)
    {
        sum *= -1;
    }
    return sum;
}