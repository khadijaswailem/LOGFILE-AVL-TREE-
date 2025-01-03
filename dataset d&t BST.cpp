//#include"test 3.hpp"
//#include<iostream>
//#include<fstream>
//#include<string>
//using namespace std;
//
//
//class myData {
//private:
//    string ip;
//    string date;
//    string time;
//    string zone;
//    string cik;
//    string acc;
//    string doc;
//    string code;
//    string filesize;
//    string idx;
//    string norefer;
//    string noagent;
//    string find;
//    string crawler;
//    string browser;
//public:
//    myData() {
//        ip = " ";
//        date = " ";
//        time = " ";
//        zone = " ";
//        cik = " ";
//        acc = " ";
//        doc = " ";
//        code = " ";
//        filesize = " ";
//        idx = " ";
//        norefer = " ";
//        noagent = " ";
//        find = " ";
//        crawler = " ";
//        browser = " ";
//    }
//    void setip(string i) {
//        ip = i;
//    }
//    void setdate(string d) {
//        date = d;
//    }
//    void settime(string t) {
//        time = t;
//    }
//    void setzone(string z) {
//        zone = z;
//    }
//    void setcik(string c) {
//        cik = c;
//    }
//    void setacc(string a) {
//        acc = a;
//    }
//    void setdoc(string d) {
//        doc = d;
//    }
//    void setcode(string c) {
//        code = c;
//    }
//    void setfilesize(string f) {
//        filesize = f;
//    }
//    void setidx(string i) {
//        idx = i;
//    }
//    void setnorefer(string rf) {
//        norefer = rf;
//    }
//    void setnoagent(string ag) {
//        noagent = ag;
//    }
//    void setfind(string f) {
//        find = f;
//    }
//    void setcrawler(string c) {
//        crawler = c;
//    }
//    void setbrowser(string b) {
//        browser = b;
//    }
//    string getip() {
//        return ip;
//    }
//    string getdate() {
//        return date;
//    }
//    string gettime() {
//        return time;
//    }
//    string getzone() {
//        return zone;
//    }
//    string getcik() {
//        return cik;
//    }
//    string getacc() {
//        return acc;
//    }
//    string getdoc() {
//        return doc;
//    }
//    string getcode() {
//        return code;
//    }
//    string getfilesize() {
//        return filesize;
//    }
//    string getidx() {
//        return idx;
//    }
//    string getnorefer() {
//        return norefer;
//    }
//    string getnoagent() {
//        return noagent;
//    }
//    string getfind() {
//        return find;
//    }
//    string getcrawler() {
//        return crawler;
//    }
//    string getbrowser() {
//        return browser;
//    }
//
//    bool operator > (const myData& other) {
//        if ((this->date,this->time) > (other.date,other.time)) {
//            true;
//        }
//        return false;
//    }
//
//    bool operator <(const myData& other) {
//        if ((this->date,this->time) < (other.date,other.time)) {
//            return true;
//        }
//        return false;
//    }
//    friend ostream& operator << (ostream& os, const myData& other) {
//        os << other.ip;
//        return os;
//    }
//    ~myData() {};
//};
//
//
//int main() {
//    BinarySearchTree<BSTNode<myData>, myData> t;
//    ifstream infile;
//    try
//    {
//        infile.open("log20170630.csv");//trying to open the file
//        if (infile.fail()) {
//            throw "file does not exist";//error message if file doesnt exist
//        }
//    }
//    catch (const char* e)
//    {
//        cerr << e << endl;//displaying the error message 
//    }
//    string ip;
//    string date;
//    string time;
//    string zone;
//    string cik;
//    string acc;
//    string doc;
//    string code;
//    string filesize;
//    string idx;
//    string norefer;
//    string noagent;
//    string find;
//    string crawler;
//    string browser;
//
//
//    int index = 0;
//    while (getline(infile, ip)) {//looping while there are still values to obtain
//        getline(infile, ip, ',');//setting the ip,date,time variables to those from the file
//        getline(infile, date, ',');
//        getline(infile, time, ',');
//        getline(infile, zone, ',');
//        getline(infile, cik, ',');
//        getline(infile, acc, ',');
//        getline(infile, doc, ',');
//        getline(infile, code, ',');
//        getline(infile, filesize, ',');
//        getline(infile, idx, ',');
//        getline(infile, norefer, ',');
//        getline(infile, noagent, ',');
//        getline(infile, find, ',');
//        getline(infile, crawler, ',');
//        getline(infile, browser, ',');
//
//        myData d;//creating an object for each row from the adt i created 
//        d.setip(ip);//setting the values
//        d.setdate(date);
//        d.settime(time);
//        d.setzone(zone);
//        d.setcik(cik);
//        d.setacc(acc);
//        d.setdoc(doc);
//        d.setcode(code);
//        d.setfilesize(filesize);
//        d.setidx(idx);
//        d.setnorefer(norefer);
//        d.setnoagent(noagent);
//        d.setfind(find);
//        d.setcrawler(crawler);
//        d.setbrowser(browser);
//        t.insert1(d);
//
//        if (index == 1000) {
//            break;
//        }
//        index++;
//
//        //cout << "ip: " << ip << endl;
//        //cout << "date: " << date << endl;
//        //cout << "time: " << time << endl;
//        //cout << "zone: " << zone << endl;
//        //cout << "filesize: " << filesize << endl;
//    }
//    infile.close();//closing the file
//
//    //traversing the tree using the root 
//    cout << "Traversing ascendingly the BST sorted by Date and time:" << endl;
//    t.traverseASC();
//    cout << endl;
//    cout << "Traversing descendingly the BST sorted by Date and time:" << endl;
//    t.traverseDESC();
//
//    
//}
