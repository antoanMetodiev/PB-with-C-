#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main()
{
    string country; getline(cin, country);
    string subject; getline(cin, subject);
    double difficult;
    double execution;

    if (country == "Bulgaria")
    {
        if (subject == "ribbon")
        {
            difficult = 9.600;
            execution = 9.400;
        }
        else if (subject == "rope")
        {
            difficult = 9.500;
            execution = 9.400;
        }
        else if (subject == "hoop")
        {
            difficult = 9.550;
            execution = 9.750;
        }
    }
    else if (country == "Russia")
    {
        if (subject == "ribbon")
        {
            difficult = 9.100;
            execution = 9.400;
        }
        else if (subject == "rope")
        {
            difficult = 9.600;
            execution = 9.000;
        }
        else if (subject == "hoop")
        {
            difficult = 9.300;
            execution = 9.800;
        }
    }
    else if (country == "Italy")
    {
        if (subject == "ribbon")
        {
            difficult = 9.200;
            execution = 9.500;
        }
        else if (subject == "rope")
        {
            difficult = 9.700;
            execution = 9.150;
        }
        else if (subject == "hoop")
        {
            difficult = 9.450;
            execution = 9.350;
        }
    }

    printf("The team of %s get %.3f on %s.\n", country.c_str(), (difficult + execution), subject.c_str());
    double percent = 20 - (difficult + execution);
    percent = (percent / 20) * 100;
    printf("%.2f%%", percent);
}
