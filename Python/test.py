import speech_recognition as sr

def takeCommand():
    r = sr.Recognizer()
    with sr.Microphone() as source:
        print("listening.....")
        r.pause_threshold = 0.5
        audio = r.listen(source)

    try:
        print("Recognizing....")
        query = r.recognize_google(audio, language="en-US")
        print(f"User said:{query}\n")

    except Exception as e :
        #print(e)
        print("Say that again please ....")
        #speak("Say that again please ....")
        return "None"
    return query

query = takeCommand().lower()
print(query)

