using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TugasPolymorphism
{
    public class Manusia : IKarakterGame
    {
        public string Nama { get; set; }
        public Manusia(string name)
        {
            Nama = name;
        }
        public void Bergerak()
        {
            Console.WriteLine("{0} berlari menuju posisi aman.", Nama);
        }
        public void Menyerang()
        {
            Console.WriteLine("{0} menembak musuh dengan senjata api.", Nama);
        }
    }
}
