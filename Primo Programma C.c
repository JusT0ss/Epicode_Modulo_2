#include <stdio.h>
#include <math.h>
#define PI 3.14;
/*definiamo pi come costante , questa operazione non è ncessaria perchè in quanto tale può 
semplicemente essere lasciata come moltiplicatore statico all'interno della formula per calcoalre l'area del cerchio*/

int main()
{

float d;
float Ac, At, Aq;
/*possiamo anche definirla qui come cost float PI = 3.14*/

printf ("inserisci un numero:" );
scanf ("%f", &d);


/*usiamo il %.2f per stamapare solamente 2 cifre dopo lo 0*/
Aq = d * d; 
printf ("L'area del quadrato è: %.2f \n " , Aq);

At = d * 3;
printf ("L'area del triangolo è: %.2f \n", At );

/*alternativa Ac = (d / 2) * PI; */
Ac = (d / 2) * PI;
printf ("L'area del cerchio è: %.2f \n", Ac );

return 0;
}