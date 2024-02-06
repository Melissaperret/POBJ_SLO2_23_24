using System;

public class Cercle : FormesGeometriques
{
    // Constructeur
    public Cercle()
    {
        Console.WriteLine("Constructeur de Cercle");
    }

    public override double CalculerSurface(double diametre, double unused)
    {
        double rayon = diametre * 0.5;  //diamètre /2
        Surface = Math.PI * rayon * rayon;
        return Surface;
    }

    public override double CalculerPerimetre(double diametre, double unused)
    {
        Perimetre = Math.PI * diametre;
        return Perimetre;
    }
}
