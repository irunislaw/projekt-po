# Symulator Wirtualnego Świata

## Opis projektu

Projekt jest implementacją turowego symulatora wirtualnego świata przedstawionego jako dwuwymiarowa siatka (domyślnie 20x20). W tym świecie egzystują różne organizmy – rośliny i zwierzęta – które posiadają unikalne właściwości i zachowania. Celem programu jest zasymulowanie ich interakcji, takich jak ruch, walka, rozmnażanie, odżywianie się oraz inne wydarzenia środowiskowe.

## Funkcjonalności

- **Plansza o wymiarach NxM** – domyślnie 20x20 pól.
- **Organizmy:**
  - Rośliny – statyczne formy życia.
  - Zwierzęta – poruszają się po planszy.
  - Człowiek – sterowany przez gracza, posiada specjalną umiejętność.
- **Kolizje:** w przypadku zajęcia tego samego pola przez dwa organizmy:
  - Silniejszy wygrywa.
  - Przy równej sile – wygrywa atakujący.
  - Możliwe specjalne efekty (np. odparcie ataku).
- **Inicjatywa i starszeństwo:** organizmy wykonują ruchy w kolejności zależnej od inicjatywy i wieku.
- **Człowiek:**
  - Kierowany strzałkami z klawiatury.
  - Może aktywować specjalną umiejętność (działa 5 tur, potem 5 tur przerwy).
- **Log zdarzeń:** informacje o walkach, zjedzeniu roślin, aktywacji umiejętności, itp.
