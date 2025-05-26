using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace LatihanClassDanObject
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Mahasiswa mhs1 = new Mahasiswa();
            Mahasiswa mhs2 = new Mahasiswa();

            mhs1.Nama = "Fathan";
            mhs1.Nim = "224";
            mhs1.Ipk = 3.8f;

            mhs2.Nama = "Nova";
            mhs2.Nim = "225";
            mhs2.Ipk = 3.8f;

            mhs1.Registrasi();
            mhs1.isiKrs();

            mhs2.Registrasi();
            mhs2.isiKrs();

            Console.ReadKey();
        }
    }
}
