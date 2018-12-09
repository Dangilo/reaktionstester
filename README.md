
# Reaktionstester

  

### Zusammenfassung

In Folge werden die Nutzung und Erstellung eines Reaktionstesters beschrieben. Zudem wird angegeben welche Voraussetzungen und Einzelteile benötigt werden.

Der Reaktionstester wird durch eine Startsequenz eingeleitet und zeigt nach dem Test das Ergebnis mittels der 7 LED Lampen an.


## Inhalt

 1. [Benutzerdokumentation](#benutzer)
 2. [Entwicklerdokumentation](#entwickler)
 3. [Bestehenede Probleme](#probleme)
 4. [Weiterentwicklung](#weiterentwicklung)
 5. [Anhang](#anhang)

  

## 1 Benutzerdokumentation <a name="benutzer"></a>

Um den Reaktionstester nutzen zu können, muss zuerst der Arduino mit dem Strom verbunden werden. 

Ist der Arduino nun mit dem Strom verbunden wird dies durch eine Startsequenz deutlich. Ist diese durchgelaufen und alle LED Lampen sind aus, kann der Reaktionstest durch Drücken des Tasters gestartet werden. Es erleuchten die Lampen von außen nach innen. Erlöschen die Lampen wieder, ist das Startsignal für den Test gegeben und es muss versucht werden in möglichst kurzer Zeit den Taster zu drücken.
[Stückliste ](## Entwicklerdokumentation)
Das Drücken des Tasters wird du Aufblinken der Lampen bestätigt. Die Reaktionszeit kann am Ende an der Anzahl der leuchtenden Lampen abgelesen werden. Desto schneller die Reaktion war, desto weniger Lampen leuchten, wobei das Optimum bei einer leuchtenden Lampe liegt.

Dieser Test kann beliebig häufig durch drücken des Tasters wiederholt werden.

Wird der Tester nicht mehr benötigt, kann dieser einfach durch ziehen des USB Kabels außer Betrieb genommen werden.

## Entwicklerdokumentation <a name="entwickler"></a>

Um den Reaktionstester nachzubauen werden alle Teile benötigt, welche in der Stückliste (siehe Anhang) angegeben sind.

Zudem wird ein Computer (Windows/Linux/Mac) mit mindestens einem USB Port, einer passenden Entwicklungsumgebung (z.B. den Webeditor. https://create.arduino.cc/ ) und das Arduino Plugin benötigt. 

Im ersten Schritt sollte der Arduino mit dem Computer verbunden werden und sichergestellt sein, dass dieser erkannt wird und funktionsfähig ist. Dies kann an einer Blinkenden LED auf dem Arduino erkannt werden.

Als nächstes sollte der Arduino mit dem Steckbrett verbunden werden. Hierzu wird der GND PIN des Arduinos mit dem „-“ - PIN und der 5V PIN des Arduinos mit dem „+“-PIN des Steckbrettes verbunden. (siehe [Schritt1](# s1)).

Als nächstes werden die LED Lampen auf das Steckbrett gesteckt. Hierzu wird die Kathode (das kurze Bein) der ersten LED in die erste Reihe des Brettes gesteckt und die Anode (das lange Bein) parallel in die zweite Reihe. Danach wird der 100Ω Widerstand von der Kathode auf die andere Seite des Steckbrettes gesteckt und von dort aus mit einem Jumper Kabel mit dem 2 PIN des Arduinos verbunden. Zuletzt wird noch von der „-“ – Zeile des Steckbrettes ein Kabel zur Kathode gesteckt (siehe [Schritt2](# s2)). Dies wird nun wiederholt bis alle sieben LED Lampen auf dem Steckbrett vorhanden sind (siehe [Beispielaufbau](# bild)). 

Als letztes muss noch der Taster auf dem Steckbrett aufgebracht werden. Hierzu wird dieser mit je zwei Steckern auf beide Seiten des Steckbrettes gesteckt. Danach wird eine Reihe des Tasters mit dem 5V PIN verbunden und die andere Reihe auf der einen Seite über den 10kΩ Widerstand mit der „-“ - Zeile verbunden und auf der anderen Seite dieselbe Reihe mit dem PIN 13 des Arduinos (siehe ebenfalls [Beispielaufbau](# bild)).

Nun ist der Aufbau abgeschlossen und es muss nur noch die Software eingerichtet werden. Hierzu wird der Arduino mit dem Computer verbunden und die Entwicklungsumgebung geöffnet. 


## Bestehende Probleme <a name="probleme"></a>


## Weiterentwicklung <a name="weiterentwicklung"></a>

## Anhang <a name="anhang"></a>

### Stückliste <a name="stueckliste"></a>

| Teil | Anzahl  |
|--|--|
| Arduino UNO | 1 |
| USB Typ B Kabel | 1 |
| Steckbrett | 1 |
| Widerstand 10 kΩ | 1 |
| Widerstand 100Ω| 7|
| LED Lampen | 7 |
| Taster | 1 |
| Jumper Kabel Male - Male | 18 |


### Beispielaufbau <a name="bild"></a>

Folgendermaßen kann der Aufbau des Reaktionstesters aussehen: 
![Beispielaufbau](https://github.com/Dangilo/reaktionstester/blob/master/Schritte/beispiel.png)

### Schritt 1 <a name="s1"></a>

![Schritt 1](https://github.com/Dangilo/reaktionstester/blob/master/Schritte/Schritt_1.png)


### Schritt 2 <a name="s2"></a>


![Schritt 1](https://github.com/Dangilo/reaktionstester/blob/master/Schritte/Schritt_2.png)