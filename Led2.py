import RPi.GPIO as GPIO             //Tuodaan GPIO ja time kirjastot
import time                         //Lisätään time library, jotta voidaan myöhemmin pysäyttää ohjelma
import signal
GPIO.setmode(GPIO.BCM)              //Asetaan nimikaytanteet PIlle
GPIO.setwarnings(False)             //Asetetaan GPIO varoitusten tulostus pois paalta


GPIO.setup(13,GPIO.OUT)             //Asetetaan pinni 13 ulostuloksia

                                    //#Tehdaan ikuinen silmukka, silmukan saa keskeytettya Ctrl 
                                    //#ja C-nappainen yhtaaikaisella painamisella 
while 1: 
	try:
		print("Led ON")             //#Laitetaan pinniin 13 jannite 
		GPIO.output(13,GPIO.HIGH)   //#Pysaytetaan ohjelma 1 sekunniksi
		time.sleep(1)
		print("Led OFF")            //#Laitetaan jannite POIS pinnista 13
		GPIO.output(13,GPIO.LOW)    //#Pysaytetaan ohjelma 1 sekunniksi
		time.sleep(1)               //#Otetaan Ctrl+C nappaiten painnus kiinni ja keskeytetaan suoritus
	except KeyboardInterrupt:       
		GPIO.cleanup()              //#GPIO pinnien pudistaminen
		break