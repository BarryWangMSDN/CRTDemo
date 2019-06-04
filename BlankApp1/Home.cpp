#include "pch.h"
#include "Home.h"
#if __has_include("Home.g.cpp")
#include "Home.g.cpp"
#endif
#include <time.h>
#include <stdio.h>

#pragma warning(disable:4996)


using namespace winrt;
using namespace std;



namespace winrt::BlankApp1::implementation
{
    Home::Home()
    {
        InitializeComponent();
		
		auto today = clock::now();
		time_t todayt = clock::to_time_t(today);
		struct tm* p;
		p = gmtime(&todayt);
		char mybuffer[100];
		//mydatetxt().Text(to_hstring(1900 + p->tm_year) +L"/"+ to_hstring(1 + p->tm_mon) + L"/"+ to_hstring(p->tm_mday));
		sprintf(mybuffer,"%d/%d/%d", 1900 + p->tm_year, 1 + p->tm_mon, p->tm_mday);		
		hstring finalresult = to_hstring(mybuffer);
		mydatetxt().Text(finalresult);

		
		
    }

    int32_t Home::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void Home::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

   
}


void winrt::BlankApp1::implementation::Home::MasterListView_ItemClick(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::Controls::ItemClickEventArgs const& e)
{

}


void winrt::BlankApp1::implementation::Home::Morebtn_Tapped(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::Input::TappedRoutedEventArgs const& e)
{
	
	if (Frame().CanGoBack())
	{
		Frame().GoBack();
	}
}
