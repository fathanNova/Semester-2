using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace LatihanArray
{
    internal class Program
    {
        static void Main(string[] args)
        {
            /*
            string[] arrNama = { "erick", "wely", "sony", "joni" };
            
            Console.WriteLine(arrNama[2].ToString() + "\n");

            for (int i = 0; i < arrNama.Length; i++)
            {
                Console.WriteLine(arrNama[i]);
            }
            Console.WriteLine();

            int[] arrBil = new int[3];

            arrBil[0] = 12;
            arrBil[1] = 14;
            arrBil[2] = 24;

            foreach(int bil in arrBil)
            {
                Console.WriteLine(bil.ToString());
            }
            */

            Mahasiswa[] daftarMhs = new Mahasiswa[3];
            Mahasiswa mhs1 = new Mahasiswa("Erik", "1234", "75");
            Mahasiswa mhs2 = new Mahasiswa("Welly", "1235", "80");
            Mahasiswa mhs3= new Mahasiswa("Sony", "1236", "95");

            daftarMhs[0] = mhs1;
            daftarMhs[1] = mhs2;
            daftarMhs[2] = mhs3;
            int i = 1;
            Console.WriteLine("No   Nim     Nama    Nilai");
            Console.WriteLine("==========================");
            foreach (Mahasiswa nama in daftarMhs)
            {
                Console.WriteLine("{0}.  {1}     {2}     {3}", i, nama.Nim, nama.Nama, nama.Nilai  );
                i++;
            }
            Console.WriteLine();

            Console.ReadKey();
        }
    }
}
