#include <iostream>
using namespace std;

class Document {
public:
    virtual void exportFile() {
        cout << "Exporting document..." << endl;
    }
};

class PDFDocument : public Document {
public:
    void exportFile() override {
        cout << "Export Format: PDF" << endl;
        cout << "File Extension: .pdf" << endl;
    }
};

class TextDocument : public Document {
public:
    void exportFile() override {
        cout << "Export Format: Text" << endl;
        cout << "File Extension: .txt" << endl;
    }
};

class CSVDocument : public Document {
public:
    void exportFile() override {
        cout << "Export Format: CSV" << endl;
        cout << "File Extension: .csv" << endl;
    }
};

int main() {
    PDFDocument pdf;
    TextDocument txt;
    CSVDocument csv;

    Document *ptr;

    cout << "--- PDF Document ---" << endl;
    ptr = &pdf;
    ptr->exportFile();

    cout << "\n--- Text Document ---" << endl;
    ptr = &txt;
    ptr->exportFile();

    cout << "\n--- CSV Document ---" << endl;
    ptr = &csv;
    ptr->exportFile();

    return 0;
}
