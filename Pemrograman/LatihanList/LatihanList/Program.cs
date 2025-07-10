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
            List<int> listNilai = new List<int>();

            listNilai.Add(70);
            listNilai.Add(100);
            listNilai.Add(85);

            int nilaiElement1 = listNilai[1];
            Console.WriteLine(nilaiElement1);
            Console.WriteLine();

            foreach (int nilai in listNilai)
            {
                Console.WriteLine(nilai);
            }

            Console.ReadKey();
            Console.Clear();

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
            Console.Clear();

            int i = 1;
            Console.WriteLine("No.  Nim     Nama");
            Console.WriteLine("=================");

            foreach (Mahasiswa data in list)
            {
                Console.WriteLine("{0}    {1}    {2}", i, data.Nim, data.Nama);
                i++;
            }

            Console.ReadKey();
        }
    }
}
