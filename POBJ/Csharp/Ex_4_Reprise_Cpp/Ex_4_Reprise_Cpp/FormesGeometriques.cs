using System;

public class FormesGeometriques
{
    protected double Surface;
    protected double Perimetre;

    // Méthodes virtuelles
    public virtual double CalculerSurface(double x1, double x2)
    {
        // Implémentation par défaut ou peut être abstraite si nécessaire
        return 0.0;
    }

    public virtual double CalculerPerimetre(double x1, double x2)
    {
        // Implémentation par défaut ou peut être abstraite si nécessaire
        return 0.0;
    }

    public double GetSurface()
    {
        return Surface;
    }

    public double GetPerimetre()
    {
        return Perimetre;
    }

    public FormesGeometriques()
    {
        Surface = 0.0;
        Perimetre = 0.0;
        Console.WriteLine("Constructeur de FormesGeometriques");
    }
}
