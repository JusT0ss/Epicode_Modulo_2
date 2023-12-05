'''
Si scriva un programma in Python che in base alla scelta dell’utente
permetta di calcolare il perimetro di diverse figure geometriche (scegliete pure quelle che volete voi). 
Per la risoluzione dell’esercizio abbiamo scelto:
'''



x = float(input("Inserisci valore base: "))
y = float(input("inserisci valore altezza: "))
r = float(input("inserisci valore raggio: "))



perimetro_quadrato = x ** 4
circonferenza_cerchio = 2 * 3.14 * x
perimetro_rettangolo  = (x * 2) + (y * 2)


print("il perimetro del quadrato è:", perimetro_quadrato)
print("il perimetrodel cerchio3 è:", circonferenza_cerchio)
print("il perimetro del rettangolo è:", perimetro_rettangolo)