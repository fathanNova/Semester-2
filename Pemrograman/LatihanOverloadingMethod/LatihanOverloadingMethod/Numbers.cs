using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace LatihanOverloadingMethod
{
    public class Numbers
    {
        public int FindMinimum(int number1, int number2) 
        {
            return number1 < number2? number1 : number2;
        }

        public int FindMinimum(int number1, int number2, float number3) 
        { 
            float min = number1 < number2 ? number1 : number2;
            float hasil = number3 < min ? number3 : min;
            return (int)hasil;
        }

        public int FindMaximum(int number1, int number2)
        {
            return number1 > number2 ? number1 : number2;
        }

        public int FindMaximum(int number1, int number2 , float number3) 
        {
            /*float max = number1 > number2 ? number1 : number2;
            float hasil = number3 > max ? number3 : max;
            return (int)hasil;*/
            return (int)(number3 > (number1 < number2 ? number1 : number2) ? number3 : (number1 < number2 ? number1 : number2)); 
        }

    }
}
