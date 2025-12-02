# 📖 Über dieses Repository

Dieses Repository dokumentiert meinen wochenbasierten Lernweg in moderner C++-Entwicklung. Jede aktive Woche, bzw. in regelmäßigen Abschnitten wird ein neues Thema behandelt, mit praktischen Übungen und Code-Beispielen. Themen werden teils mit einem konkreten Mini-Projekt abgeschlossen.

## 🎯 Projektziele

Sichtbarer Fortschritt: Nachvollziehbare Entwicklung
Praxisorientierung: Jede aktive Woche ein lauffähiges Ergebnis
Portfolio-Aufbau: Dokumentation für Bewerbungen und Präsentationen
Modern C++: Best Practices, STL, RAII, Smart Pointers, Templates...
Automatisierung: Erstellung und weiterentwicklung Skript-gestützter README-Generierung und Screenshot-Verwaltung

## 🛠 Technologie-Stack

Sprache: C++17/20
Build-System: CMake
Automatisierung: Python 3.x (Pillow für Thumbnails)
Versionskontrolle: Git / GitHub
Recherschen: Dokumentationen/Googel/Sprachmodelle/Plattformen

## 📂 Repository-Struktur

```text
cpp-mastery/

├── weeks/                     # Wochenmodule
│   ├── week_01_klassen/
│   │   ├── README.md          # Dokumentation der Woche
│   │   ├── screenshots/       # Projekt-Screenshots
│   │   └── thumbnails/        # Auto-generierte Vorschaubilder
│   │
│   ├── week_02_strukturen/...
│   ├── week_03_stl_basics/...
│   └── ...
│
├── automation/                # Automatisierungs-Tools
│   ├── portfolio.py           # README & Thumbnail Generator
│   └── update_log.txt         # Automatisierungs-Log
│
└── README.md                  # Projekt-Übersicht (diese Datei)

```

## 📋 Wochenstruktur

Jede Woche enthält:

Programmcode

README.md: Lernziele, Code-Beispiele, Debugging-Notes
screenshots/: Visuelle Ergebnisse des Wochenprojekts
thumbnails/: Automatisch generierte Vorschaubilder (300px)

## 🤖 Automatisierung

Portfolio-Script (automation/portfolio.py)
Automatisiert die Verwaltung des Repositories:

Neue Woche erstellen:
bashcd automation
python portfolio.py 04 "Smart Pointers" "Memory Manager"
→ Erstellt week_04_smart_pointers/ mit README-Template

Alle READMEs aktualisieren:
bashpython portfolio.py
→ Scannt alle Screenshots, generiert Thumbnails, aktualisiert Markdown-Listen

Features:

✨ Automatische Thumbnail-Generierung (300px Breite)
📄 Pagination bei 50+ Screenshots
🔄 Chronologische Sortierung (neueste zuerst)
📝 Logging in update_log.txt

## 🎓 Lernziele

Kurzfristig (Wochen 1-6)

 Grundlagen moderner OOP in C++
 Sicherer Umgang mit STL
 Verständnis von RAII und Smart Pointers
 Eigenes Build-System mit CMake

Mittelfristig (Wochen 7-12)

 Templates und Generic Programming
 Fehlerbehandlung (Exceptions, std::optional)
 Multithreading Basics
 Komplexes Abschlussprojekt

Langfristig

 Robotik / Embedded Systems
 Systemprogrammierung
 Open-Source Contributions
 Portfolio für Bewerbungen im C++-Bereich

## 🌟 Highlights

Automatisierte Dokumentation: Kein manuelles Verwalten von Screenshots oder erstellen von Thumbnails

🚀 Quick Start, um protfolio.py bzw. Strukturzu nutzen: 
Repo clonen => bash: "git clone https://github.com/kaaas58/cpp-mastery.git"
Dann in den Ordner automation profolio.py editieren oder nutzen.

Nicht vergessen! Python-Dependencies für Thumbnails installieren (optional)

```Text
py -m ensurepip --default-pip

pip install Pillow
```

## Neue Woche/Eintrag mit Struktur erzeugen

Siehe obig unter Repository-Struktur, ein Eintrag ist die Structur in weeks (week_01_Bsp.).

```text
# =====================================================================
# Portfolio Automator – PRO Version
#
# VERWENDUNG:
#
# 1) UPDATE-MODUS (Screenshots & Thumbnails aktualisieren)
#      py portfolio.py
#
#    → Durchsucht alle Wochenordner und:
#        • generiert fehlende Thumbnails (180px)
#        • aktualisiert Screenshot-Listen in allen READMEs
#        • sortiert chronologisch (neueste zuerst)
#
# 2) AUTO-INIT (Automatische Wochennummer)
#      py portfolio.py Smart Pointers
#      py portfolio.py hallo wallo knallo
#
#    → Findet automatisch die nächste Wochennummer und legt an:
#        • week_XX_smart-pointers/ (Umlaute → ae/oe/ue)
#        • README.md mit Template
#        • screenshots/ + thumbnails/ Ordner
#        • Projekt-Platzhalter: Projekt (später manuell ergänzen)
#
# 3) MANUELL-INIT (Woche selbst angeben)
#      py portfolio.py 05 Smart Pointers
#      py portfolio.py 03 hello world test
#
#    → Legt Woche mit gewünschter Nummer an
#        • week_05_smart-pointers/
#        • Titel aus allen Wörtern kombiniert
#        • Projekt-Platzhalter: Projekt
#
# =====================================================================
```

## Weiteres

Weiter Automatisierungsscripte sollten mit fortschreitender Zeit und Usecases unter https://github.com/kaaas58/scripts.git entstehen und einsehbar sein. Meine Momentane Webside sehen sie unter https://kaaas58.github.io/ltcoding/.

## 📝 Lizenz & Verwendung

Dieses Repository dient primär persönlichen Lernzwecken. Code-Beispiele und Dokumentation können unter MIT License verwendet werden.

## 🤝 Kontakt & Feedback

Fragen oder Vorschläge?
Dann eröffne gerne ein Issue im Repository oder kontaktiere mich direkt.
Viel Spaß beim Programmieren!  🎯
