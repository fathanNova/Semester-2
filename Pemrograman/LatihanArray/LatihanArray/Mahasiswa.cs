using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace LatihanArray
{
    public class Mahasiswa
    {
        public Mahasiswa(string nama, string nim, string nilai) 
        { 
            Nama = nama;
            Nim = nim;
            Nilai = nilai;
        }
        public string Nama {  get; set; }
        public string Nim { get; set; }
        public string Nilai { get; set; }
    }
}
