import math


print("---Calcolo PERIMETRI---" )
print("1. Quadrato")
print("2. Cerchio")
print("3. Rettangolo")

scelta = input("Scegli una figura (1, 2, o 3): ")

if scelta == "1":
    lato = float(input("Inserisci la misura del lato: "))
    perimetro = lato * 4
    print(f"Il perimetro è {perimetro}")

elif scelta == "2":
    raggio = float(input("Inserisci il raggio del cerchio: "))
    perimetro = 2 * math.pi * raggio
    print(f"Il perimetro del cerchio è {perimetro}")

elif scelta == "3":
    base = float(input("Inserisci la base: "))
    altezza = float(input("Inserisci l'altezza: "))
    perimetro = (base * 2) + (altezza * 2)
    print(f"Il perimetro del rettangolo è {perimetro}")
    


