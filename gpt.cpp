#include <iostream>
#include <vector>

void legendrePolynomials(int N, double x) {
    // Vektor zur Speicherung der Legendre-Polynome
    std::vector<double> P(N + 1);

    // Anfangswerte
    P[0] = 1.0; // P0(x) = 1
    if (N > 0) {
        P[1] = x; // P1(x) = x
    }

    // Berechnung der Legendre-Polynome bis P_N(x)
    for (int n = 1; n < N; ++n) {
        P[n + 1] = ((2.0 * n + 1.0) / (n + 1.0)) * x * P[n] - (n / (n + 1.0)) * P[n - 1];
    }

    // Ausgabe der Werte
    for (int n = 0; n <= N; ++n) {
        std::cout << "P_" << n << "(" << x << ") = " << P[n] << std::endl;
    }
}

int main() {
    int N = 5; // Maximaler Grad der Legendre-Polynome
    double x = 0.5; // Punkt, an dem die Polynome ausgewertet werden

    legendrePolynomials(N, x);

    return 0;
}
