
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TugasPolymorphism
{
    internal class Program
    {
        static void Main(string[] args)
        {
            KarakterGame karakter;

            karakter = new Zombie("Zed");
            karakter.Bergerak();
            karakter.Menyerang();

            Console.WriteLine();

            karakter = new Manusia("John Doe");
            karakter.Bergerak();
            karakter.Menyerang();

            Console.WriteLine();

            karakter = new Robot("XR-7");
            karakter.Bergerak();
            karakter.Menyerang();

            Console.ReadKey();
        }
    }
}
