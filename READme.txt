Les 5 fonctions principal (Seek,Arrival,Flee...) sont implementer dans l'acteur IaVehicule,
tandis que les trois fonctions de circuit sont dans l'acteur VehiculeCircuit.
Les class c++ ce trouve dans All/C++ Classes

Le joueur est controlable grace au touche z,q,s,d et peut monter/descendre avec l,m

J'ai séparer les IaVehicule Des Vehule circuit en deux map differente, qui sont dans all/content/levels.
Les IaVehule peuvent etre changer en appyant sur espace ou T, l'agorithme suivi par l'IA est afficher en haut a gauche au moment du changement.
Si un acteur sort de l'aire de jeux il est téléporter au centre de cette aire.
J'ai positionné deux VehiculeCircuit different, une en circuit qui ce trouve au centre tandis que celle qui fais le tour sur les cubes est en one path.
