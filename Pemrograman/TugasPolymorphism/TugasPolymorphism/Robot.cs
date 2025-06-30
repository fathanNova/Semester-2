using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TugasPolymorphism
{
    internal class Robot : IKarakterGame
    {
        public string Nama {  get; set; }
        public Robot(string name)
        {
            Nama = name;
        }
        public void Bergerak()
        {
            Console.WriteLine("{0} meluncur dengan roda anti-gravitasi.", Nama);
        }
        public void Menyerang()
        {
            Console.WriteLine("{0} menembakkan laser dari lengannya.", Nama);
        }
    }
}
