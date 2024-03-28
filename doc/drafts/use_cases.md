# Use Case Teile-Konstruktion
1. Neues Projekt starten
    - Projektordner anlegen (Grundstruktur)

2. Zielbeschreibung
    - grobes Konzept erarbeiten
    - Erfahrung mit oSHOP Projekt:
        - grobe Vorgabe: Entwicklung eines "faszinierenden" Moduls (mit Bewegung etc.) für Festo CP Factory
        - eigenes Ziel: Projekt mit Nutzen für Arbeitsgruppe, daher: Gespräche mit Kollegen was im Moment noch in CP Factory ergänzt werden könnte bzw. bei welchen Konzepten Probleme bestehen
        - Ergebnis: Ideen zu Toolchanger, eigene Idee zur Prüfung der Leiterplatten welche in CP Factory verarbeitet werden (da diese Funktion noch nicht in Fertigungskette vorhanden) --> Kombination dieser Ideen als Ziel des Projekts
    --> Ableiten erster Anforderungen und Rahmenbedingungen (zum Beispiel Breite/Abstand/Art der Schienen zur Montage auf dem CP Factory Modul)

3. Freie Recherche vorhandener Lösungen
    - keine zentrale, herstellerübergreifende Teiledatenbank
        - gute Beispiele: 
            - speziell für Satellitenentwicklung: https://satsearch.co
        - grobe Kategorisierung
            - Material
    - Doppelentwicklung vermeiden
    - einsparen von Entwicklungsaufwand
    - Wenn es keine fertige Lösung gibt, Neuentwicklung:
        - Recherche nach ähnlichen Lösungsansätzen, Konzepten, Prinzipien
            - hauptsächlich Internet, Webseiten
            - rein visuell anhand von Bildern
                - finden von geeigneten CAD-Modellen schwierig, da aktuelle Plattformen sehr viele unprofessionelle (DIY) Lösungen enthalten
            - viele Repositories (z.B. GitHub) nur textuell beschrieben, sehr aufwendig jeden Fund manuell zu prüfen
    - Erfahrung mit oSHOP Projekt:
        - Recherche nach bestehenden Konzepten rund um Thema Tool Changer und Prüf- bzw. Messverfahren von Leiterplatten
        - ``TinyProbe`` and ``TinyTester`` als Konzepte für Messverfahren identifiziert --> wenig Adaption nötig
        - MagToolChanger als Konzept für Werkzeugwechsel identifiziert --> viel Adaption nötig, Anmerkung: bereits der gefundene Ansatz wurde vom Hersteller E3D inspiriert
            - E3D fertigt kommerziell Werkzeugwechselsystem für 3D Drucker unterstützt aber OSH und stellt teilweise Schemata online
    -- >Ergänzen der Grundanforderungen aus 2. um die Anforderungen resultierend aus selektierten Konzepten

    3.1 Nach Taxonomie Maschinenelemente/Standardteile
        - Grund: Adaption oder Ergänzung der selektierten Konzepte aus 2.
        - Beispiel: Pneumatikzylinder
            - bestimmen von Parametern:
                - erforderlicher Hubweg
                - welche Kräfte treten auf
                - Bewegungscharakteristik (linear, kreisbahn, ...)
            - anhand der Parameter Bestimmung des Kolbendurchmessers nach Herstellern (Kataloge, Webseiten)
            - Bewertung Herstellerauswahl hinsichtlich
                - Bauteilgröße
                - Schnittstellen
                    - zu bereits verwendeten Komponenten, wie Pneumatikschläuche
                    - Notwendigkeit von Adaptern
                    - Befestigung
                - Verfügbarkeit von CAD-Modellen:
                    - Festo: sehr gut
        --> Erweiterung der Anforderungen um zusätzliche Bedingungen durch ausgewählte Maschinenelement bzw. Standardteile

    3.2 Patentrecherche bzw. Verletzung Rechte Dritte
        - Wie hoch ist der tendenzielle Schaden im Falle einer Patentrechtsverletzung?
            - Unterlassung der Produktion/Verkauf
            - nachträglicher Erwerb einer Patentlizenz
            - Schadensforderung (Gewinnausfall des Patentinhabers usw.)
        --> Erbringungen ``freedom to operate`` für den Projektentwurf

AB HIER EIN ITERATIONSPROZESS

4. Adaption der gefundenen Lösungsansätze
    - auf die aufgestellten Anforderungen
    - mit den geplanten Maschinenelementen/Standardteilen

5. Entwurf eigener Interfaces anhand zur Verknüpfung der gefundenen (und adaptierten) Lösungsansätze
    - Verknüpfung aller Konzepte zu vollständiger (Unterbaugruppe)-Baugruppe
    --> zum Beispiel durch Entwurf von Gehäusen, Adaptern, Interfaces etc.

