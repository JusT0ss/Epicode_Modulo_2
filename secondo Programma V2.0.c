#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void GameStart();
void Questions(int *score, int *fail);
char CheckAnswers();
void DisplayScore(int *score, int *fail);
void Insult(int *fail);
void QuestionsH(int *score, int *fail);

int main() {
    char playAgain[3];

    do {
        int score = 0;
        int fail = 0;
        GameStart();
        Questions(&score, &fail);
        DisplayScore(&score, &fail);

        do {
            printf("Vuoi rigiocare? (si o no): ");
            scanf("%s", playAgain);

            if (strcmp(playAgain, "si") != 0 && strcmp(playAgain, "no") != 0) {
                printf("eddai... ti ho chiesto di inserire si o no, non credo sia complesso....\n");
                printf(".......ritenta.......\n");
            }
        } while (strcmp(playAgain, "si") != 0 && strcmp(playAgain, "no") != 0);

    } while (strcmp(playAgain, "si") == 0);

    return 0;
}

void GameStart() {
    char r[2];
    char nome[100];
    
    printf("\n...................................................\n");
    printf("Benvenuto in Epicode Quiz!\n");

    printf("Iniziamo una nuova partita?\n");
    printf("Che ne pensi? Si o no? (mi raccomando, scrivi si o no ._.'')\n");

    do {
        scanf("%s", r);
        fflush(stdin);

        if (strcmp(r, "si") != 0 && strcmp(r, "no") != 0) {
            printf("Cavolo, se non ti è chiaro cosa devi fare forse non sei abbastanza intelligente per giocare :( Ritenta!\n");
        }
    } while (strcmp(r, "si") != 0 && strcmp(r, "no") != 0);

    if (strcmp(r, "si") == 0) {
        printf("Daje, iniziamo. Dimmi il tuo nome:\n");
        scanf("%s", nome);
        printf("Benvenuto, %s\n", nome);
        printf("Adesso Giochiamo! \n");
    } else {
        exit(0);
    }
}

void Questions(int *score, int *fail) {
    char rs;

    printf("Domanda 1: Qual è la capitale del Giappone?\n");
    printf(" a) Pechino\n b) Seul\n c) Tokyo\n d) Bangkok\n");
    printf("risposta: \n");
    rs = CheckAnswers();

    if (rs == 'c') {
        printf("Bravissimo!\n");
        printf("\n...................................................\n");
        score++;
    } else {
        (*fail)++;
        Insult(fail);
        printf("\n...................................................\n");
    }

    printf("Domanda 2: Quale pianeta è conosciuto come \"il pianeta rosso\"?\n");
    printf(" a) Giove\n b) Marte\n c) Venere\n d) Saturno\n");
    printf("risposta: \n");
    rs = CheckAnswers();

    if (rs == 'b') {
        printf("Molto bene!\n");
        printf("\n...................................................\n");
        score++;
    } else {
        (*fail)++;
        Insult(fail);
        printf("\n...................................................\n");
    }

    printf("Domanda 3: Chi è l'autore di \"Romeo e Giulietta\"?\n");
    printf(" a) Charles Dickens\n b) William Shakespeare\n c) Jane Austen\n d) Mark Twain\n");
    printf("risposta: \n");
    rs = CheckAnswers();

    if (rs == 'b') {
        printf("Corretto!\n");
        printf("\n...................................................\n");
        score++;
    } else {
        (*fail)++;
        Insult(fail);
        printf("\n...................................................\n");
    }

    printf("Domanda 4: Quale elemento chimico ha il simbolo \"H\"?\n");
    printf(" a) Helio\n b) Idrogeno\n c) Azoto\n d) Ossigeno\n");
    printf("risposta: \n");
    rs = CheckAnswers();

    if (rs == 'b') {
        printf("Ottimo lavoro!\n");
        printf("\n...................................................\n");
        score++;
    } else {
        (*fail)++;
        Insult(fail);
        printf("\n...................................................\n");
    }

    printf("Domanda 5: Quale oceano è il più grande del mondo?\n");
    printf(" a) Oceano Atlantico\n b) Oceano Indiano\n c) Oceano Pacifico\n d) Oceano Artico\n");
    printf("risposta: \n");
    rs = CheckAnswers();

    if (rs == 'c') {
        printf("Corretto!\n");
        printf("\n...................................................\n");
        score++;
    } else {
        (*fail)++;
        Insult(fail);
        printf("\n...................................................\n");
    }

    printf("Domanda 6: In quale continente si trova il deserto del Sahara?\n");
    printf(" a) Europa\n b) Asia\n c) Africa\n d) Sud America\n");
    printf("risposta: \n");
    rs = CheckAnswers();

    if (rs == 'c') {
        printf("Eccellente!\n");
        printf("\n...................................................\n");
        score++;
    } else {
        (*fail)++;
        Insult(fail);
        printf("\n...................................................\n");
    }

    printf("Domanda 7: Quale di queste lingue non è una lingua ufficiale delle Nazioni Unite?\n");
    printf(" a) Francese\n b) Tedesco\n c) Arabo\n d) Italiano\n");
    printf("risposta: \n");
    rs = CheckAnswers();

    if (rs == 'd') {
        printf("Corretto!\n");
        printf("\n...................................................\n");
        score++;
    } else {
        (*fail)++;
        Insult(fail);
        printf("\n...................................................\n");
    }

    printf("Domanda 8: Chi è stato il primo presidente degli Stati Uniti?\n");
    printf(" a) Thomas Jefferson\n b) George Washington\n c) Abraham Lincoln\n d) John Adams\n");
    printf("risposta: \n");
    rs = CheckAnswers();

    if (rs == 'b') {
        printf("Fantastico!\n");
        printf("\n...................................................\n");
        score++;
    } else {
        (*fail)++;
        Insult(fail);
        printf("\n...................................................\n");
    }

    printf("Domanda 9: Qual è l'organo più grande del corpo umano?\n");
    printf(" a) Cuore\n b) Fegato\n c) Polmoni\n d) Pelle\n");
    printf("risposta: \n");
    rs = CheckAnswers();

    if (rs == 'd') {
        printf("Ben fatto!\n");
        printf("\n...................................................\n");
        score++;
    } else {
        (*fail)++;
        Insult(fail);
        printf("\n...................................................\n");
    }

    printf("Domanda 10: Qual è il numero atomico dell'ossigeno?\n");
    printf(" a) 8\n b) 16\n c) 20\n d) 32\n");
    printf("risposta: \n");
    rs = CheckAnswers();

    if (rs == 'a') {
        printf("Grande lavoro!\n");
        printf("\n...................................................\n");
        score++;
    } else {
        (*fail)++;
        Insult(fail);
        printf("\n...................................................\n");
    }


}

