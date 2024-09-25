// PremierProgramme.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <cmath>

using std::cout; using std::endl; using std::cin;

 


//exercice 1

double convertir(double distance, char unite) {

	if (unite == 'm') {//"" tu vas entrer une chaine de caractere
		return(distance * 1.609);

	}
	else {
		return(distance / 1.609);
	}
}




/*
void saisir(double & float;char & unite)// passage par reference {}

*/

//exercice 4
double distance(double xa, double ya, double xb, double yb) {

	double DisTance;
	double xab = xa - xb;
	double yab = ya - yb;
	DisTance = sqrt(pow(xab, xab) + pow(yab, yab));
	return(DisTance);


}


//exercice5
double f(double x, bool&ok) {
	if (((x - 1) * (2 - x)) < 0 ) {
		ok = false;
	}
	else {
		ok = true;
		double X = sqrt((x - 1) * (2 - x));
		return (X);
	}

	
}
// exercice 7
int facto(int n) {
	int x=1;
	while (n != 0) {
		x = x * n;
		n = n - 1;

	}
	return(x);
}
int main()

{

	/* 
	//exercice1
	char unite; double distance;
	saisir(&unite, &distance);
	cout << unite<<endl;
	cout << distance<<endl;
	cout << (convertir(distance, unite));

	*/
	





	/*
	//exercie2
	int tab[10]; int i;
	for (i = 0; i < 10; i++) {
		cout << ("donner votre  ");
		cout << (i + 1);
		cout << ("  nombre");
		cin >> tab[i];
	}
	int min = tab[0];
	for (i = 1; i < 10; i++) {
		if (tab[i] < min) {
			min = tab[i];
		}

	}
	cout << ("la valeur  minimale est");
	cout << min;

	*/

	//exercice 4
	int xa, ya, xb, yb;
	cout << ("donner les cordonnées de A xa et ya") << endl;
	cin >> xa; cin >> ya;
	cout << ("donner les cordonnées de B xb et yb") << endl;
	cin >> xb; cin >> yb;
	cout << ("la distance entre A et B est:   "); cout<<(distance(xa, ya, xb, yb));




	/*
	//exercice 5

	bool ok;
	double x;
	cout << ("donner la valeur de x: ");
	cin >> x;
	double X = f(x, ok);

	if (ok == true)
	{
		cout << ("la racine carré de   "); cout << ((x - 1) * (2 - x)); cout << ("  est  "); cout << (X);
	}
	else
	{
		cout << ("fonction est défini au point x, ");
	}

	*/



	/*
	// exercice 7
	int n;
	cout << ("donner votre entier ");
	cin >> n;
	cout << (facto(n));
	
	*/
	
	
	
	
	
	
	
	


	

	/*
	


	cout << (convertir(distance, unite));
	*/

 
	/*
	
	
	/*
	

	 


}


// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
