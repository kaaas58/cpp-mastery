##📖 Über dieses Repository
Dieses Repository dokumentiert meinen wochenbasierten Lernweg in moderner C++-Entwicklung. Jede aktive Woche, bzw. in regelmäßigen Abschnitten wird ein neues Thema behandelt, mit praktischen Übungen und Code-Beispielen. Themen werden teils mit einem konkreten Mini-Projekt abgeschlossen.



##🎯 Projektziele
Sichtbarer Fortschritt: Nachvollziehbare Entwicklung
Praxisorientierung: Jede aktive Woche ein lauffähiges Ergebnis
Portfolio-Aufbau: Dokumentation für Bewerbungen und Präsentationen
Modern C++: Best Practices, STL, RAII, Smart Pointers, Templates...
Automatisierung: Erstellung und weiterentwicklung Skript-gestützter README-Generierung und Screenshot-Verwaltung



##🛠 Technologie-Stack
Sprache: C++17/20
Build-System: CMake
Automatisierung: Python 3.x (Pillow für Thumbnails)
Versionskontrolle: Git / GitHub
Recherschen: Dokumentationen/Googel/Sprachmodelle/Plattformen



##📂 Repository-Struktur

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
├── README.md                  # Projekt-Übersicht (diese Datei)
├── STYLEGUIDE.md             # Code-Konventionen
│
└── .gitignore
```

##📋 Wochenstruktur

Jede Woche enthält:

Programmcode

README.md: Lernziele, Code-Beispiele, Debugging-Notes
screenshots/: Visuelle Ergebnisse des Wochenprojekts
thumbnails/: Automatisch generierte Vorschaubilder (300px)



##🤖 Automatisierung
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



##🎓 Lernziele
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



##🌟 Highlights
Automatisierte Dokumentation: Kein manuelles Verwalten von Screenshot-Listen
Visual Progress Tracking: Thumbnails zeigen Projektverlauf auf einen Blick
Modulare Struktur: Jede aktive Woche ein abgeschlossenes Lernmodul
Best Practices: Fokus auf modernen C++-Stil (C++17/20)



##🚀 Quick Start (um protfolio.py zu nutzen / => Struktur, Repo clonen => Dependencies installieren => profolio.py mit Konsole anwenden wie folgt)
bash# Repository klonen
git clone https://github.com/kaaas58/cpp-mastery.git
cd cpp-mastery

## Python-Dependencies installieren (optional für Thumbnails)
pip install Pillow

## Neue Woche erstellen
cd automation
python portfolio.py 07 "Templates" "Generic Calculator"

## Screenshots hinzufügen
cp mein_screenshot.png ../weeks/week_07_templates/screenshots/

## READMEs aktualisieren (inl Sreenshots laden und Thumbs erzeugen, so wie einbinden)
python portfolio.py



##📝 Lizenz & Verwendung
Dieses Repository dient primär persönlichen Lernzwecken. Code-Beispiele und Dokumentation können unter MIT License verwendet werden.

##🤝 Kontakt & Feedback
Fragen oder Vorschläge?
Dann eröffne gerne ein Issue im Repository oder kontaktiere mich direkt.
Viel Spaß beim Programmieren! 🎯
