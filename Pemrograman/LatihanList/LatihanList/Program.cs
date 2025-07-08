using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace LatihanList
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Mahasiswa mhs1 = new Mahasiswa();
            mhs1.Nim = "1234";
            mhs1.Nama = "Erik";

            Mahasiswa mhs2 = new Mahasiswa();
            mhs2.Nim = "1235";
            mhs2.Nama = "Wely";

            List<Mahasiswa> list = new List<Mahasiswa>();
            list.Add(mhs1);
            list.Add(mhs2);

            Mahasiswa mhs = list[1];
            Console.WriteLine("{0}, {1} ", mhs.Nim, mhs.Nama);

            Console.ReadKey();
        }
    }
}
