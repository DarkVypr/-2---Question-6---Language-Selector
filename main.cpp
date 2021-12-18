#include <iostream>

using namespace std;

int main() {
  int loop = 0;
  while(loop == 0) {

    // Ask the user to choose a language from the available options.
    cout << "Please choose a language. The available languages are: English: 'en', French: 'fr' and Italian: 'it': \n";
    string selectedLanguage;
    cin >> selectedLanguage;

    // Check what the user typed in an if statement. If the user types "stop" or "exit", exit the loop and stop the program. 
    if(selectedLanguage == "en") {
      cout << "English: Hello, how are you?\n";
    }
    else if(selectedLanguage == "fr") {
      cout << "Français: Bonjour comment vas-tu?\n";
    }
    else if(selectedLanguage == "it") {
      cout << "Italiano: Ciao, come stai?\n";
    }
    else if(selectedLanguage == "exit" || selectedLanguage == "stop") {
      break;
    }
    else {
      cout << "Sorry, that is not a valid language! The available languages are: English: 'en', French: 'fr' and Italian: 'it'!\n";
    }
  }
} 