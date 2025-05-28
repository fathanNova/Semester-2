using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Inheritance
{
    internal class Student : Person
    {
        public string StudentId { get; set; }
        public string Email { get; set; }

        public void GetStudent()
        {
            Console.WriteLine("Student Name: {0}, Age: {1}, ID: {2}, Email: {3}", Name, Age, StudentId, Email);
            Console.WriteLine();
        }

        public Student(string name, int age, string studentId, string email) : base(name, age)  
        {
            StudentId = studentId;
            Email = email;
        }
    }
}
