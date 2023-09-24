/*
 * description_brief.cpp

 *
 *  Created on: 24 Sep 2023
 *      Author: Charlie
 *
 *      Description:
 *      Declaration of the description brief class
 *      It will be used to make the briefs for items or anything needing a name and description in the game.
 */


#include "Description_brief.h"

Descriptor::Descriptor(){
	name = "";
	description = "";
}

/***********************************
 * GETTER METHODS
***********************************/
std::string Descriptor::getName(){
	return name;
}

std::string Descriptor::getDescription(){
	return description;
}

/***********************************
 * SETTER METHODS
***********************************/
void Descriptor::setName(std::string inputName){
	name = inputName;
}

void Descriptor::setDescription(std::string inputDescription){
	description = inputDescription;
}
