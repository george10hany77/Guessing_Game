//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit1.h"
#include <ctime>
#include <iostream>


//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
//---------------------------------------------------------------------------
int TForm1::generateNum(int from, int to){
	srand(time(nullptr));
	return from + (rand() % to);
}
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Set_GuessClick(TObject *Sender)
{
	answer = generateNum(1,100);
	Lable->Text = "The Guess Is Set.";
	Text->Text = "";
	count = 0;
    counter->Text = count;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::SubmitClick(TObject *Sender)
{
	if(answer == -99){
		Lable->Text = "Set random number!";
		Text->Text = "";
	} else{
		int readNum = Text->Text.ToInt();
		if (readNum > answer){
			Lable->Text = "A little lower";
			count++;
		} else if (readNum < answer){
			Lable->Text = "A little higher";
			count++;
		} else{
			Lable->Text = "Bingooo !!";
			answer = -99;
		}
		counter->Text = count;
	}
}
//---------------------------------------------------------------------------
