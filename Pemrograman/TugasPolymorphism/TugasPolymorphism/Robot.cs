using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TugasPolymorphism
{
    internal class Robot : KarakterGame
    {
        public Robot(string name) : base(name) 
        {
        
        }
        public override void Bergerak()
        {
            Console.WriteLine("{0} meluncur dengan roda anti-gravitasi.", Nama);
        }
        public override void Menyerang()
        {
            Console.WriteLine("{0} menembakkan laser dari lengannya.", Nama);
        }
    }
}
