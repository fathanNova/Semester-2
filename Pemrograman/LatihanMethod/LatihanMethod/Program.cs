using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace LatihanMethod
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int hasil;
            Calculator calculator = new Calculator();

            hasil = calculator.Penjumlahan(10, 2);
            CetakHasil("Hasil Penjumlahan: " + hasil);

            hasil = calculator.Penjumlahan(10, 2, 3);
            CetakHasil("Hasil Penjumlahan Overload: " + hasil);

            hasil = calculator.Pengurangan(10, 2);
            CetakHasil("Hasil Pengurangan: " + hasil);

            hasil = Calculator.Perkalian(5, 2);
            CetakHasil("Hasil Perkalian: " + hasil);

            Console.ReadKey();
        }

        static void CetakHasil(string hasil)
        {
            Console.WriteLine(hasil);
        }
    }
}
