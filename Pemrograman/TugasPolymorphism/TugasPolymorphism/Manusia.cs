using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TugasPolymorphism
{
    internal class Manusia : KarakterGame
    {
        public Manusia(string nama) : base(nama) 
        { 
        
        }
        public override void Bergerak()
        {
            Console.WriteLine("{0} berlari menuju posisi aman.", Nama);
        }
        public override void Menyerang()
        {
            Console.WriteLine("{0} menembak musuh dengan senjata api.", Nama);
        }
    }
}
