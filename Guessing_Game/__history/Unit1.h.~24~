//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <algorithm>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TEdit *Text;
	TButton *Submit;
	TButton *Set_Guess;
	TLabel *Lable;
	TLabel *TrialsLable;
	TLabel *counter;
	void __fastcall Set_GuessClick(TObject *Sender);
	void __fastcall SubmitClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	int answer = -99;
	int count = 0;
	__fastcall TForm1(TComponent* Owner);
	int generateNum(int from, int to);

};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
