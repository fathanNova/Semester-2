using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TugasPolymorphism
{
    internal class Zombie : KarakterGame
    {
        public Zombie(string nama) : base(nama)  
        { 
        
        }
        public override void Bergerak()
        {
            Console.WriteLine("{0} berjalan tertatih-tatih ke arah target.", Nama);
        }
        public override void Menyerang()
        {
            Console.WriteLine("{0} menggigit korbannya dengan ganas!", Nama);
        }
    }
}
