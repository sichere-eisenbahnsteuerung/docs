#ifndef AUDITINGSYSTEM_H
#define AUDITINGSYSTEM_H
/*****************************************************************************
 *
 *        Dateiname:    AuditingSystem.h
 *
 *        Projekt:      Sichere Eisenbahnsteuerung
 *
 *        Autor:        Felix Theodor Blueml
 *
 *
 *        Modul:        Auditing-System, Version 0.4
 *
 *        Beschreibung:
 *        Das Auditing-System uebermittelt alle gelieferten
 *        Statusmeldungen, ausgewaehlter Module, chronologisch per
 *        I2C-Buss an den Mikrocontroller "Arduino Duemilanove".
 *        Statusmeldungen werden vor ihrer Versendung in einem Ringpuffer
 *        zwischengespeichert. Bei zugeteilter Zeitscheibe durch die
 *        Betriebsmittelverwaltung werden alle gesammelten Meldungen
 *        verschickt.
 *
 *        Diese Headerdatei ist fuer das Modul Betriebsmittelverwaltung
 *        vorgesehen. Sie enthaellt die Prototypen fuer die
 *        Schnittstellen initAS und workAS.
 *
 ****************************************************************************/




/* Globale Makrodefinitionen ************************************************/

/* Globale Typdefinitionen **************************************************/

/* Deklaration von globalen Konstanten **************************************/

/* Deklaration von globalen Variablen ***************************************/

/* Deklaration von globalen Funktionen **************************************/

/*
 * initAS()
 * Schnittstelle nur fuer das Modul Betriebsmittelverwaltung. Die 
 * Schnittstelle dient der Initialisierung der Steuerungsvariablen fuer den 
 * Ringpuffer.
 * 
 * Rueckgabe: Keine
 */
void initAS(void);

/*
 * workAS()
 * Schnittstelle nur fuer das Modul Betriebsmittelverwaltung. Die
 * Schnittstelle dient dem Auslesen von maximal vier Meldungen der Module aus
 * dem Ringpuffer und deren Versendung ueber den I2C-Bus.
 * Fuer diese Uebertragung werden 28 Bytes versendet.
 * Vor jedem erneuten Aufruf dieser Schnittstelle muessen mindestens 1,102 ms
 * verstrichen sein.
 * 
 * Rueckgabe: Keine
 */
void workAS(void);


#endif /* AUDITINGSYSTEM_H */
