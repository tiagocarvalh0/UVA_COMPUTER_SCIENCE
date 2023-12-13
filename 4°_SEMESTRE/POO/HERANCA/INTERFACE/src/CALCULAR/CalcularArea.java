package CALCULAR;

import FIGURA.FiguraGeometrica;

public class CalcularArea {

    public double SomaArea(FiguraGeometrica x, FiguraGeometrica y) {
        return x.calcularArea() + y.calcularArea();
    }
    
}