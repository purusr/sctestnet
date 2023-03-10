// Word list created by Scala contributor Shrikez
// 
//Copyright (c) 2014-2019, The Monero Project
//Copyright (c) 2018-2020, The Scala Network
// 
// All rights reserved.
// 
// Redistribution and use in source and binary forms, with or without modification, are
// permitted provided that the following conditions are met:
// 
// 1. Redistributions of source code must retain the above copyright notice, this list of
//    conditions and the following disclaimer.
// 
// 2. Redistributions in binary form must reproduce the above copyright notice, this list
//    of conditions and the following disclaimer in the documentation and/or other
//    materials provided with the distribution.
// 
// 3. Neither the name of the copyright holder nor the names of its contributors may be
//    used to endorse or promote products derived from this software without specific
//    prior written permission.
// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY
// EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
// MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL
// THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
// STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF
// THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

/*!
 * \file german.h
 * 
 * \brief German word list and map.
 */

#ifndef GERMAN_H
#define GERMAN_H

#include <vector>
#include <unordered_map>
#include "language_base.h"
#include <string>

/*!
 * \namespace Language
 * \brief Mnemonic language related namespace.
 */
namespace Language
{
  class German: public Base
  {
  public:
    German(): Base("Deutsch", "German", {}, 4)
    {
      static constexpr const char * const words[NWORDS] =
      {
        "Abakus",
        "Abart",
        "abbilden",
        "Abbruch",
        "Abdrift",
        "Abendrot",
        "Abfahrt",
        "abfeuern",
        "Abflug",
        "abfragen",
        "Abglanz",
        "abh??rten",
        "abheben",
        "Abhilfe",
        "Abitur",
        "Abkehr",
        "Ablauf",
        "ablecken",
        "Abl??sung",
        "Abnehmer",
        "abnutzen",
        "Abonnent",
        "Abrasion",
        "Abrede",
        "abr??sten",
        "Absicht",
        "Absprung",
        "Abstand",
        "absuchen",
        "Abteil",
        "Abundanz",
        "abwarten",
        "Abwurf",
        "Abzug",
        "Achse",
        "Achtung",
        "Acker",
        "Aderlass",
        "Adler",
        "Admiral",
        "Adresse",
        "Affe",
        "Affront",
        "Afrika",
        "Aggregat",
        "Agilit??t",
        "??hneln",
        "Ahnung",
        "Ahorn",
        "Akazie",
        "Akkord",
        "Akrobat",
        "Aktfoto",
        "Aktivist",
        "Albatros",
        "Alchimie",
        "Alemanne",
        "Alibi",
        "Alkohol",
        "Allee",
        "All??re",
        "Almosen",
        "Almweide",
        "Aloe",
        "Alpaka",
        "Alpental",
        "Alphabet",
        "Alpinist",
        "Alraune",
        "Altbier",
        "Alter",
        "Altfl??te",
        "Altruist",
        "Alublech",
        "Aludose",
        "Amateur",
        "Amazonas",
        "Ameise",
        "Amnesie",
        "Amok",
        "Ampel",
        "Amphibie",
        "Ampulle",
        "Amsel",
        "Amulett",
        "Anakonda",
        "Analogie",
        "Ananas",
        "Anarchie",
        "Anatomie",
        "Anbau",
        "Anbeginn",
        "anbieten",
        "Anblick",
        "??ndern",
        "andocken",
        "Andrang",
        "anecken",
        "Anflug",
        "Anfrage",
        "Anf??hrer",
        "Angebot",
        "Angler",
        "Anhalter",
        "Anh??he",
        "Animator",
        "Anis",
        "Anker",
        "ankleben",
        "Ankunft",
        "Anlage",
        "anlocken",
        "Anmut",
        "Annahme",
        "Anomalie",
        "Anonymus",
        "Anorak",
        "anpeilen",
        "Anrecht",
        "Anruf",
        "Ansage",
        "Anschein",
        "Ansicht",
        "Ansporn",
        "Anteil",
        "Antlitz",
        "Antrag",
        "Antwort",
        "Anwohner",
        "Aorta",
        "Apfel",
        "Appetit",
        "Applaus",
        "Aquarium",
        "Arbeit",
        "Arche",
        "Argument",
        "Arktis",
        "Armband",
        "Aroma",
        "Asche",
        "Askese",
        "Asphalt",
        "Asteroid",
        "??sthetik",
        "Astronom",
        "Atelier",
        "Athlet",
        "Atlantik",
        "Atmung",
        "Audienz",
        "aufatmen",
        "Auffahrt",
        "aufholen",
        "aufregen",
        "Aufsatz",
        "Auftritt",
        "Aufwand",
        "Augapfel",
        "Auktion",
        "Ausbruch",
        "Ausflug",
        "Ausgabe",
        "Aushilfe",
        "Ausland",
        "Ausnahme",
        "Aussage",
        "Autobahn",
        "Avocado",
        "Axthieb",
        "Bach",
        "backen",
        "Badesee",
        "Bahnhof",
        "Balance",
        "Balkon",
        "Ballett",
        "Balsam",
        "Banane",
        "Bandage",
        "Bankett",
        "Barbar",
        "Barde",
        "Barett",
        "Bargeld",
        "Barkasse",
        "Barriere",
        "Bart",
        "Bass",
        "Bastler",
        "Batterie",
        "Bauch",
        "Bauer",
        "Bauholz",
        "Baujahr",
        "Baum",
        "Baustahl",
        "Bauteil",
        "Bauweise",
        "Bazar",
        "beachten",
        "Beatmung",
        "beben",
        "Becher",
        "Becken",
        "bedanken",
        "beeilen",
        "beenden",
        "Beere",
        "befinden",
        "Befreier",
        "Begabung",
        "Begierde",
        "begr????en",
        "Beiboot",
        "Beichte",
        "Beifall",
        "Beigabe",
        "Beil",
        "Beispiel",
        "Beitrag",
        "beizen",
        "bekommen",
        "beladen",
        "Beleg",
        "bellen",
        "belohnen",
        "Bemalung",
        "Bengel",
        "Benutzer",
        "Benzin",
        "beraten",
        "Bereich",
        "Bergluft",
        "Bericht",
        "Bescheid",
        "Besitz",
        "besorgen",
        "Bestand",
        "Besuch",
        "betanken",
        "beten",
        "bet??ren",
        "Bett",
        "Beule",
        "Beute",
        "Bewegung",
        "bewirken",
        "Bewohner",
        "bezahlen",
        "Bezug",
        "biegen",
        "Biene",
        "Bierzelt",
        "bieten",
        "Bikini",
        "Bildung",
        "Billard",
        "binden",
        "Biobauer",
        "Biologe",
        "Bionik",
        "Biotop",
        "Birke",
        "Bison",
        "Bitte",
        "Biwak",
        "Bizeps",
        "blasen",
        "Blatt",
        "Blauwal",
        "Blende",
        "Blick",
        "Blitz",
        "Blockade",
        "Bl??delei",
        "Blondine",
        "Blues",
        "Blume",
        "Blut",
        "Bodensee",
        "Bogen",
        "Boje",
        "Bollwerk",
        "Bonbon",
        "Bonus",
        "Boot",
        "Bordarzt",
        "B??rse",
        "B??schung",
        "Boudoir",
        "Boxkampf",
        "Boykott",
        "Brahms",
        "Brandung",
        "Brauerei",
        "Brecher",
        "Breitaxt",
        "Bremse",
        "brennen",
        "Brett",
        "Brief",
        "Brigade",
        "Brillanz",
        "bringen",
        "brodeln",
        "Brosche",
        "Br??tchen",
        "Br??cke",
        "Brunnen",
        "Br??ste",
        "Brutofen",
        "Buch",
        "B??ffel",
        "Bugwelle",
        "B??hne",
        "Buletten",
        "Bullauge",
        "Bumerang",
        "bummeln",
        "Buntglas",
        "B??rde",
        "Burgherr",
        "Bursche",
        "Busen",
        "Buslinie",
        "Bussard",
        "Butangas",
        "Butter",
        "Cabrio",
        "campen",
        "Captain",
        "Cartoon",
        "Cello",
        "Chalet",
        "Charisma",
        "Chefarzt",
        "Chiffon",
        "Chipsatz",
        "Chirurg",
        "Chor",
        "Chronik",
        "Chuzpe",
        "Clubhaus",
        "Cockpit",
        "Codewort",
        "Cognac",
        "Coladose",
        "Computer",
        "Coupon",
        "Cousin",
        "Cracking",
        "Crash",
        "Curry",
        "Dach",
        "Dackel",
        "daddeln",
        "daliegen",
        "Dame",
        "Dammbau",
        "D??mon",
        "Dampflok",
        "Dank",
        "Darm",
        "Datei",
        "Datsche",
        "Datteln",
        "Datum",
        "Dauer",
        "Daunen",
        "Deckel",
        "Decoder",
        "Defekt",
        "Degen",
        "Dehnung",
        "Deiche",
        "Dekade",
        "Dekor",
        "Delfin",
        "Demut",
        "denken",
        "Deponie",
        "Design",
        "Desktop",
        "Dessert",
        "Detail",
        "Detektiv",
        "Dezibel",
        "Diadem",
        "Diagnose",
        "Dialekt",
        "Diamant",
        "Dichter",
        "Dickicht",
        "Diesel",
        "Diktat",
        "Diplom",
        "Direktor",
        "Dirne",
        "Diskurs",
        "Distanz",
        "Docht",
        "Dohle",
        "Dolch",
        "Dom??ne",
        "Donner",
        "Dorade",
        "Dorf",
        "D??rrobst",
        "Dorsch",
        "Dossier",
        "Dozent",
        "Drachen",
        "Draht",
        "Drama",
        "Drang",
        "Drehbuch",
        "Dreieck",
        "Dressur",
        "Drittel",
        "Drossel",
        "Druck",
        "Duell",
        "Duft",
        "D??ne",
        "D??nung",
        "d??rfen",
        "Duschbad",
        "D??senjet",
        "Dynamik",
        "Ebbe",
        "Echolot",
        "Echse",
        "Eckball",
        "Edding",
        "Edelwei??",
        "Eden",
        "Edition",
        "Efeu",
        "Effekte",
        "Egoismus",
        "Ehre",
        "Eiablage",
        "Eiche",
        "Eidechse",
        "Eidotter",
        "Eierkopf",
        "Eigelb",
        "Eiland",
        "Eilbote",
        "Eimer",
        "einatmen",
        "Einband",
        "Eindruck",
        "Einfall",
        "Eingang",
        "Einkauf",
        "einladen",
        "Ein??de",
        "Einrad",
        "Eintopf",
        "Einwurf",
        "Einzug",
        "Eisb??r",
        "Eisen",
        "Eish??hle",
        "Eismeer",
        "Eiwei??",
        "Ekstase",
        "Elan",
        "Elch",
        "Elefant",
        "Eleganz",
        "Element",
        "Elfe",
        "Elite",
        "Elixier",
        "Ellbogen",
        "Eloquenz",
        "Emigrant",
        "Emission",
        "Emotion",
        "Empathie",
        "Empfang",
        "Endzeit",
        "Energie",
        "Engpass",
        "Enkel",
        "Enklave",
        "Ente",
        "entheben",
        "Entit??t",
        "entladen",
        "Entwurf",
        "Episode",
        "Epoche",
        "erachten",
        "Erbauer",
        "erbl??hen",
        "Erdbeere",
        "Erde",
        "Erdgas",
        "Erdkunde",
        "Erdnuss",
        "Erd??l",
        "Erdteil",
        "Ereignis",
        "Eremit",
        "erfahren",
        "Erfolg",
        "erfreuen",
        "erf??llen",
        "Ergebnis",
        "erhitzen",
        "erkalten",
        "erkennen",
        "erleben",
        "Erl??sung",
        "ern??hren",
        "erneuern",
        "Ernte",
        "Eroberer",
        "er??ffnen",
        "Erosion",
        "Erotik",
        "Erpel",
        "erraten",
        "Erreger",
        "err??ten",
        "Ersatz",
        "Erstflug",
        "Ertrag",
        "Eruption",
        "erwarten",
        "erwidern",
        "Erzbau",
        "Erzeuger",
        "erziehen",
        "Esel",
        "Eskimo",
        "Eskorte",
        "Espe",
        "Espresso",
        "essen",
        "Etage",
        "Etappe",
        "Etat",
        "Ethik",
        "Etikett",
        "Et??de",
        "Eule",
        "Euphorie",
        "Europa",
        "Everest",
        "Examen",
        "Exil",
        "Exodus",
        "Extrakt",
        "Fabel",
        "Fabrik",
        "Fachmann",
        "Fackel",
        "Faden",
        "Fagott",
        "Fahne",
        "Faible",
        "Fairness",
        "Fakt",
        "Fakult??t",
        "Falke",
        "Fallobst",
        "F??lscher",
        "Faltboot",
        "Familie",
        "Fanclub",
        "Fanfare",
        "Fangarm",
        "Fantasie",
        "Farbe",
        "Farmhaus",
        "Farn",
        "Fasan",
        "Faser",
        "Fassung",
        "fasten",
        "Faulheit",
        "Fauna",
        "Faust",
        "Favorit",
        "Faxger??t",
        "Fazit",
        "fechten",
        "Federboa",
        "Fehler",
        "Feier",
        "Feige",
        "feilen",
        "Feinripp",
        "Feldbett",
        "Felge",
        "Fellpony",
        "Felswand",
        "Ferien",
        "Ferkel",
        "Fernweh",
        "Ferse",
        "Fest",
        "Fettnapf",
        "Feuer",
        "Fiasko",
        "Fichte",
        "Fiktion",
        "Film",
        "Filter",
        "Filz",
        "Finanzen",
        "Findling",
        "Finger",
        "Fink",
        "Finnwal",
        "Fisch",
        "Fitness",
        "Fixpunkt",
        "Fixstern",
        "Fjord",
        "Flachbau",
        "Flagge",
        "Flamenco",
        "Flanke",
        "Flasche",
        "Flaute",
        "Fleck",
        "Flegel",
        "flehen",
        "Fleisch",
        "fliegen",
        "Flinte",
        "Flirt",
        "Flocke",
        "Floh",
        "Floskel",
        "Flo??",
        "Fl??te",
        "Flugzeug",
        "Flunder",
        "Flusstal",
        "Flutung",
        "Fockmast",
        "Fohlen",
        "F??hnlage",
        "Fokus",
        "folgen",
        "Foliant",
        "Folklore",
        "Font??ne",
        "F??rde",
        "Forelle",
        "Format",
        "Forscher",
        "Fortgang",
        "Forum",
        "Fotograf",
        "Frachter",
        "Fragment",
        "Fraktion",
        "fr??sen",
        "Frauenpo",
        "Freak",
        "Fregatte",
        "Freiheit",
        "Freude",
        "Frieden",
        "Frohsinn",
        "Frosch",
        "Frucht",
        "Fr??hjahr",
        "Fuchs",
        "F??gung",
        "f??hlen",
        "F??ller",
        "Fundb??ro",
        "Funkboje",
        "Funzel",
        "Furnier",
        "F??rsorge",
        "Fusel",
        "Fu??bad",
        "Futteral",
        "Gabelung",
        "gackern",
        "Gage",
        "g??hnen",
        "Galaxie",
        "Galeere",
        "Galopp",
        "Gameboy",
        "Gamsbart",
        "Gandhi",
        "Gang",
        "Garage",
        "Gardine",
        "Gark??che",
        "Garten",
        "Gasthaus",
        "Gattung",
        "gaukeln",
        "Gazelle",
        "Geb??ck",
        "Gebirge",
        "Gebr??u",
        "Geburt",
        "Gedanke",
        "Gedeck",
        "Gedicht",
        "Gefahr",
        "Gefieder",
        "Gefl??gel",
        "Gef??hl",
        "Gegend",
        "Gehirn",
        "Geh??ft",
        "Gehweg",
        "Geige",
        "Geist",
        "Gelage",
        "Geld",
        "Gelenk",
        "Gel??bde",
        "Gem??lde",
        "Gemeinde",
        "Gem??se",
        "genesen",
        "Genuss",
        "Gep??ck",
        "Geranie",
        "Gericht",
        "Germane",
        "Geruch",
        "Gesang",
        "Geschenk",
        "Gesetz",
        "Gesindel",
        "Ges??ff",
        "Gespan",
        "Gestade",
        "Gesuch",
        "Getier",
        "Getr??nk",
        "Get??mmel",
        "Gewand",
        "Geweih",
        "Gewitter",
        "Gew??lbe",
        "Geysir",
        "Giftzahn",
        "Gipfel",
        "Giraffe",
        "Gitarre",
        "gl??nzen",
        "Glasauge",
        "Glatze",
        "Gleis",
        "Globus",
        "Gl??ck",
        "gl??hen",
        "Glutofen",
        "Goldzahn",
        "Gondel",
        "g??nnen",
        "Gottheit",
        "graben",
        "Grafik",
        "Grashalm",
        "Graugans",
        "greifen",
        "Grenze",
        "grillen",
        "Groschen",
        "Grotte",
        "Grube",
        "Gr??nalge",
        "Gruppe",
        "gruseln",
        "Gulasch",
        "Gummib??r",
        "Gurgel",
        "G??rtel",
        "G??terzug",
        "Haarband",
        "Habicht",
        "hacken",
        "hadern",
        "Hafen",
        "Hagel",
        "H??hnchen",
        "Haifisch",
        "Haken",
        "Halbaffe",
        "Halsader",
        "halten",
        "Halunke",
        "Handbuch",
        "Hanf",
        "Harfe",
        "Harnisch",
        "h??rten",
        "Harz",
        "Hasenohr",
        "Haube",
        "hauchen",
        "Haupt",
        "Haut",
        "Havarie",
        "Hebamme",
        "hecheln",
        "Heck",
        "Hedonist",
        "Heiler",
        "Heimat",
        "Heizung",
        "Hektik",
        "Held",
        "helfen",
        "Helium",
        "Hemd",
        "hemmen",
        "Hengst",
        "Herd",
        "Hering",
        "Herkunft",
        "Hermelin",
        "Herrchen",
        "Herzdame",
        "Heulboje",
        "Hexe",
        "Hilfe",
        "Himbeere",
        "Himmel",
        "Hingabe",
        "hinh??ren",
        "Hinweis",
        "Hirsch",
        "Hirte",
        "Hitzkopf",
        "Hobel",
        "Hochform",
        "Hocker",
        "hoffen",
        "Hofhund",
        "Hofnarr",
        "H??henzug",
        "Hohlraum",
        "H??lle",
        "Holzboot",
        "Honig",
        "Honorar",
        "horchen",
        "H??rprobe",
        "H??schen",
        "Hotel",
        "Hubraum",
        "Hufeisen",
        "H??gel",
        "huldigen",
        "H??lle",
        "Humbug",
        "Hummer",
        "Humor",
        "Hund",
        "Hunger",
        "Hupe",
        "H??rde",
        "Hurrikan",
        "Hydrant",
        "Hypnose",
        "Ibis",
        "Idee",
        "Idiot",
        "Igel",
        "Illusion",
        "Imitat",
        "impfen",
        "Import",
        "Inferno",
        "Ingwer",
        "Inhalte",
        "Inland",
        "Insekt",
        "Ironie",
        "Irrfahrt",
        "Irrtum",
        "Isolator",
        "Istwert",
        "Jacke",
        "Jade",
        "Jagdhund",
        "J??ger",
        "Jaguar",
        "Jahr",
        "J??hzorn",
        "Jazzfest",
        "Jetpilot",
        "jobben",
        "Jochbein",
        "jodeln",
        "Jodsalz",
        "Jolle",
        "Journal",
        "Jubel",
        "Junge",
        "Junimond",
        "Jupiter",
        "Jutesack",
        "Juwel",
        "Kabarett",
        "Kabine",
        "Kabuff",
        "K??fer",
        "Kaffee",
        "Kahlkopf",
        "Kaimauer",
        "Kaj??te",
        "Kaktus",
        "Kaliber",
        "Kaltluft",
        "Kamel",
        "k??mmen",
        "Kampagne",
        "Kanal",
        "K??nguru",
        "Kanister",
        "Kanone",
        "Kante",
        "Kanu",
        "kapern",
        "Kapit??n",
        "Kapuze",
        "Karneval",
        "Karotte",
        "K??sebrot",
        "Kasper",
        "Kastanie",
        "Katalog",
        "Kathode",
        "Katze",
        "kaufen",
        "Kaugummi",
        "Kauz",
        "Kehle",
        "Keilerei",
        "Keksdose",
        "Kellner",
        "Keramik",
        "Kerze",
        "Kessel",
        "Kette",
        "keuchen",
        "kichern",
        "Kielboot",
        "Kindheit",
        "Kinnbart",
        "Kinosaal",
        "Kiosk",
        "Kissen",
        "Klammer",
        "Klang",
        "Klapprad",
        "Klartext",
        "kleben",
        "Klee",
        "Kleinod",
        "Klima",
        "Klingel",
        "Klippe",
        "Klischee",
        "Kloster",
        "Klugheit",
        "Kl??ngel",
        "kneten",
        "Knie",
        "Kn??chel",
        "kn??pfen",
        "Kobold",
        "Kochbuch",
        "Kohlrabi",
        "Koje",
        "Kokos??l",
        "Kolibri",
        "Kolumne",
        "Komb??se",
        "Komiker",
        "kommen",
        "Konto",
        "Konzept",
        "Kopfkino",
        "Kordhose",
        "Korken",
        "Korsett",
        "Kosename",
        "Krabbe",
        "Krach",
        "Kraft",
        "Kr??he",
        "Kralle",
        "Krapfen",
        "Krater",
        "kraulen",
        "Kreuz",
        "Krokodil",
        "Kr??te",
        "Kugel",
        "Kuhhirt",
        "K??hnheit",
        "K??nstler",
        "Kurort",
        "Kurve",
        "Kurzfilm",
        "kuscheln",
        "k??ssen",
        "Kutter",
        "Labor",
        "lachen",
        "Lackaffe",
        "Ladeluke",
        "Lagune",
        "Laib",
        "Lakritze",
        "Lammfell",
        "Land",
        "Langmut",
        "Lappalie",
        "Last",
        "Laterne",
        "Latzhose",
        "Laubs??ge",
        "laufen",
        "Laune",
        "Lausbub",
        "Lavasee",
        "Leben",
        "Leder",
        "Leerlauf",
        "Lehm",
        "Lehrer",
        "leihen",
        "Lekt??re",
        "Lenker",
        "Lerche",
        "Leseecke",
        "Leuchter",
        "Lexikon",
        "Libelle",
        "Libido",
        "Licht",
        "Liebe",
        "liefern",
        "Liftboy",
        "Limonade",
        "Lineal",
        "Linoleum",
        "List",
        "Liveband",
        "Lobrede",
        "locken",
        "L??ffel",
        "Logbuch",
        "Logik",
        "Lohn",
        "Loipe",
        "Lokal",
        "Lorbeer",
        "L??sung",
        "l??ten",
        "Lottofee",
        "L??we",
        "Luchs",
        "Luder",
        "Luftpost",
        "Luke",
        "L??mmel",
        "Lunge",
        "lutschen",
        "Luxus",
        "Macht",
        "Magazin",
        "Magier",
        "Magnet",
        "m??hen",
        "Mahlzeit",
        "Mahnmal",
        "Maibaum",
        "Maisbrei",
        "Makel",
        "malen",
        "Mammut",
        "Manik??re",
        "Mantel",
        "Marathon",
        "Marder",
        "Marine",
        "Marke",
        "Marmor",
        "M??rzluft",
        "Maske",
        "Ma??anzug",
        "Ma??krug",
        "Mastkorb",
        "Material",
        "Matratze",
        "Mauerbau",
        "Maulkorb",
        "M??uschen",
        "M??zen",
        "Medium",
        "Meinung",
        "melden",
        "Melodie",
        "Mensch",
        "Merkmal",
        "Messe",
        "Metall",
        "Meteor",
        "Methode",
        "Metzger",
        "Mieze",
        "Milchkuh",
        "Mimose",
        "Minirock",
        "Minute",
        "mischen",
        "Missetat",
        "mitgehen",
        "Mittag",
        "Mixtape",
        "M??bel",
        "Modul",
        "m??gen",
        "M??hre",
        "Molch",
        "Moment",
        "Monat",
        "Mondflug",
        "Monitor",
        "Monokini",
        "Monster",
        "Monument",
        "Moorhuhn",
        "Moos",
        "M??pse",
        "Moral",
        "M??rtel",
        "Motiv",
        "Motorrad",
        "M??we",
        "M??he",
        "Mulatte",
        "M??ller",
        "Mumie",
        "Mund",
        "M??nze",
        "Muschel",
        "Muster",
        "Mythos",
        "Nabel",
        "Nachtzug",
        "Nackedei",
        "Nagel",
        "N??he",
        "N??hnadel",
        "Namen",
        "Narbe",
        "Narwal",
        "Nasenb??r",
        "Natur",
        "Nebel",
        "necken",
        "Neffe",
        "Neigung",
        "Nektar",
        "Nenner",
        "Neptun",
        "Nerz",
        "Nessel",
        "Nestbau",
        "Netz",
        "Neubau",
        "Neuerung",
        "Neugier",
        "nicken",
        "Niere",
        "Nilpferd",
        "nisten",
        "Nocke",
        "Nomade",
        "Nordmeer",
        "Notdurft",
        "Notstand",
        "Notwehr",
        "Nudismus",
        "Nuss",
        "Nutzhanf",
        "Oase",
        "Obdach",
        "Oberarzt",
        "Objekt",
        "Oboe",
        "Obsthain",
        "Ochse",
        "Odyssee",
        "Ofenholz",
        "??ffnen",
        "Ohnmacht",
        "Ohrfeige",
        "Ohrwurm",
        "??kologie",
        "Oktave",
        "??lberg",
        "Olive",
        "??lkrise",
        "Omelett",
        "Onkel",
        "Oper",
        "Optiker",
        "Orange",
        "Orchidee",
        "ordnen",
        "Orgasmus",
        "Orkan",
        "Ortskern",
        "Ortung",
        "Ostasien",
        "Ozean",
        "Paarlauf",
        "Packeis",
        "paddeln",
        "Paket",
        "Palast",
        "Pandab??r",
        "Panik",
        "Panorama",
        "Panther",
        "Papagei",
        "Papier",
        "Paprika",
        "Paradies",
        "Parka",
        "Parodie",
        "Partner",
        "Passant",
        "Patent",
        "Patzer",
        "Pause",
        "Pavian",
        "Pedal",
        "Pegel",
        "peilen",
        "Perle",
        "Person",
        "Pfad",
        "Pfau",
        "Pferd",
        "Pfleger",
        "Physik",
        "Pier",
        "Pilotwal",
        "Pinzette",
        "Piste",
        "Plakat",
        "Plankton",
        "Platin",
        "Plombe",
        "pl??ndern",
        "Pobacke",
        "Pokal",
        "polieren",
        "Popmusik",
        "Portr??t",
        "Posaune",
        "Postamt",
        "Pottwal",
        "Pracht",
        "Pranke",
        "Preis",
        "Primat",
        "Prinzip",
        "Protest",
        "Proviant",
        "Pr??fung",
        "Pubert??t",
        "Pudding",
        "Pullover",
        "Pulsader",
        "Punkt",
        "Pute",
        "Putsch",
        "Puzzle",
        "Python",
        "quaken",
        "Qualle",
        "Quark",
        "Quellsee",
        "Querkopf",
        "Quitte",
        "Quote",
        "Rabauke",
        "Rache",
        "Radclub",
        "Radhose",
        "Radio",
        "Radtour",
        "Rahmen",
        "Rampe",
        "Randlage",
        "Ranzen",
        "Raps??l",
        "Raserei",
        "rasten",
        "Rasur",
        "R??tsel",
        "Raubtier",
        "Raumzeit",
        "Rausch",
        "Reaktor",
        "Realit??t",
        "Rebell",
        "Rede",
        "Reetdach",
        "Regatta",
        "Regen",
        "Rehkitz",
        "Reifen",
        "Reim",
        "Reise",
        "Reizung",
        "Rekord",
        "Relevanz",
        "Rennboot",
        "Respekt",
        "Restm??ll",
        "retten",
        "Reue",
        "Revolte",
        "Rhetorik",
        "Rhythmus",
        "Richtung",
        "Riegel",
        "Rindvieh",
        "Rippchen",
        "Ritter",
        "Robbe",
        "Roboter",
        "Rockband",
        "Rohdaten",
        "Roller",
        "Roman",
        "r??ntgen",
        "Rose",
        "Rosskur",
        "Rost",
        "Rotahorn",
        "Rotglut",
        "Rotznase",
        "Rubrik",
        "R??ckweg",
        "Rufmord",
        "Ruhe",
        "Ruine",
        "Rumpf",
        "Runde",
        "R??stung",
        "r??tteln",
        "Saalt??r",
        "Saatguts",
        "S??bel",
        "Sachbuch",
        "Sack",
        "Saft",
        "sagen",
        "Sahneeis",
        "Salat",
        "Salbe",
        "Salz",
        "Sammlung",
        "Samt",
        "Sandbank",
        "Sanftmut",
        "Sardine",
        "Satire",
        "Sattel",
        "Satzbau",
        "Sauerei",
        "Saum",
        "S??ure",
        "Schall",
        "Scheitel",
        "Schiff",
        "Schlager",
        "Schmied",
        "Schnee",
        "Scholle",
        "Schrank",
        "Schulbus",
        "Schwan",
        "Seeadler",
        "Seefahrt",
        "Seehund",
        "Seeufer",
        "segeln",
        "Sehnerv",
        "Seide",
        "Seilzug",
        "Senf",
        "Sessel",
        "Seufzer",
        "Sexgott",
        "Sichtung",
        "Signal",
        "Silber",
        "singen",
        "Sinn",
        "Sirup",
        "Sitzbank",
        "Skandal",
        "Skikurs",
        "Skipper",
        "Skizze",
        "Smaragd",
        "Socke",
        "Sohn",
        "Sommer",
        "Songtext",
        "Sorte",
        "Spagat",
        "Spannung",
        "Spargel",
        "Specht",
        "Speise??l",
        "Spiegel",
        "Sport",
        "sp??len",
        "Stadtbus",
        "Stall",
        "St??rke",
        "Stativ",
        "staunen",
        "Stern",
        "Stiftung",
        "Stollen",
        "Str??mung",
        "Sturm",
        "Substanz",
        "S??dalpen",
        "Sumpf",
        "surfen",
        "Tabak",
        "Tafel",
        "Tagebau",
        "takeln",
        "Taktung",
        "Talsohle",
        "Tand",
        "Tanzb??r",
        "Tapir",
        "Tarantel",
        "Tarnname",
        "Tasse",
        "Tatnacht",
        "Tatsache",
        "Tatze",
        "Taube",
        "tauchen",
        "Taufpate",
        "Taumel",
        "Teelicht",
        "Teich",
        "teilen",
        "Tempo",
        "Tenor",
        "Terrasse",
        "Testflug",
        "Theater",
        "Thermik",
        "ticken",
        "Tiefflug",
        "Tierart",
        "Tigerhai",
        "Tinte",
        "Tischler",
        "toben",
        "Toleranz",
        "T??lpel",
        "Tonband",
        "Topf",
        "Topmodel",
        "Torbogen",
        "Torlinie",
        "Torte",
        "Tourist",
        "Tragesel",
        "trampeln",
        "Trapez",
        "Traum",
        "treffen",
        "Trennung",
        "Treue",
        "Trick",
        "trimmen",
        "Tr??del",
        "Trost",
        "Trumpf",
        "t??fteln",
        "Turban",
        "Turm",
        "??bermut",
        "Ufer",
        "Uhrwerk",
        "umarmen",
        "Umbau",
        "Umfeld",
        "Umgang",
        "Umsturz",
        "Unart",
        "Unfug",
        "Unimog",
        "Unruhe",
        "Unwucht",
        "Uranerz",
        "Urlaub",
        "Urmensch",
        "Utopie",
        "Vakuum",
        "Valuta",
        "Vandale",
        "Vase",
        "Vektor",
        "Ventil",
        "Verb",
        "Verdeck",
        "Verfall",
        "Vergaser",
        "verhexen",
        "Verlag",
        "Vers",
        "Vesper",
        "Vieh",
        "Viereck",
        "Vinyl",
        "Virus",
        "Vitrine",
        "Vollblut",
        "Vorbote",
        "Vorrat",
        "Vorsicht",
        "Vulkan",
        "Wachstum",
        "Wade",
        "Wagemut",
        "Wahlen",
        "Wahrheit",
        "Wald",
        "Walhai",
        "Wallach",
        "Walnuss",
        "Walzer",
        "wandeln",
        "Wanze",
        "w??rmen",
        "Warnruf",
        "W??sche",
        "Wasser",
        "Weberei",
        "wechseln",
        "Wegegeld",
        "wehren",
        "Weiher",
        "Weinglas",
        "Wei??bier",
        "Weitwurf",
        "Welle",
        "Weltall",
        "Werkbank",
        "Werwolf",
        "Wetter",
        "wiehern",
        "Wildgans",
        "Wind",
        "Wohl",
        "Wohnort",
        "Wolf",
        "Wollust",
        "Wortlaut",
        "Wrack",
        "Wunder",
        "Wurfaxt",
        "Wurst",
        "Yacht",
        "Yeti",
        "Zacke",
        "Zahl",
        "z??hmen",
        "Zahnfee",
        "Z??pfchen",
        "Zaster",
        "Zaumzeug",
        "Zebra",
        "zeigen",
        "Zeitlupe",
        "Zellkern",
        "Zeltdach",
        "Zensor",
        "Zerfall",
        "Zeug",
        "Ziege",
        "Zielfoto",
        "Zimteis",
        "Zobel",
        "Zollhund",
        "Zombie",
        "Z??pfe",
        "Zucht",
        "Zufahrt",
        "Zugfahrt",
        "Zugvogel",
        "Z??ndung",
        "Zweck",
        "Zyklop"
      };
      set_words(words);
      populate_maps();
    }
  };
}

#endif
