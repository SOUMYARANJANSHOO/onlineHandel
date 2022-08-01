import pyttsx3

engine = pyttsx3.init('sapi5')
voices = engine.getProperty('voices')
engine.setProperty('voice', voices[0].id)

def speak(audio):
    engine.say(audio)
    engine.runAndWait()

while True:
    print("WELCOME TO THE WORLD OF CALCULATION")
    speak("WELCOME TO THE WORLD OF CALCULATION")
    print("PLEASE ENTER THE FIRST NUMBER OF YOUR CALCULATION :")
    speak("PLEASE ENTER THE FIRST NUMBER OF YOUR CALCULATION :")
    a = int(input())
    print("PLEASE ENTER THE SECOND NUMBER OF YOUR CALCULATION :")
    speak("PLEASE ENTER THE SECOND NUMBER OF YOUR CALCULATION :")
    b = int(input())
    print("PLEASE ENTER THE OPERATORS FOR YOUR CALCULATION : \n ENTER + FOR ADDITION \n ENTER - FOR SUBTRACTION \n ENTER * FOR MULTIPLICATION \n ENTER \\ FOR DIVISION \n ENTER // FOR QUOTIENT")
    speak("PLEASE ENTER THE OPERATORS FOR YOUR CALCULATION :. ENTER + FOR ADDITION. ENTER - FOR SUBTRACTION. ENTER * FOR MULTIPLICATION. ENTER \\ FOR DIVISION. \n ENTER // FOR QUOTIENT")
    opt = str(input())

    if "+" in opt:    # this is for adding two no.
        addition = a+b
        print("THE SUM OF THE NUMBERS IS",addition)
        speak("THE SUM OF THE NUMBERS IS")
        print("THANK YOU FOR USING THIS PROGRAM")
        speak("THANK YOU FOR USING THIS PROGRAM")
    elif "-" in opt:         #this is the minus funct
        SUBTRACTION = a-b
        print("THE DIFFERENCE BETWEEN THE NUMBERS IS",SUBTRACTION)
        speak("THE DIFFERENCE BETWEEN THE NUMBERS IS")
        print("THANK YOU FOR USING THIS PROGRAM")
        speak("THANK YOU FOR USING THIS PROGRAM")
    elif "*" in opt:          #this is the product funct
        product = a * b
        print("THE PRODUCT OF THE TWO NUMBERS IS",product)
        speak("THE PRODUCT OF THE TWO NUMBERS IS")
        print("THANK YOU FOR USING THIS PROGRAM")
        speak("THANK YOU FOR USING THIS PROGRAM")
    elif "\\" in opt:            # this is the divide funct
        ratio = a / b
        print("THE RATIO OF THE TWO NUMBERS IS",ratio)
        speak("THE RATIO OF THE TWO NUMBERS IS")
        print("THANK YOU FOR USING THIS PROGRAM")
        speak("THANK YOU FOR USING THIS PROGRAM")
    elif "//" in opt:
        quotient = a//b 
        print("THE QUOTIENT OF THE TWO NUMBER IS", quotient)
        speak("THE QUOTIENT OF THE TWO NUMBER IS")
        print("THANK YOU FOR USING THIS PROGRAM")
        speak("THANK YOU FOR USING THIS PROGRAM")

    else :                       #in case of error it will show the error  
        print("ERROR \n PLEASE CHECK YOUR ENTERED VALUES AGAIN")
        speak("ERROR PLEASE CHECK YOUR ENTERED VALUES AGAIN")
        print("THANK YOU FOR USING THIS PROGRAM")
        speak("THANK YOU FOR USING THIS PROGRAM")
    