//
//  question.h
//  Ch10-2
//
//  Created by Erik Argueta on 3/2/20.
//  Copyright © 2020 Erik Argueta. All rights reserved.
//

#include <iostream>
#ifndef question_h
#define question_h

using namespace std;

class Question
{
public:
	/**
		Constructs a question with empty text and answer
	 */
	Question();
	
	/**
		@param question_text the text of this question
	 */
	void set_text(string question_text);
	
	/**
		@param correct_response the answer for this question
	 */
	void set_answer(string correct_response);
	
	/**
		@param response the response to check
		@return true if the response was correct, false otherwise
	 */
	bool check_answer(string response) const;
	
	/**
		Displays this question
	 */
	void display() const;
	
private:
	string text;
	string answer;
};

#endif /* question_h */
