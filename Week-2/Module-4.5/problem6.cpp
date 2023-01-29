#include<bits/stdc++.h>
using namespace std;

class Cubiod
{
    //private:
    public:
    int length;
    int width;
    int height;

    Cubiod()
    {
        this->length=0;
        this->width=0;
        this->height=0;
    }
    Cubiod(int length,int width,int height)
    {
        this->length=length;
        this->width=width;
        this->height=height;
    }

    public:
    double getVolume()
    {
        return length*height*width;
    }
    public:
    double getSurfaceArea()
    {
        return ((2*length*width)+(2*length*height)+(2*height*width));
    }
};
    bool comp(Cubiod a,Cubiod b)
    {
        return a.getVolume()<b.getVolume();
    }
int main()
{
    vector<Cubiod>ob;
    for(int i=0;i<5;i++)
    {
        ob.push_back(Cubiod(4+i,20-i,3+i));
    }
    //double res=ob1.getVolume();
    sort(ob.begin(),ob.end(),comp);
    for(int i=0;i<ob.size();i++)
    {
        cout<<ob[i].getVolume()<<" "<<ob[i].getSurfaceArea()<<endl;
    }

    //cout<<res;

    return 0;
}