#Tuodaan GPIO ja time kirjastot
import RPi.GPIO as GPIO
import time
import signal

#Asetaan nimikaytanteet PIlle
GPIO.setmode(GPIO.BCM)
#Asetetaan GPIO varoitusten tulostus pois paalta
GPIO.setwarnings(False)

#Asetetaan pinni 13 ulostuloksia
GPIO.setup(13,GPIO.OUT)

#Tehdaan ikuinen silmukka, silmukan saa keskeytettya Ctrl 
#ja C-nappainen yhtaaikaisella painamisella 
while 1: 
	try:
		#Asetetaan pinni 13 ulostuloksia
		GPIO.setup(13,GPIO.OUT)
		print("Led ON")
		#Laitetaan pinniin 13 jannite 
		GPIO.output(13,GPIO.HIGH)
		#Pysaytetaan ohjelma 1 sekunniksi
		time.sleep(1)
		print("Led OFF")
		#Laitetaan jannite POIS pinnista 13
		GPIO.output(13,GPIO.LOW)
		#Pysaytetaan ohjelma 1 sekunniksi
		time.sleep(1)
	#Otetaan Ctrl+C nappaiten painnus kiinni ja keskeytetaan suoritus
	except KeyboardInterrupt:
		#GPIO pinnien pudistaminen
		GPIO.cleanup()
		break