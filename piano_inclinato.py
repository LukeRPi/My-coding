#!/usr/bin/env python3
# -*- coding: utf-8 -*-

from __future__ import division
from math import cos as cos
from math import sin as sin
from math import radians as radians
from math import atan as atan
from math import degrees as degrees
import os

clear = lambda: os.system("clear")
clear()
print("-----------------------------------------------------")
print("-      Calcolo componenti sul piano inclinato       -")
print("-                         e                         -")
print("-          angolo formato da due segmenti           -")
print("-                                                   -")
print("-                  by LukeStarGeek                  -")
print("-----------------------------------------------------")
print("1. Calcolo componenti peso")
print("2. Calcolo angolo")
scelta = input("Calcolo: ")
if scelta == 1:
    alfa = input("Inserisci angolo [°]: ")
    p = input("Inserisci peso [N]: ")
    if 0 <= alfa <= 360:
        if p >= 0:
            alfarad = radians(alfa)             # trasforma l'angolo in radianti

            ppar = p * sin(alfarad)             # calcola P parallelo
            pperp = p * cos(alfarad)            # calcola P perpendicolare

            print("P parallelo = " + str(round(ppar, 4)) + " N")                # stampa i risultati
            print("P perpendicolare = " + str(round(pperp, 4)) + " N")
        else:
            print("Il peso non può essere negativo !")
    else:
        print("L'angolo deve essere compreso tra 0° e 360° !")

if scelta == 2:
    y = input("Componente verticale: ")
    x = input("Componente orizzontale: ")
    if y < 0 or x < 0:
        print("Le componenti non possono essere negative !")
        print(x)
        print(y)
    else:
        comp = y/x                      # calcola tan
        theta = atan(comp)              # calcola tan^-1
        theta = degrees(theta)          # trasforma in gradi
        print("L'angolo è di " + str(round(theta, 2)) + "°")
