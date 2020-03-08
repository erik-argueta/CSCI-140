//
//  question.cpp
//  Ch10-2
//
//  Created by Erik Argueta on 3/2/20.
//  Copyright © 2020 Erik Argueta. All rights reserved.
//
#include <iostream>
#include "question.h"

using namespace std;

Question::Question()
{
}

void Question::set_text(string question_text)
{
	text = question_text;
}

void Question::set_answer(string correct_response)
{
	answer = correct_response;
}

bool Question::check_answer(string response) const
{
	return response == answer;
}

void Question::display() const
{
	cout << text << endl;
}


