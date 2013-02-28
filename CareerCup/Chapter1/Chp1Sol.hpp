// =====================================================================================
// 
//       Filename:  Chp1Sol.hpp
// 
//    Description:  Career Cup Exercises Chapter 1 Solution
// 
//        Version:  1.0
//        Created:  02/28/2013 02:10:38 PM
//       Revision:  none
//       Compiler:  g++
// 
//         Author:  Nick Yang Cai ((nickchy)), nickchy1984@gmail.com
//        Company:  
// 
// =====================================================================================

#ifndef  CHP1SOL_HPP
#define  CHP1SOL_HPP


// ===  FUNCTION  ======================================================================
//         Name:  Fibonacci
//  Description:  calcualte the nth fibonacci number for question 1.1
// =====================================================================================
int Fibonacci (int n)
{
    int a = 0;
    int b = 1;
    if(n <0)
    {
        return -1;
    }
    else if( n < 2) 
    {
        return n;
    }
    else
    {
        for (int i = 2; i <= n; i++)
        {
            b= a+ b;
            a = b;
        }
    }
    return b;
}		// -----  end of function Fibonacci  -----


#endif   // ----- #ifndef CHP1SOL_HPP  -----
