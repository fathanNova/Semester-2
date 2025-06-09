using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace LatihanPolymorphism
{
    public class Kucing : Hewan
    {
        public override void Suara()
        {
            Console.WriteLine("Kucing Bernama {0} Bersuara: Miaw", Name);
        }
    }
}
