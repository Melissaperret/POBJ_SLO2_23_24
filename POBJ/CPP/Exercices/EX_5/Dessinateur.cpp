#include "Dessinateur.h"
#include "Ellipse.h"
#include "Ligne.h"
#include "Rectangle.h"



void Dessinateur::ConstruireFigure(signed char Choix)
{
    m_FigureChoisie = Choix;

    if (m_FigureChoisie == 'L')
    {
        MaFigure = new Ligne();
    }
    else if (m_FigureChoisie == 'R')
    {
        MaFigure = new Rectangle();
    }
    else
    {
        MaFigure = new Ellipse();
    }
}

void Dessinateur::SaisirPositionXY(int NoPoint)
{
    MaFigure->EffectuerSaisie(NoPoint);
}

void Dessinateur::DessinerFigure()
{
    MaFigure->Dessiner();
}



void Dessinateur::DetruireFigure()
{
    delete MaFigure;
}