using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TugasPolymorphism
{
    public class KarakterGame
    {
        public KarakterGame(string nama) { 
            Nama = nama;
        }
        public string Nama {  get; set; }

        public virtual void Bergerak()
        {

        }
        public virtual void Menyerang()
        {

        }
    }
}
