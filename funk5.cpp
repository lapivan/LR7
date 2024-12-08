#include <iostream>
#include <cmath>
#include <string>

int number(int left, int right, int numslaves, int  target)
{
    std::cout << "По итогам первого дня знаем, что отравленная бочка находится в диапазоне от " << left << " до " << right << std::endl;
    int c = 0;
    int j1  =  0;
    int left1 = left;
    target -= left;
    right -= left;
    left = 0;
    int **a = new int*[numslaves];
    int n = (pow(2, numslaves) / 2);
    for(int  i = 0; i < numslaves; i++)//O(n)
    {
        a[i] = new int[(int)pow(2, (int)numslaves)];
    }
    for(int i = 0; i < numslaves; i++) //O(n)
    {
        for(int j = 0; j < pow(2, numslaves); j++)
        {
            if(j1 < n)
            {
                a[i][j] = 0;
                j1++;
            }
            else
            {
                a[i][j] = 1;
                c++;
                j1++;
                if(c == n)
                {
                    c = 0;
                    j1 = 0;
                }
            }
        }
        n/=2;
    }
    int result = 0;
    int i1 = 0;
    for(int i = numslaves-1; i>=0; i--) //O(n)
    {
        if(a[i][target] == 0)
        {
            i1++;
            continue;
        }
        else
        {
            result += pow(2, i1);
            i1++;
        }
    }
    result+=left1;

    for(int i = 0; i < numslaves; i++) //O(n)
    {
        delete[] a[i];
        a[i] = nullptr;
    }
    delete[] a;
    a = nullptr;
    return result;
}