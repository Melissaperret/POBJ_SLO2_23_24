// Caneva Ex1 SL228_POBJ language C++ 
// Visual Studio 2022
// 28.11.2023 Mélissa Perret 

using System;


    public class Program
{
    static void Main(string[] args)
    {
        char UserAnswer;
        int ValA, ValB;
        // Variables pour test A et B
        short i;
        short ValB1;
        double ValB2;

        Console.WriteLine("Ecercice:Perret Mélissa"); 
        Console.WriteLine("Solution en C a trandformer en C#");

        do
        {
            Console.WriteLine("Test A ou B, Q pour Quitter");
            UserAnswer = Console.ReadKey().KeyChar;

            //-> majuscule 
            UserAnswer = char.ToUpper(UserAnswer); 

            switch (UserAnswer)
            {
                case 'A':
                    
                    Console.WriteLine("\nTestA: entrez un nombre entre 1 et 9");
                    ValA = Console.Read();
                    ValA = int.Parse(ValA);

                    if (ValA > 9)
                    {
                        ValA = 9;
                        Console.WriteLine("TestA: ValA limitée à 9");
                    }
                    if (ValA == 0)
                    {
                        ValA = 1;
                        Console.WriteLine("TestA: ValA forcée à 1");
                    }
                    if (ValA > 0)
                    {
                        Console.Write(ValA);
                        for (i = 0; i < ValA; i++)
                        {
                            Console.Write("*");
                        }
                        Console.WriteLine();
                    }
                    else
                    {
                        Console.WriteLine("TestA: ValA est négatif !");
                    }
                    break;

                case 'B':
                   
                    Console.WriteLine("\nTestB: entrez une valeur entre 0 et 9");
                    ValB = Console.Read();

                    if (ValB >= 0 && ValB <= 9)
                    {
                        for (i = 0; i < ValB; i++)
                        {
                            ValB1 = (short)(100 + (10 * i));
                            ValB2 = ValB1 / 10000.0;
                            Console.WriteLine($"TestB: i= {i} ValB1= {ValB1:F5} ValB2= {ValB2}");
                        }
                    }
                    else
                    {
                        Console.WriteLine("TestB: ValB n'est pas entre 0 et 9 !");
                    }
                    break;
            } // end switch

        } while (!(UserAnswer == 'Q' || UserAnswer == 'q'));

        Console.ReadLine();
    }
}