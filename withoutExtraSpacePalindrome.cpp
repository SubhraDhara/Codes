/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string s) {
        string s3="";
        for(int i = 0 ; i <s.size() ; i++)
        {
            if(s[i]>=65 && s[i]<=90 || s[i]>=97 && s[i]<=122 || s[i]>=48 && s[i]<=57)
                s3 += tolower(s[i]);
        }
        cout<<s3<<endl;
         int j = s3.length() - 1;
        for(int i = 0 ; i < s3.length()/2 ; i++)
        {
            if((s3[i]>=65 && s3[i]<=90 || s3[i]>=97 && s3[i]<=122 || s3[i]>=48 && s3[i]<=57) && (s3[i]>=65 && s3[i]<=90 || s3[i]>=97 && s3[i]<=122 || s3[i]>=48 && s3[i]<=57))
                if(s3[i]!=s3[j])
                {
                    return false;
                    break;
                }
            j--;
        }   
        return true;
    }


int main()
{
    string s = "A man, a plan, a canal: Panama";
    bool b = isPalindrome(s);
    cout<<b;
    return 0;
}