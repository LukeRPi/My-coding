import os

clear = lambda: os.system("clear")
clear()
print("-----------------------------------------------------")
print("-       Calcolo energia potenziale / cinetica       -")
print("-                  by LukeStarGeek                  -")
print("-----------------------------------------------------")
print("1. Energia potenziale")
print("2. Energia cinetica")
scelta = input("Calcolo: ")
clear()

m = input("Inserisci la massa [Kg]: ")

if scelta == 1:
    h = input("Inserisci l'altezza [m]: ")
    u = m * 9.81 * h
    print("Energia potenziale: " + str(round(u, 3)) + " J")

if scelta == 2:
    vk = input("Inserisci la velocita' [Km/h]: ")
    vm = vk / 3.6
    k = 0.5 * m * vm * vm
    print("Energia cinetica: " + str(round(k, 3)) + " J")
