
# Reaktionstester

  

### Zusammenfassung

In Folge werden die Nutzung und Erstellung eines Reaktionstesters beschrieben. Zudem wird angegeben welche Voraussetzungen und Einzelteile benötigt werden.

Der Reaktionstester wird durch eine Startsequenz eingeleitet und zeigt nach dem Test das Ergebnis mittels der 7 LED Lampen an.

 1. [Benutzerdokumentation](#benutzer)
 2. [Entwicklerdokumentation](#entwickler)
 3. [Bestehenede Probleme](#probleme)
 4. [Weiterentwicklung](#weiterentwicklung)
 5. [Anhang](#anhang)

5.1 [Stückliste](#stueckliste)
5.2 [Beispielaufbau](#bild)

  

## 1 Benutzerdokumentation <a name="benutzer"></a>

Um den Reaktionstester nutzen zu können, muss zuerst der Arduino mit dem Strom verbunden werden. 

Ist der Arduino nun mit dem Strom verbunden wird dies durch eine Startsequenz deutlich. Ist diese durchgelaufen und alle LED Lampen sind aus, kann der Reaktionstest durch Drücken des Tasters gestartet werden. Es erleuchten die Lampen von außen nach innen. Erlöschen die Lampen wieder, ist das Startsignal für den Test gegeben und es muss versucht werden in möglichst kurzer Zeit den Taster zu drücken.
[Stückliste ](## Entwicklerdokumentation)
Das Drücken des Tasters wird du Aufblinken der Lampen bestätigt. Die Reaktionszeit kann am Ende an der Anzahl der leuchtenden Lampen abgelesen werden. Desto schneller die Reaktion war, desto weniger Lampen leuchten, wobei das Optimum bei einer leuchtenden Lampe liegt.

Dieser Test kann beliebig häufig durch drücken des Tasters wiederholt werden.

Wird der Tester nicht mehr benötigt, kann dieser einfach durch ziehen des USB Kabels außer Betrieb genommen werden.

## Entwicklerdokumentation <a name="entwickler"></a>

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


### Beispielbild <a name="bild"></a>


[Beispielaufbau]
(./beispiel.png)