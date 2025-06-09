using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace LatihanPolymorphism
{
    public class Anjing : Hewan
    {
        public override void Suara()
        {
            Console.WriteLine("Anjing Bernama {0} Bersuara: Guk Guk", Name);
        }
    }
}
