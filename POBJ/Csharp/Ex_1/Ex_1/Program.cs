// Caneva Ex1 SL228_POBJ language C++ 
// Visual Studio 2022
// 28.11.2023 Mélissa Perret 

using System;
using System.Globalization;

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
        Console.WriteLine("Solution en C a transformer en C#");

        do
        {
            Console.WriteLine("Test A ou B, Q pour Quitter");
            UserAnswer = Console.ReadLine().ToUpper()[0];

            switch (UserAnswer)
            {
                case 'A':

                    Console.WriteLine("Test A: entrez un nombre entre 1 et 9");
                    if (int.TryParse(Console.ReadLine(), out ValA))

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

                    Console.WriteLine("Test B: entrez une valeur entre 0 et 9");
                    if (int.TryParse(Console.ReadLine(), out ValB))

                    if (ValB >= 0 && ValB <= 9)
                    {
                        for (i = 0; i < ValB; i++)
                        {
                            ValB1 = (short)(100 + (10 * i));
                            ValB2 = ValB1 / 10000.0;
                            Console.WriteLine($"Test B: i= {i} ValB1= {ValB1:D3} ValB2= {ValB2.ToString("F6", CultureInfo.InvariantCulture)}");

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