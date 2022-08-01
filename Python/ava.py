'''
This program will have witten functions by the help of which the assistant AVA will ans or responde to my commands
'''


import random
import pyttsx3        #this module is for speak function
import datetime   
import os
import webbrowser
import wikipedia
import speech_recognition as sr
import pyaudio

engine = pyttsx3.init('sapi5')
rate = engine.getProperty('rate')
engine.setProperty('rate', 175)
voices = engine.getProperty('voices')
engine.setProperty('voice', voices[1].id)


def takeCommand():
    r = sr.Recognizer()
    with sr.Microphone() as source:
        print("listening.....")
        r.pause_threshold = 1
        audio = r.listen(source)

    try:
        print("Recognizing....")
        query = r.recognize_google(audio, language="en-US")
        print(f"User said:{query}\n")

    except Exception as e :
        #print(e)
        print("Say that again please ....")
        speak("Say that again please ....")
        takeCommand()
        return "None"
    return query



def speak(text):              #this will speak the audio argument given
    engine.say(text)
    engine.runAndWait()

def wishMe():                #this function will wish me 
    hour = datetime.datetime.now().hour
    if hour>=4 and hour<12:
        print("Good morning sir!")
        speak("Good morning sir! ")
    elif hour>=12 and hour<18:
        print("Good afternoon sir!")
        speak("Good afternoon sir!")
    else:
        print("Good evening sir!")
        speak("Good evening sir!")
    print("How may I help you?")
    speak("How may I help you?")

def alarm():                    #function for setting alarm
    print("setting alarm")
    speak("setting alarm")
    print("please say the hour")
    speak("please say the hour")
    hour = takeCommand().lower() 
    print("please say the min")
    speak("please say the minute")
    mins = takeCommand().lower()
    print("alarm turned on")
    speak("alarm turned on")
    stop = False
    while stop == False:
        now = datetime.datetime.now().strftime("%H:%M:%S")
        #print(now)
        if  datetime.datetime.now().hour == hour and datetime.datetime.now().minute == mins:
            stop = True
            os.startfile("D:\\Musics\\Duncan Laurence - Arcade (Lyrics) ft. FLETCHER.mp3")  #you can add any other song from any other directory

#logic for ava building
if __name__ == "__main__":
    print("INITIALIZING AVA .......")
    speak("INITIALIZING AVA")
    wishMe()
    while True:
        query = takeCommand().lower()
        if "time" in query:            #it will reply with time
            strTime = datetime.datetime.now().strftime("%H:%M:%S")
            print(strTime)
            speak(f"sure sir. The time is {strTime}")
        elif "today's date" in query:            #it will reply to whats the day question
            strDay = datetime.date.today()
            print(strDay)
            speak("sure sir. Today is")
            speak(strDay)
        elif "thanks" in query:                    #it reply to thanks
            print("Its my pleasure sir")
            speak("My pleasure sir. I am just coded for this reason")
        elif "open code" in query:                  #it will open code for me
            print("opening code")
            speak("sure sir. I am opening a new window of code for you")
            codepath = "C:\\Users\\sahus\\AppData\\Roaming\\Microsoft\\Windows\\Start Menu\\Programs\\Visual Studio Code"
            os.startfile(codepath)
        elif "open google" in query:
            print("opening google")
            speak("ok sir! opening google in browser")
            webbrowser.open("www.google.com")
        elif "hi" in query:
            print("hii sir")
            speak("hi sir")
            speak("how it's going?")
        elif "fine" in query:
            reply = "I am happy to hear this"
            print(reply)
            speak(reply)
        elif "what's your name" in query:
            print("My name is AVA")
            speak("My name is AVA")
        elif "who are you" in query:
            print("I am ava. I am a AI tech assistant coded by Soumyaranjan Sahoo")
            speak("I am ava. I am a AI tech assistant coded by Soumyaranjan Sahoo")
        elif query == "ok":
            print("yes sir")
            speak("yes sir. you may try any other command for me.")
        elif "open youtube" in query:
            print("opening youtube")
            speak("opening youtube for you sir")
            webbrowser.open("www.youtube.com")
        elif "ok sleep" in query:
            print("ok sir shutting the program")
            speak("ok sir as your wish. changing to sleep mode")
            speak("By the way Good Night Sir")
            exit()
        elif "wikipedia" in query:            #it will open wikipedia
            try:
                speak('Searching Wikipedia...')
                query = query.replace("wikipedia", "")
                results = wikipedia.summary(query, sentences=2)
                speak("According to Wikipedia")
                print(results)
                speak(results)
                speak("sir, that's all I got on wikipedia")
            except Exception as e :
                print("sir I don't get any article on this topic")
                speak("sir I don't get any article on this topic")
        elif "set alarm" in query:
            alarm()
        elif "search for" in query:
            print("what thing to search for")
            speak("sir, what think to search for")
            thing = takeCommand().lower()
            speak('sure sir, opening in your browser')
            webbrowser.open(f"www.google.com/search?q={thing}")     #use f string for geting the function working
        elif "search recipe" in query:       #it give you the recipe summary
            print("which recipe you want make?")
            speak("which recipe do you want search for")      
            recipe = str(input()).lower()
            speak('Searching Wikipedia...')
            query = query.replace("wikipedia", "")
            results = wikipedia.summary(query)
            speak("According to Wikipedia")
            print(results)
            speak(results)
            speak("sir, that's all I got on wikipedia")
        elif "play a song" in query:
            speak("sir, I am playing a song form the device")
            music_dir = 'F:\\Xender\\audio'
            songs = os.listdir(music_dir) 
            x = random.randint(1, 43)
            print(songs[x])
            os.startfile(os.path.join(music_dir, songs[x]))             
        else:
            print("I am afraid that i can do that.")
            speak("I am afraid i can do that.")