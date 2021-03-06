//TSMsgResource_de.inc
//Wird eingebunden �ber unit TSResources.

//Resource-Strings f�r Fehlermeldungen

rsNoLogFile = 'Die Protokolldatei %s konnte nicht initialisiert werden.'; //TSFileLib
rsCmdParamMismatch = 'Fehler in %s: Unterschiedliche Anzahl Felder und Werte.';	//TSDBLib
rsCmdParamMissing = 'Fehler in %s: Mindestens ein Feld muss angegeben werden.'; //TSDBLib
rsCmdKeyParamMismatch = 'Fehler in %s: Unterschiedliche Anzahl Schl�sselfelder und Schl�sselwerte.'; //TSDBLib
rsCmdKeyParamMissing = 'Fehler in %s: Mindestens ein Schl�sselfeld muss angegeben werden.'; //TSDBLib

rsINIUnknownError = 'Unbekannter Fehler';
rsINISaveNotImplemented = 'Die Save-Methode ist in dieser Klasse nicht implementiert';
rsININoLookupDS = 'DataSet f�r Lookup nicht zugewiesen .';
rsININoValueField = 'Ergebnisfeld "%s" nicht gefunden';
rsININoDescriptionField = 'Beschreibungsfeld "%s" nicht gefunden';
rsININoEntryField = 'Feld f�r INI-Eintrag "%s" nicht gefunden';
rsCantPrepReadQry = 'SQL-Befehl f�r Leseabfrage kann nicht erzeugt werden.';
rsCantPrepWriteQry = 'SQL-Befehl f�r Schreibabfrage kann nicht erzeugt werden.';

rsINIPropError = '%s: Kann nicht lesen oder schreiben: Tabellenname oder Transaktion fehlt.';
rsINIEmptyGroup = '%s: Name der aktiven Gruppe darf nicht leer sein.';
rsINIListNotAssigned = '%s.GetStrings: Result-Strings sind nicht zugewiesen.';
rsINIValueMissing = 'INI-Datensatz nicht gefunden.';
rsINIListError = 'Fehler im Kopfeintrag der Liste.';

boolYes = 'Ja';
boolNo = 'Nein';

exMsgDateInvalid = 'Der Wert "%s" kann nicht in ein Datum umgewandelt werden';
exMsgTimeInvalid = 'Der Wert "%s" kann nicht in eine Uhrzeit umgewandelt werden';

rsCompanyINIFile = 'Gemeinsame Einstellungen'; //verwendet von TSApp.CompanyINI

rsLogChangingFile = 'Protokolldatei wird ge�ndert. Neue Datei: %s';
rsLogFileChanged = 'Protokolldatei wurde ge�ndert. Bisher: %s';
rsLogFileHint = 'Pr�fen Sie auch die Fehlerprotokolldatei: %s';
rsLogMailSubject = 'Fehler in der Anwendung %s';
rsLogPrepareFailed = 'ACHTUNG!!'#13#10'Die Protokolldatei konnte nicht zum Schreiben '
                    + 'ge�ffnet werden. Aufzeichnung von Fehlern ist nicht m�glich.';
rsExMsg = 'Fehlermeldung: %s';
rsExApplication = 'Programm/Anwendung: %s - Version: %s';
rsExExceptionClass = 'Fehlerklasse: %s';
rsExActiveForm = 'Aktives Formular: %s (%s)';
rsExActiveCtrl = 'Aktives Steuerelement: %s (%s)';
rsExObjAsComp = 'Ausl�sende Komponente: %s (%s)';
rsExObj = 'Ausl�sendes Objekt: %s';
rsExIOError = 'I/O-Fehlernummer: %s';
rsExStack = 'Ausf�hrungsposition (Stack):';
rsExCaughtMessage = 'Ein unbehandelter Fehler ist aufgetreten.';
rsExCaption = 'Fehler im Programm';
rsLogInternalError = 'In der Fehlerprotokollierung ist ein Fehler aufgetreten.'; //   ;-)

rsTSNumNULLShort = 'NULL';
rsEditValueNotAccepted = 'Der Eingegebene Wert ist ung�ltig.';

rsTSNumEditButtonMessage = 'Hier k�nnen Zahlen und Rechenoperationen eingeben werden.'#13#10
                          + 'Wird eine Rechenformel erkannt, so wird die Eingabe '
                          + 'durch das Rechenergebnis ersetzt.'#13#10
            							+ 'Die vier Grundrechenarten sind m�glich; die mathematisch korrekte '
													+ 'sogenannte "Punkt-Vor-Strich"-Rechnung wird verwendet.'#13#10
													+ 'Bekannte Rechenarten sind: Addition, Subtraktion (+, -), '
													+ 'Multiplikation, Division (*, /) und Potenz (^).';

rsDateTokenYear = 'J';
rsDateTokenMonth = 'M';
rsDateTokenWeek = 'W';
rsDateTokenDay = 'T';
rsDateTokenHour = 'H';
rsDateTokenMinute = 'N';
rsDateTokenSecond = 'S';
rsDateTokenMillisecond = 'X';

rsTSDateEditButtonMsg = 'Hier kann ein Datum eingegeben werden.'#13#10
              + 'Fehlende Teile des Datums werden automatisch erg�nzt.'#13#10
              + 'Beispiele: "5" wird zum 05. des aktuellen Monats, '#13#10
              + '"0808" wird zum 08.August des aktuellen Jahres.'#13#10
              + 'Als K�rzel f�r das heutige Datum kann "%s" verwendet werden.'#13#10
              + 'Rechenoperationen sind m�glich:'#13#10
              + '"6+1M" ist der Sechste dieses Monats plus ein Monat.'#13#10
              + '"0303-1J" ist der 3. M�rz des vorigen Jahres.'#13#10
              + '"0103-1T" ist der letzte Tag des Februar.';

rsTSDateEditRangeButtonMsg = 'Hier kann ein Datum oder ein Datumsbereich eingegeben werden.'#13#10
              + 'Fehlende Teile des Datums werden automatisch erg�nzt.'#13#10
              + 'Beispiele: "5" wird zum 05. des aktuellen Monats, '#13#10
              + '"0808" wird zum 08.August des aktuellen Jahres.'#13#10
              + 'Datumsbereiche enthalten zwei Daten, getrennt durch "..".'#13#10
              + 'Beispiel: "19..0909" umfasst den Bereich vom 19. des aktuellen Monats'
              + 'bis zum 09.September dieses Jahres.'
              + 'Als K�rzel f�r das heutige Datum kann "%s" verwendet werden.'
              + '"x..1+1M" von heute bis zum ersten des n�chsten Monats.'#13#10
              + '"0303-1J" ist der 3. M�rz des vorigen Jahres.'#13#10
              + '"0103-1T" ist der letzte Tag des Februar.';


