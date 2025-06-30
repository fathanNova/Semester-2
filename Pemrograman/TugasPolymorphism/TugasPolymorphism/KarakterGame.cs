using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TugasPolymorphism
{
    public interface IKarakterGame
    {
        string Nama { get; set; }
        /*public IKarakterGame(string nama) { 
            Nama = nama;
        }*/

        void Bergerak();
        void Menyerang();
    }
}
