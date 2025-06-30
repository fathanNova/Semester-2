using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TugasPolymorphism
{
    internal class Zombie : IKarakterGame
    {
        public string Nama { get; set; }
        public Zombie(string name)
        {
            Nama = name;
        }
        public void Bergerak()
        {
            Console.WriteLine("{0} berjalan tertatih-tatih ke arah target.", Nama);
        }
        public void Menyerang()
        {
            Console.WriteLine("{0} menggigit korbannya dengan ganas!", Nama);
        }
    }
}
