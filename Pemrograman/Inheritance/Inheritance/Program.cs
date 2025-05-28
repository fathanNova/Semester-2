using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Inheritance
{
    internal class Program
    {
        static void Main(string[] args)
        {
            /*Person person = new Person();
            person.Name = "Lang";
            person.Age = 20;
            person.GetNameAge();

            Teacher teacher = new Teacher();
            teacher.Name = "Sus";
            teacher.Age = 30;
            teacher.TeacherID = "3412";
            teacher.Subject = "AI";
            teacher.GetTeacher();

            Student student = new Student();
            student.Name = "Nova";
            student.Age = 20;
            student.StudentId = "6064";
            student.Email = "novaaroyan13@gmail.com";
            student.GetStudent();*/

            Person person = new Person("Lang", 20); // "Lang" dan 20 adalah Argument yang nantinya akan disimpan pada parameter
            person.GetNameAge();

            Teacher teacher = new Teacher("Sus", 30, "3412", "AI");
            teacher.GetTeacher();

            Student student = new Student("Nova", 20, "6064", "novaaroyan13@gmail.com");
            student.GetStudent();

            Console.ReadKey();
        }
    }
}
