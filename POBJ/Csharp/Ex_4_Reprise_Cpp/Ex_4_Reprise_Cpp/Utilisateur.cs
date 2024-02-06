using System;

public class Utilisateur
{
    private int m_CodeFormeChoisie;
    private double m_x1;
    private double m_x2;
    private FormesGeometriques myFormesGeometriques;

    public void AfficherResultats()
    {
        if (m_CodeFormeChoisie < 3)
        {
            if (m_CodeFormeChoisie == 0)
            {
                // Affichage pour le TriangleRectangle
                Console.WriteLine($"Pour un TriangleRectangle base = {m_x1} hauteur = {m_x2} surface = {myFormesGeometriques.GetSurface()} perimetre = {myFormesGeometriques.GetPerimetre()}");
            }
            else if (m_CodeFormeChoisie == 1)
            {
                // Affichage pour le Rectangle
                Console.WriteLine($"Pour un Rectangle largeur = {m_x1} hauteur = {m_x2} surface = {myFormesGeometriques.GetSurface()} perimetre = {myFormesGeometriques.GetPerimetre()}");
            }
            else if (m_CodeFormeChoisie == 2)
            {
                // Affichage pour le Cercle
                Console.WriteLine($"Pour un Cercle diametre = {m_x1} surface = {myFormesGeometriques.GetSurface()} perimetre = {myFormesGeometriques.GetPerimetre()}");
            }
            else
            {
                // Gestion d'une valeur de m_CodeFormeChoisie non prise en charge
                Console.Error.WriteLine("Code de forme non pris en charge.");
            }
        }
        else
        {
            Console.Error.WriteLine("Erreur : Aucune forme choisie pour afficher les resultats.");
        }
    }

    public int ChoisirForme(int CodeForme)
    {
        m_CodeFormeChoisie = CodeForme;

        if (m_CodeFormeChoisie == 0)
        {
            myFormesGeometriques = new TriangleRectangle();
        }
        else if (m_CodeFormeChoisie == 1)
        {
            myFormesGeometriques = new Rectangle();
        }
        else if (m_CodeFormeChoisie == 2)
        {
            myFormesGeometriques = new Cercle();
        }
        return m_CodeFormeChoisie;
    }

    public void SaisirLesParametres()
    {
        if (m_CodeFormeChoisie == 0)
        {
            // Saisie des paramètres pour le TriangleRectangle
            Console.Write("Entrer la valeur de la base du TriangleRectangle : ");
            m_x1 = Convert.ToDouble(Console.ReadLine());

            Console.Write("Entrer la valeur de la hauteur du TriangleRectangle : ");
            m_x2 = Convert.ToDouble(Console.ReadLine());
        }
        else if (m_CodeFormeChoisie == 1)
        {
            // Saisie des paramètres pour le Rectangle
            Console.Write("Entrer la valeur de la largeur du Rectangle : ");
            m_x1 = Convert.ToDouble(Console.ReadLine());

            Console.Write("Entrer la valeur de la hauteur du Rectangle : ");
            m_x2 = Convert.ToDouble(Console.ReadLine());
        }
        else if (m_CodeFormeChoisie == 2)
        {
            // Saisie des paramètres pour le Cercle
            Console.Write("Entrer la valeur du diametre du Cercle : ");
            m_x1 = Convert.ToDouble(Console.ReadLine());
            m_x2 = 0;
        }
        else
        {
            // Gestion d'une valeur de m_CodeFormeChoisie non prise en charge
            Console.Error.WriteLine("Code de forme non pris en charge.");
        }
    }

    public void ExecuterLesCalculs()
    {
        // Vérifier si m_CodeFormeChoisie est valide
        if (m_CodeFormeChoisie < 3)
        {
            // Appeler les méthodes de calcul de la classe FormesGeometrique
            myFormesGeometriques.CalculerSurface(m_x1, m_x2);
            myFormesGeometriques.CalculerPerimetre(m_x1, m_x2);
        }
        else
        {
            Console.Error.WriteLine("Erreur : Aucune forme choisie pour effectuer les calculs.");
        }
    }
}
