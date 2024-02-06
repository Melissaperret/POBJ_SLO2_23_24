using System;

public class Rectangle : FormesGeometriques
{
    // Constructeur
    public Rectangle()
    {
        Console.WriteLine("Constructeur du Rectangle");
    }

    public override double CalculerSurface(double largeur, double hauteur)
    {
        Surface = largeur * hauteur;
        return Surface;
    }

    public override double CalculerPerimetre(double largeur, double hauteur)
    {
        Perimetre = 2 * (largeur + hauteur);
        return Perimetre;
    }
}
