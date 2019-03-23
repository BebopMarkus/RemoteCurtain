#!/usr/bin/python

"""
---------------------------------------------------------------------------------
Skript: getPublicIP
Author: Markus Wiedner
Verschickt public-IP bei Änderung per email.

Skript fragt regelmäßig public IP des Netzwerk-Routers ab und verschickt bei einer Änderung die neue IP-Adresse per email. Hilfreich für Zugriff auf Server von außerhalb, wenn keine dynamische DNS verfügbar ist. Muss auf einem System innerhalb des lokalen Server-Netzwerks ausgeführt werden.
Getestet mit Yahoo-Mail. Funktioniert aber auch mit anderen Anbietern. 
Es müssen bei den Einstellungen des email-Anbieters "nicht-sichere Anwendungen" erlaubt sein!
Benötigt mind. Python 3.0.
---------------------------------------------------------------------------------
"""

import sys
import os
import time
import requests
import smtplib, ssl
import email.utils
from email.mime.text import MIMEText
from email.mime.multipart import MIMEMultipart

PORT = 465 # Port-Nummer. Für SSL 465
SMTP_SERVER = "smtp.mail.yahoo.com"	# SMTP-Server-Adresse des eigenen email-Providers
SENDER_EMAIL = "sender@ymail.com"  	# email-Adresse des Senders
RECEIVER_EMAIL = "receiver@tu-bs.de"  	# email-Adresse des Empfängers
PASSWORD = "Passwort"	# Passwort für email-Account des Senders

# Funktion verschickt email mit übergebener IP.
def sendIP(IP):
	
	message = """\
Subject: Neue IP

Die neue IP ist: """ + IP
	
	context = ssl.create_default_context()
	with smtplib.SMTP_SSL(SMTP_SERVER, PORT, context=context) as server:
    		server.login(SENDER_EMAIL, PASSWORD)
    		server.sendmail(SENDER_EMAIL, RECEIVER_EMAIL, message)
	print("IP " + IP + " gesendet")




oldPublicIP = requests.get("http://ipecho.net/plain?").text 	# Speichert Antwort auf Abfrage der public-IP als oldPublicIP.

#sendIP(oldPublicIP)
print("...Skript wird ausgefuehrt...")

# Schleife fragt public-IP in definiertem Zeitabständen ab und vergleicht diese mit der alten IP. Bei Änderung wird neue IP verschickt.
while True:

	publicIP = requests.get("http://ipecho.net/plain?").text

	if publicIP != oldPublicIP:
		sendIP(publicIP)
		oldPublicIP = publicIP

	time.sleep(15 * 60)	# Zeitintervall in Sekunden


