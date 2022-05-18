#ifndef SZOVEG_H
#define SZOVEG_H

/**
 * Our own type for (pointers to) strings.
 */
typedef char * string;

//////////////////////////////////////////////////////////////////////////////
//
//   Public Interface
//

string get_string(const string prompt);

#endif    // SZOVEG_H
