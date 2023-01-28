Les 5 fonctions principal (Seek,Arrival,Flee...) sont implementer dans l'acteur IaVehicule,
tandis que qes trois fonctions de circuit sont dans l'acteur VehiculeCircuit.

Le joueur est controlable grace au touche z,q,s,d

J'ai séparer les IaVehicule Des Vehule circuit en deux map differente, qui sont dans all/content/levels.
Les IaVehule peuvent etre changer en appyant sur espace ou T, l'agorithme suivi par l'IA est afficher en haut a gauche au moment du changement.
J'ai positionné deux VehiculeCircuit different, une en circuit qui ce trouve au centre tandis que celle qui fais le tour sur les cubes est en one path.