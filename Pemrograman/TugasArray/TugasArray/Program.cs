using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TugasArray
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Pegawai[] daftarPegawai = new Pegawai[3];

            Pegawai pegawai1 = new PegawaiTetap("Jhono", "Tetap", 40);
            Pegawai pegawai2 = new PegawaiKontrak("Paijo", "Kontrak", 38);
            Pegawai pegawai3 = new PegawaiHarian("Bimo", "Harian", 30);

            daftarPegawai[0] = pegawai1;
            daftarPegawai[1] = pegawai2;
            daftarPegawai[2] = pegawai3;

            foreach(var pegawai in daftarPegawai)
            {
                pegawai.HitungGaji();
                pegawai.CetakSlipGaji();
            }

            Console.ReadKey();
        }
    }
}
