/*
 * description_brief.h


 *
 *  Created on: 24 Sep 2023
 *      Author: Charlie
 *
 *      Description:
 *      Declaration of the description brief class
 *      It will be used to make the briefs for items or anything needing a name and description in the game.
 */

#ifndef HELPERS_DESCRIPTION_BRIEF_H_
#define HELPERS_DESCRIPTION_BRIEF_H_

#include <iostream>
#include<string.h>

class Descriptor{
protected:
	std::string name;
	std::string description;

public:
	Descriptor();

	virtual ~Descriptor() = default;

	// getter / accessor methods
	virtual std::string getName();
	virtual std::string getDescription();

	// setter / mutator methods
	virtual void setName(std::string);
	virtual void setDescription(std::string);

};

#endif /* HELPERS_DESCRIPTION_BRIEF_H_ */
