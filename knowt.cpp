#include <iostream> //Being used for standard output.
#include <vector> //Used for holding the 'cards'.
#include <string> //Being used for information about the cards and general string usage.

/**
 * @desc The type card used for creating a card object.
 */
class Card {
	private:
		std::string primaryStatement; //The front of the card.
		std::string primaryResponse; //The back of the card.
	public:
		/* Public members */
		std::string getFront(); //Returns the front of the card.
		std::string getBack(); //Returns the back of the card.

		/* Constructor */
		Card(std::string, std::string);

		/* Debugging methods */
		void outputCard(); //Outputs the cards information.
};

/**
 * @desc The constructor for setting properties of a card.
 * @param {std::string} front the front of the card.
 * @param {stdd:string} back the back of the card. 
 */
Card::Card(std::string front, std::string back) {
	this->primaryStatement = front;
	this->primaryResponse = back;
}

/**
 * @desc Getter function for returning the string of the front of the card.
 * @return {std::string} returns a string of the front of the card.
 */
std::string Card::getFront() {
	return this->primaryStatement; //Return the front of the card.
}

/**
 * @desc Getter function for returning the string of the back of the card.
 * @return {std::string} returns a string of the back of the card.
 */

std::string Card::getBack() {
	return this->primaryResponse;
}

/** 
 * @desc Output information about the card to standard output.
 */
void Card::outputCard() {
	std::cout << "Front: " << this->getFront() << std::endl;
	std::cout << "Back: " << this->getBack() << std::endl;
}

/**
 * @desc A grouping of individuals of type Card held into a vector.
 */
class Cards {
	private:
		std::vector<Card> cardGroup;
		std::string Title;

	public:
		/* Public members */
		std::vector<std::string> getCards();
		std::string getTitle();
		
		/* Debugging methods */
		void outputCards();
};

/**
 * @desc The main function, starting the whole process with the active stuff.
 */
int main() {
	Card card = Card("Front", "Back");
	card.outputCard();

	return 0;
}
