#include <iostream>
using namespace std;
void main_function();

void area_Triangle(){
    float b, h, area;
    cout<<"Enter Base length of Triangle: ";
    cin>>b;
    cout<<"Enter Height length of Triangle: ";
    cin>>h;
    area = 0.5*b*h;
    cout<<"\nArea = "<<area;
    cout<<endl;

     main_function();


}

void area_Circle(){
    double radius, area;
    cout<<"Enter the radius of circle: ";
    cin>>radius;
    area=3.14*radius*radius;
    cout<<"\nArea of circle is: "<<area;
    cout<<endl;

     main_function();

}

void perimeter_Triangle(){
    float a, b, c, per;
    cout<<"Enter Length of First Side: ";
    cin>>a;
    cout<<"Enter Length of Second Side: ";
    cin>>b;
    cout<<"Enter Length of Third Side: ";
    cin>>c;
    per = a+b+c;
    cout<<"\nPerimeter = "<<per;
    cout<<endl;

     main_function();


}

void perimeter_Circle(){
    float radius, area;
    cout << "Enter radius of circle\n";
    cin >> radius;
    area = 3.14159265359*radius*radius;
    cout << "Area of circle : " << area;
    cout<<endl;

     main_function();

}

void error_ch(){
    cout << "######################" << endl;
    cout << "######################" << endl;
    cout << "######################" << endl;
    cout << "######################" << endl;
    cout << "Return input 1 ~ 4 " << endl;
        cout << "######################" << endl;
    cout << "######################" << endl;
    cout << "######################" << endl;
    cout << "######################" << endl;

    main_function();
}

void main_function(){
    int x = 0;
    cout << "######################" << endl;
    cout << "By Abdallah Ahamed Elrefai" << endl;
    cout << "Code : 22256" << endl;
    cout << "######################" << endl;

    cout << "1 - area of Circle" << endl;
    cout << "2 - perimeter of Circle" << endl;
    cout << "3 - perimeter of Triangle" << endl;
    cout << "4 - area of Triangle" << endl;
    cout << ":";
    cin>>x;

    if(x == 1){
        area_Circle();
    }
    else if(x == 2){
        perimeter_Triangle();
    }
    else if(x == 3){
        perimeter_Triangle();
    }
    else if(x == 4){
        area_Triangle();
    }else{
        error_ch();
    }
}
int main()
{
    main_function();
}
