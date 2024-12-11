#include <iostream>
#include <cmath>
#include <string>



bool to3(std::string num)
{
    bool to3 = false;
    int buf = 0;
    for(int i = 0; i < (int)num.size(); i++) //O(n)
    {
        buf += std::stoi(std::string(1, num[i]));
        if(buf >= 3)
        {
            while(buf > 0) //O(k)
            {
                buf -= 3;
            }
        }
    }
    if(buf == 0)
    {
        to3 = true;
    }
    return to3;
}
std::string sum0(std::string num1, std::string num2)  //O(n^2)
{
    std::string result;
    int osn = 10; 
    int i = (int)num1.size() - 1;
    int j = (int)num2.size() - 1;
    int maxsize = std::max((int)num1.size(), (int)num2.size());
    while(i+1 < maxsize) //O(n)
    {
        num1.insert(0, 1, '0');
        i++;
    }
    while(j+1 < maxsize) //O(n)
    {
        num2.insert(0, 1, '0');
        j++;
    }
    while(i >= 0 || j >= 0) //O(n)
    {
        if(std::stoi(std::string(1, num1[i]))+ std::stoi(std::string(1, num2[j])) >= osn)
        {
            result = std::to_string(std::stoi(std::string(1, num1[i]))+ std::stoi(std::string(1, num2[j])) - 10) + result;
            if(i-1 < 0)
            {
                result.insert(0,1, '1');
            }
            else 
            {
                int i1 = i;
                int j1 = j;
                if(num1[i1-1] == '9')
                {
                    while(num1[i1-1] == '9') //O(m)
                    {
                        num1[i1-1] = '0';
                        if(num1[i1-2] == '9')
                        {
                            num1[i1-2] = '0';
                            num1[j1-2] += 1;
                        }
                        else
                        {
                            num1[i1-2] += 1;
                        }
                        if(i1-2 < 0)
                        {
                            num1.resize(maxsize+1);
                            num2.resize(maxsize+1);
                            num1.insert(0,1, '1');
                            num2.insert(0,1, '0');
                            maxsize = (int)num1.size();
                            i++;
                            j++;
                        }
                        i1--;
                        j1--;
                    }     
                }
                else
                {
                    num1[i-1] += 1;
                }
            }   
        }
        else
        {
            result = std::to_string(std::stoi(std::string(1, num1[i]))+ std::stoi(std::string(1, num2[j]))) + result;
        }
        i--;
        j--;
    }
    return result;
}
std::string sum1(std::string num1, std::string num2) //O(n^2)
{
    std::string result;
    int osn = 10;
    int i = (int)num1.size() - 1;
    int j = (int)num2.size() - 1;
    int maxsize = std::max((int)num1.size(), (int)num2.size());
    while(i+1 < maxsize) //O(n)
    {
        num1.insert(0, 1, '0');
        i++;
    }
    while(j+1 < maxsize) //O(n)
    {
        num2.insert(0, 1, '0');
        j++;
    }
    for(int i = maxsize - 1; i >= 0; i--) //O/(n*n)
    {
        if(num1[i] >= num2[i])
        {
            continue;
        }
        if(num1[i] < num2[i])
        {
            int i1 = i;
            while(num1[i1] < num2[i1]) //O(n)
            {
                if(num1[i1-1] == '0' && num2[i1-1] != '0')
                {
                    while(num1[i1-1] == '0' && num2[i1-1] != '0') //O(n)
                    {
                        num1[i1-1] = '9';
                        if(num1[i1-2] != '0')
                        {
                            num1[i1-2]--;
                            i1 = i1 - 2;
                        }
                        else
                        {
                            num2[i1-2]++;
                            i1 = i1 - 2;
                        }
                        i = i1;
                    }
                }
                else
                {
                    num1[i1-1]--;
                    if(num1[i1-1] == '/')
                    {
                        int i2 = i1;
                        while(num1[i2-1] == '/') //O(n)
                        {
                            num1[i2-1] = '9';
                            num1[i2-2]--;
                            i2--;
                        }      
                    }
                    i1--;
                    i = i1;
                }
                
            }
        }
    }
    for(int i= 0; i < (int)num2.size(); i++) //O(n)
        {
            if(num2[i] == '1')
            {
                num2[i] = '9';
                continue;
            }
            if(num2[i] == '2')
            {
                num2[i] = '8';
                continue;
            }
            if(num2[i] == '3')
            {
                num2[i] = '7';
                continue;
            }
            if(num2[i] == '4')
            {
                num2[i] = '6';
                continue;
            }
            if(num2[i] == '6')
            {
                num2[i] = '4';
                continue;
            }
            if(num2[i] == '7')
            {
                num2[i] = '3';
                continue;
            }
            if(num2[i] == '8')
            {
                num2[i] = '2';
                continue;
            }
            if(num2[i] == '9')
            {
                num2[i] = '1';
                continue;
            }
        }
    while(i >= 0 || j >= 0) //O(n)
    {
        if(std::stoi(std::string(1, num1[i]))+ std::stoi(std::string(1, num2[j])) >= osn)
        {
            result = std::to_string(std::stoi(std::string(1, num1[i]))+ std::stoi(std::string(1, num2[j])) - 10) + result; 
        }
        else
        {
            result = std::to_string(std::stoi(std::string(1, num1[i]))+ std::stoi(std::string(1, num2[j]))) + result;
        }
        i--;
        j--;
    }
    while(result.front() == '0') //O(n)
    {
        result.erase(0, 1);
    }
    return result;
}
bool to23(std::string num) //O(n) n - size num
{
    bool to23 = true;
    if((int)num.size() == 2 && (num != "23" && num != "46" && num != "69" && num != "92"))
    {
        to23 = false;
        return to23;
    }
    std::string bufstr = num;
    std::string lastx7;
    std::string lastx71;
    while(num != "23" && num != "46" && num != "69" && num != "92") //O(n)
    {
        lastx7 = num.back();
        lastx71 = lastx7;
        for(int i = 0; i < 6;  i++) //O(1)
        {
            lastx7 = sum0(lastx7, lastx71);
        }
        num.pop_back();
        num = sum0(num, lastx7);
        if((int)num.size() == 2 && (num != "23" && num != "46" && num != "69" && num != "92"))
        {
            to23 = false;
            break;
        }
    }
    return to23;
}
bool to107(std::string num) //O(n) n -size num
{
    bool to107 = false;
    std::string buferstring = num;
    std::string last;
    
    while((int)num.size() >= 4) //O(n)
    {
        if((int)num.size() == 3 && (num != "963" || num != "856" || num != "749" || num != "642" || num != "535" || num != "428" || num != "321" || num != "214" || num != "107" || num != "1177" || num != "0" || num != "1284" || num != "1498" || num != "1605" || num != "1819" || num == "1926" || num != "2247" || num != "2568" || num != "2889"))
        {
            to107 = false;
            return to107;
        }
        buferstring = num;
        buferstring.pop_back();
        last = num.back();
        std::string last1 = last;   //alwfys as first last
        if(num == "963" || num == "856" || num == "749" || num == "642" || num == "535" || num == "428" || num == "321" || num == "214" || num == "107" || num == "1177" || num == "0" || num == "1284" || num == "1498" || num == "1605" || num == "1819" || num == "1926" || num == "2247" || num == "2568" || num == "2889")
        {
            to107 = true;
            return to107;
        }
        for(int i = 0; i < 31; i++) //O(1)
        {
            last = sum0(last, last1);
        }
        if((int)buferstring.size() ==  3 && std::stoi(buferstring) <= std::stoi(last))
        {
            to107 = false;
            return to107;
        }
        num = sum1(buferstring, last);
    }
    if(num == "963" || num == "856" || num == "749" || num == "642" || num == "535" || num == "428" || num == "321" || num == "214" || num == "107" || num == "1177" || num == "0" || num == "1284" || num == "1498" || num == "1605" || num == "1819" || num == "1926" || num == "2247" || num == "2568" || num == "2889")
        {
            to107 = true;
            return to107;
        }
    return to107;
}