using System;

public class TriangleRectangle : FormesGeometriques
{
    // Constructeur
    public TriangleRectangle()
    {
        Console.WriteLine("Constructeur du TriangleRectangle");
    }

    public override double CalculerSurface(double baseTri, double hauteurTri)
    {
        Surface = 0.5 * baseTri * hauteurTri;
        return Surface;  // Formule pour la surface d'un triangle rectangle (base * hauteur / 2), mais la division dans le code est moins bien que les multiplications 
    }

    public override double CalculerPerimetre(double baseTri, double hauteurTri)
    {
        // Pour un triangle rectangle, il faudra également calculer l'hypoténuse 
        double hypotenuse = Math.Sqrt(baseTri * baseTri + hauteurTri * hauteurTri);
        Perimetre = baseTri + hauteurTri + hypotenuse;
        return Perimetre; // Formule pour le périmètre d'un triangle rectangle
    }
}
