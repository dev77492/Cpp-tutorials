#include <iostream>
#include <cstring>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display()
    {
    }
};

class CWHVideo : public CWH
{
protected:
    float Videolength;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r)
    {
        Videolength = vl;
    }
    void display()
    {
        cout << "This is an amazing video tutorial with title " << title << endl;
        cout << "Ratings : " << rating << endl;
        cout << "Video length is :" << Videolength << endl;
    }
};
class CWHText : public CWH
{
protected:
    int words;

public:
    CWHText(string s, float r, int w) : CWH(s, r)
    {
        words=w;
    }
    void display()
    {
        cout << "This is an amazing text tutorial with title " << title << endl;
        cout << "Ratings : " << rating << endl;
        cout << "Words count is :" << words<< endl;
    }
};

int main()
{
    int words;
    float r,vl;
    string title;
// Video
    title="Django Tutorial";
    r=4.8;
    vl=48;
    CWHVideo djvideo(title,r,vl);
    // djvideo.display();

// Text
    title="Django text tutorial";
    r=4.6;
    words=480;
    CWHText djtext(title,r,words);
    // djtext.display();

    CWH* ptr[2];
    ptr[0]=&djvideo;
    ptr[1]=&djtext;

    ptr[0]->display();
    ptr[1]->display();


    return 0;
}