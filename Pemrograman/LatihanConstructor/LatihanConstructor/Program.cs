using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace LatihanConstructor
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Mahasiswa mhs1 = new Mahasiswa();
            CetakHasil(mhs1);

            Console.WriteLine();

            Mahasiswa mhs2 = new Mahasiswa("6000", "Sat");
            CetakHasil(mhs2);

            Console.ReadKey();
        }

        static void CetakHasil(Mahasiswa mhs)
        {
            Console.WriteLine("Nim: {0}", mhs.Nim);
            Console.WriteLine("Nama: {0}", mhs.Nama);
        }
    }
}
