using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Inheritance
{
    public class Person
    {
        public string Name { get; set; }
        public int Age { get; set; }

        public void GetNameAge()
        {
            Console.WriteLine("Name: {0} and Age: {1}", Name, Age);
            Console.WriteLine();
        }

        // Dibawah ini adalah constructor
        // Constructor memungkinkan pengguna untuk mengisi *Argument langsung tanpa memanggil nama dari properties
        // Argument adalah nilai-nilai yang diisi di dalam Constructor pada file Program
        public Person(string name, int age) 
        {
            Name = name;
            Age = age;
        }
    }
}
