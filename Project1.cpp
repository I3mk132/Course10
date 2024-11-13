/// ================================== ( Project 1 ) ==========================================
/// String Class

#include <iostream>
#include "clsString.h"

using namespace std;

int main() {
    clsString String1;

    clsString String2 ("Mohammed");

    String1.setValue("Ali Ahmed");

    cout << "String1 = " << String1.Value() << endl;
    cout << "String2 = " << String2.Value() << endl;

    cout << "Number of words: " << String1.CountWords() <<endl;

    cout << "Number of words: " << String1.CountWords("Fadi ahmed rateb omer") << endl;

    cout << "Number of words: " <<
        clsString::CountWords("Mohammed Saqer Abu-Hadhoud") << endl;

    //----------------
    clsString String3("hi how are you?");

    cout << "String 3 = " << String3.Value() << endl;

    cout << "String Length = " <<String3.Length() << endl;

    String3.UpperFirstLetterOfEachWord();
    cout << String3.Value() << endl;

    //----------------

    String3.LowerFirstLetterOfEachWord();
    cout << String3.Value() << endl;

    //----------------

    String3.UpperAllString();
    cout << String3.Value() << endl;

    //----------------

    String3.LowerAllString();
    cout << String3.Value() << endl;

    //----------------
    char Char_a = 'a';
    clsString::InvertLetterCase(Char_a);
    cout << "After inverting a : "
        << Char_a << endl;

    //----------------

    String3.setValue("AbCdEfg");

    String3.InvertAllLettersCase();
    cout << String3.Value() << endl;

    String3.InvertAllLettersCase();
    cout << String3.Value() << endl;

    //----------------

    cout << "Capital Letters count : "
        << clsString::CountLetters("Mohammed Abu-Hadhoud", clsString::enWhatToCount::CapitalLetter)
        << endl<<endl;

    //----------------

    String3.setValue("Welcome to Jordan");
    cout << String3.Value() << endl;

    cout << "Capital Letters count :" << String3.CountLetters(clsString::enWhatToCount::CapitalLetter) << endl;

    //----------------

    cout << "Small Letters count :" << String3.CountLetters(clsString::enWhatToCount::SmallLetter) << endl;

    //----------------

    cout << "vowels count :" << String3.CountVowels() << endl;

    //----------------

    cout << "letter E count :" << String3.CountSpecificLetter('E',false) << endl;

    //----------------

    cout << "is letter a vowel? " << clsString::isVowel('a')
         << endl;

    //----------------

    cout << "Words Count" << String3.CountWords()
        << endl;

    //----------------


    vector<string> vString;

    vString = String3.SplitString(" ");

    cout << "\nTokens = " << vString.size() << endl;

    for (string& s : vString)
    {
        cout << s << endl;
    }

    //----------------

    //Tirms
    String3.setValue("    Mohammed Abu-Hahdoud     ");
    cout << "\nString     = " << String3.Value();

    String3.setValue("    Mohammed Abu-Hahdoud     ");
    String3.TrimLeft();
    cout << "\n\nTrim Left  = " << String3.Value();

    //----------------

    String3.setValue("    Mohammed Abu-Hahdoud     ");
    String3.TrimRight();
    cout << "\nTrim Right = " << String3.Value();

    //----------------

    String3.setValue("    Mohammed Abu-Hahdoud     ");
    String3.Trim();
    cout << "\nTrim       = " << String3.Value();

    //----------------

    //Joins
    vector<string> vString1 = { "Mohammed","Faid","Ali","Maher" };

    cout << "\n\nJoin String From Vector: \n";
    cout << clsString::JoinString(vString1, " ");


    string arrString[] = { "Mohammed","Faid","Ali","Maher" };

    cout << "\n\nJoin String From array: \n";
    cout << clsString::JoinString(arrString, 4, " ");

    //----------------

    String3.setValue("Mohammed Saqer Abu-Hahdoud");
    cout << "\n\nString     = " << String3.Value();

    String3.ReverseWordsInString();
    cout << "\nReverse Words : " << String3.Value()
        << endl;

    //---------------

    String3.setValue("Mohammed Saqer Abu-Hahdoud");
    String3.ReplaceWord("Mohammed", "Sari");
    cout << "\nReplace : " << String3.Value()
        << endl;

    //---------------

    String3.setValue("This is: a sample text, with punctuations.");
    cout << "\n\nString     = " << String3.Value();

    String3.RemovePunctuations();
    cout << "\nRemove Punctuations : " << String3.Value()
        << endl;

    //---------------
    system("pause>0");
    return 0;
}
