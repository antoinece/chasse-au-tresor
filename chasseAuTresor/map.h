#pragma once

#define largeur  4
#define longeur  4

void drawPlayfield();
int validImput();
void cacherTresor();

extern int cases[largeur * longeur];
extern int casesJouer[longeur * largeur];

enum casesStatus
{
	vide,
	cherché,
	trouvé,
};