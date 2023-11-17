#ifndef DECK_H
#define DECK_H

/**
 * enum kin_eE - card kind
 * @SPADE: spade kind
 * @HEART: heart kind
 * @CLUB: club kind
 * @DIAMOND: diamond kind
 */
typedef enum kin_eE
{
	SPADE = 0,
	HEART,
	CLUB,
	DIAMOND
} kin_tT;

/**
 * struct car_sS - Playing card
 *
 * @value: Value of the card
 * From "Ace" to "King"
 * @kind: Kind of the card
 */
typedef struct car_sS
{
	const char *value;
	const kin_tT kind;
} car_tT;

/**
 * struct de_no_s - Deck of card
 *
 * @card: Pointer to the card of the node
 * @prev: Pointer to the previous node of the list
 * @next: Pointer to the next node of the list
 */
typedef struct de_no_s
{
	const car_tT *card;
	struct de_no_s *prev;
	struct de_no_s *next;
} de_no_tT;

void sort_deck(de_no_tT **deck);
#endif