/*void QuestionsH(int *score, int *fail) {
    char rs;

    printf("Quali sono gli effetti a lungo termine del riscaldamento globale sulle popolazioni costiere??\n");
    printf(" a) Aumento del livello del mare e migrazione forzata \n");
    printf(" b) Diminuzione delle riserve di pesce e aumento delle risorse idriche\n");
    printf(" c) Incremento della biodiversità e riduzione degli eventi climatici estremi\n");
    printf(" d) Miglioramento delle condizioni di vita nelle aree costiere\n");
    printf("risposta: \n");
    rs = CheckAnswers();
    
    if (rs == 'a') {
        printf("ottimo inizio!\n");
        printf("\n...................................................\n");
        (*score)++;
    } else {
        (*fail)++;
        Insult(fail);
        printf("\n...................................................\n");
    }

    printf("Quali sono le principali cause della crisi economica del 2008?\n");
    printf(" a) Scarsa regolamentazione del settore finanziario e cattive pratiche bancarie \n");
    printf(" b) Elevata domanda di beni di lusso e aumento delle esportazioni\n");
    printf(" c) Investimenti pubblici e politiche fiscali aggressive\n");
    printf(" d) Crescita sostenibile e riduzione dell'indebitamento delle famiglie\n");
    printf("risposta: \n");
    rs = CheckAnswers();

    if (rs == 'a') {
        printf("alla grande!\n");
        printf("\n...................................................\n");
        (*score)++;
    } else {
        (*fail)++;
        Insult(fail);
        printf("\n...................................................\n");

    }

    printf("Domanda 3: Quale elemento chimico ha il simbolo O?\n");
    printf(" a) Oro\n b) Ossigeno\n c) Ozono\n d) Osmio\n");
    printf("risposta: \n");
    rs = CheckAnswers();

    if (rs == 'b') {
        printf("Spaziale!\n");
        printf("\n...................................................\n");
        (*score)++;
    } else {
        (*fail)++;
        Insult(fail);
        printf("\n...................................................\n");

    }
}

purtroppo è incompleta questa parte */

char CheckAnswers() {
    char answer;

    scanf(" %c", &answer);
    while (answer != 'a' && answer != 'b' && answer != 'c' && answer != 'd') {
        printf("Sono abbastanza certo che tu abbia inserito un carattere errato, ritenta: \n");
        while (getchar() != '\n');
        scanf(" %c", &answer);
    }

    return answer;
}

void DisplayScore(int *score, int *fail){
    printf("Il tuo punteggio finale è: %d\n", *score);
    if (*fail == 0){
        printf("complimenti sei stato bravissimo!!");
    }else{
    if(*fail > 1){
            printf("che tristezza ne hai sbagliate: %d\n", *fail);
        }else{
            printf("Dai un solo errore , poteva anche andate peggio\n");
        }

    }
}

void Insult(int *fail){

    switch (*fail){
        case 1:
            printf("Oh, proprio una risposta da genio...\n");
            break;
        case 2:
            printf("Va bene, almeno hai partecipato...\n");
            break;
        case 3:
            printf("Interessante... o forse no...\n");
            break;
        case 4:
            printf("Mi piace la tua creatività... peccato che sia sbagliato.\n");
            break;
        case 5:
            printf("Quasi lì, ma no...\n");
            break;
        case 6:
            printf("Ci stiamo avvicinando... ma no.\n");
            break;
        case 7:
            printf("Forse dovresti considerare un'altro gioco...\n");
            break;
        case 8:
            printf("Non è proprio la tua giornata...\n");
            break;
        case 9:
            printf("Dai, stai scherzando, vero?\n");
            break;
        case 10:
            printf("Siamo al livello massimo di... uh, let's say... 'originalità'.\n");
            break;
        default:
            printf("Hmm, qualcosa è andato storto...\n");
            break;
    }
}