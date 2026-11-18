#ifndef COMPLEX_H
#define COMPLEX_H


class Complex {
private:
    double real;   
    double imag;   

public:
    
    Complex(double r = 0.0, double i = 0.0);

    
    void setReal(double r);
    void setImag(double i);
    void setComplex(double r, double i);

    
    double getReal() const;
    double getImag() const;

    
    void imprimir() const;

    
    Complex sumar(const Complex& otro) const;
    Complex restar(const Complex& otro) const;
};

#endif
