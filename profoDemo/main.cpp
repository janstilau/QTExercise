#include <QCoreApplication>
#include <iostream>
#include <fstream>
#include <string>
#include "addressbook.pb.h"
#include <QFile>

using namespace std;


// This function fills in a Person message based on user input.
void PromptForAddress(tutorial::Person* person) {
  cout << "Enter person ID number: ";
  int id;
  cin >> id;
  person->set_id(id);
  cin.ignore(256, '\n');

  cout << "Enter name: ";
  getline(cin, *person->mutable_name());

  cout << "Enter email address (blank for none): ";
  string email;
  getline(cin, email);
  if (!email.empty()) {
    person->set_email(email);
  }

  while (true) {
    cout << "Enter a phone number (or leave blank to finish): ";
    string number;
    getline(cin, number);
    if (number == "end") {
      cout <<  "finished";
      cout.flush();
      break;
    }

    tutorial::Person::PhoneNumber* phone_number = person->add_phones();
    phone_number->set_number(number);

    cout << "Is this a mobile, home, or work phone? ";
    string type;
    getline(cin, type);
    if (type == "mobile") {
      phone_number->set_type(tutorial::Person::MOBILE);
    } else if (type == "home") {
      phone_number->set_type(tutorial::Person::HOME);
    } else if (type == "work") {
      phone_number->set_type(tutorial::Person::WORK);
    } else {
      cout << "Unknown phone type.  Using default." << endl;
    }
  }
}

void write()
{
    GOOGLE_PROTOBUF_VERIFY_VERSION;

    tutorial::AddressBook address_book;

    char *filePath = "/Users/hoolai/QTDemo/profoDemo/data.base";

    {
    // Read the existing address book.
    fstream input(filePath, ios::in | ios::binary);
    if (!input) {
      cout << filePath << ": File not found.  Creating a new file." << endl;
    } else if (!address_book.ParseFromIstream(&input)) {
      cerr << "Failed to parse address book." << endl;
      return ;
    }
    }

    // Add an address.
    PromptForAddress(address_book.add_people());

    {
    // Write the new address book back to disk.
    fstream output(filePath, ios::out | ios::trunc | ios::binary);
    if (!address_book.SerializeToOstream(&output)) {
      cerr << "Failed to write address book." << endl;
      return ;
    }
    }

    cout <<  "finished";

    // Optional:  Delete all global objects allocated by libprotobuf.
    google::protobuf::ShutdownProtobufLibrary();
}

void ListPeople(const tutorial::AddressBook& address_book) {
  for (int i = 0; i < address_book.people_size(); i++) {
    const tutorial::Person& person = address_book.people(i);

    cout << "Person ID: " << person.id() << endl;
    cout << "  Name: " << person.name() << endl;
    if (person.email().length()) {
      cout << "  E-mail address: " << person.email() << endl;
    }

    for (int j = 0; j < person.phones_size(); j++) {
      const tutorial::Person::PhoneNumber& phone_number = person.phones(j);

      switch (phone_number.type()) {
        case tutorial::Person::MOBILE:
          cout << "  Mobile phone #: ";
          break;
        case tutorial::Person::HOME:
          cout << "  Home phone #: ";
          break;
        case tutorial::Person::WORK:
          cout << "  Work phone #: ";
          break;
      }
      cout << phone_number.number() << endl;
    }
  }
}

void read() {
    GOOGLE_PROTOBUF_VERIFY_VERSION;

    char *filePath = "/Users/hoolai/QTDemo/profoDemo/data.base";

    tutorial::AddressBook address_book;

    {
    // Read the existing address book.
    fstream input(filePath, ios::in | ios::binary);
    if (!address_book.ParseFromIstream(&input)) {
      cerr << "Failed to parse address book." << endl;
      return;
    }
    }

    ListPeople(address_book);

    // Optional:  Delete all global objects allocated by libprotobuf.
    google::protobuf::ShutdownProtobufLibrary();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    while(true) {
        cout << "select write or read \n";
        cout << "~~~~~~~~~~~~~~~~~~~~~\n";

        string action;
        getline(cin, action);
        if (action == "write") {
            write();
        } else {
            read();
        }
        cout << "end ~~~~~~~~~~~~~~~~~~~~~ end\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
    }

    return a.exec();
}
