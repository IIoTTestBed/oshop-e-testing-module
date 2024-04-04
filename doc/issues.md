# Documentation

## TODOS:

- [ ] BOM erstellen
- [ ] Auslagerung der Teilbaugruppen in separate Repositories
- [ ] Nachmodellierung proprietärer Modelle, welche nicht veröffentlicht werden dürfen
- [ ] Schaltpläne
    - Elektronik
    - Pneumatik
- [ ] Flussdiagramm über Funktionsprinzip der Maschine
- [ ] Dokumentation
    - Visualisierungen:
        - der einzelnen Schritte
        - der gesamten Maschine
    - Aufbauanleitung


## Probleme/Herausforderungen

- Konstruktion
    - Nicht alle Komponenten im CAD modelliert
        - Steuerungsmodule und Anschlüsse fehlen
        - Kabel und Schläuche fehlen
        - Schraubverbindungen sind nicht modelliert
        - Montierbarkeit bestimmter Teile dadurch schwierig
        - automatische Generierung einer BOM nur sehr eingeschränkt möglich
            - erfordert manuelles abgleichen des physischen Prototyps

- Kollaboration:
    - inkonsistentes Benennen der Dateien
    - Benennung/Beschreibung teilweise doppeldeutig
    - Umbenennen im Dateibrowser führt zu Zuordnungsproblemen im CAD

- Dokumentation
    - nachverfolgen der Änderungen nur manuell möglich, da keine Visualisierung der Veränderungen der CAD-Modelle zwischen den Commits möglich ist
        - Vergleich nur in NX möglich mittels `Compare Body`
        - setzt voraus zwei Commits vollständig auschecken zu müssen

- Programmierung:
    - Programmierung der Ansteuerung erfolgt über Tablet (IPad) mit Festo Software (Tec2Screen/iEasyLab)
        - Modellierungssprache: Festo iEasyLab, Lua
        - Entwicklungsstände der Festosoftware erfolgen entkoppelt von Konstruktion im Repository
        - Doku bisher nicht vorhanden oder auffindbar, bzw. zu einfach
        - bietet `Lua`-Schnittstelle, allerdings nicht gut dokumentiert
            - Programmierung per Touch/Softtastatur auf dem Tablet sehr unkomfortabel
            - keine "moderne" IDE, kein Syntaxhighlighting, Linting, etc.
            - `iEasyLab` bietet keine Programmiertastatur an
        - Export des Modells möglich zu `.ieasylab`-Datei
            - Datei ist XML-basiert, Zeilenvergleich möglich
            - Export und Import allerdings nur manuell möglich
            - Übertragung in Repository nur manuell per Bluetooth/WLAN möglich
                - Gefahr, dass Entwicklungsstände in Commits vergessen werden
        - Programmierung mittels iEasyLab und Lua nicht möglich, da ein getimter Ablauf, mittels Waits durch ein Execution-Timeout unterbrochen wird
        - Dokumentation nicht mehr online verfügbar (nicht von Festo angeboten)
    - Tests müssen manuell ausgeführt werden
        - evtl. Möglichkeit `Lua`-Skripte in einer Testumgebung auf dem Rechner zu entwickeln


## Designfragen

- Pneumatik
    - einfachere Ansteuerung (1|0)
        - aber u.U. mehr Sonsorik nötig zur Zustandserfassung
    - Demonstrator ist als Erweiterung des Festo-Moduls konzipiert
        - Festo-Modul (CPFactory) bietet umfangreiche Anschlüsse und Entwicklungsbasis
        - Portabilität auf andere Systeme ggf. schwierig
- Gehäuse
    - bis jetzt nicht vorgesehen
- Montage
    - 3D-Druckteile werden mittels Thermoplastschrauben montiert