import os
import datetime
import pyttsx3



engine = pyttsx3.init('sapi5')
voices = engine.getProperty('voices')
# print(voices[1].id)
engine.setProperty('voice', voices[0].id)


def speak(audio):       #Defining the audio function
    engine.say(audio)
    engine.runAndWait()



def alarm():
    print("setting alarm")
    speak("setting alarm")
    print("please say the hour")
    speak("please say the hour")
    hour = int(input())
    print("please say the min")
    speak("please say the minute")
    mins = int(input())
    stop = False
    while stop == False:
        now = datetime.datetime.now().strftime("%H:%M:%S")
        print(now)
        if  datetime.datetime.now().hour == hour and datetime.datetime.now().minute == mins:
            stop = True
            os.startfile("C:\\Users\\sahus\\Desktop\\AloneII.mp3") #choose the directory of music from the storage


now = datetime.datetime.now().strftime("%H:%M:%S")
print(now)
alarm()