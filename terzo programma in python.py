import random
import string

def pswgen(choice):
    if choice == 'a':
        # Generate a short alphanumeric password (e.g., 8 characters)
        password = ''.join(random.choices(string.ascii_letters + string.digits, k=8))
    elif choice == 'b':
        # Generate a long alphanumeric password (e.g., 16 characters)
        password = ''.join(random.choices(string.ascii_letters + string.digits + string.punctuation, k=16))
    return password


print("Generatore di Password\n ")
print("...........................")
choice = (input("Inserire a per una password semplice e b per una password complessa: \n")) 

# loop to check the correct answer    
while choice not in ['a', 'b']:
    print("carattere inserito non corretto")
    choice = (input("Inserire a per una password semplice e b per una password complessa: \n")) 

print ("...........................")
print ("la tua password è :", (pswgen(choice)))