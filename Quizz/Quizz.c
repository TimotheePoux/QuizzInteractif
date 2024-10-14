#include <stdio.h>
int verif(reponse,bonne_reponse)
{
	int correct = 0;
	if (reponse == bonne_reponse)
	{
		printf("Correct !\n\n");
		correct= 1;
	}
	else
	{
		printf("Non c est faux\n\n");
	}
	return correct;
}
int main()
{
	int score = 0;
	int reponse_joueur = 1;

	printf("Question 1: Combien d'album a sorti Michael Jackson ?\n1: 7\n2: 10\n3: 12\n");
	scanf_s("%d", &reponse_joueur);
	score += verif(reponse_joueur, 2);

	printf("Question 2: Dans quel episode des Simpsons Bart apprend a Homer a telecharger illegalement des films ?\n1: Dans l'episode 14 de la saison 18\n2: Dans l'episode 3 de la saison 21\n3: Dans l'episode 9 de la saison 25\n");
	scanf_s("%d", &reponse_joueur);
	score += verif(reponse_joueur, 3);

	printf("Question 3: Combien de temps dure le film Bee Movie ?\n1: 1 heure et 31 minutes\n2: 1 heure et 35 minutes\n3: 1 heure et 42 minutes\n");
	scanf_s("%d", &reponse_joueur);
	score += verif(reponse_joueur, 1);

	printf("Tu as un score de %d\n",score);
	return 0;
}
