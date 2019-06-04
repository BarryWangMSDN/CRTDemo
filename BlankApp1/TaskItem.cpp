#include "pch.h"
#include "TaskItem.h"
#if __has_include("TaskItem.g.cpp")
#include "TaskItem.g.cpp"
#endif

using namespace winrt;
using namespace Windows::UI::Xaml;

namespace winrt::BlankApp1::implementation
{
	bool editmode = false;

    TaskItem::TaskItem()
    {
        InitializeComponent();
    }

    int32_t TaskItem::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void TaskItem::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void TaskItem::ClickHandler(IInspectable const&, RoutedEventArgs const&)
    {
		
    }

	
}







void winrt::BlankApp1::implementation::TaskItem::Button_Tapped(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::Input::TappedRoutedEventArgs const& e)
{
	
	
}





void winrt::BlankApp1::implementation::TaskItem::Maincontent_TextChanging(winrt::Windows::UI::Xaml::Controls::TextBox const& sender, winrt::Windows::UI::Xaml::Controls::TextBoxTextChangingEventArgs const& args)
{
	hstring txtval = sender.as<Windows::UI::Xaml::Controls::TextBox>().Text();
	if (txtval == L"")
	{
		editmode = false;
	}
	else
	{
		editmode = true;
	}
 	 
	if (editmode)
	{
		addbtn().Visibility(Windows::UI::Xaml::Visibility::Visible);
	}
	else
	{
		addbtn().Visibility(Windows::UI::Xaml::Visibility::Collapsed);
	}
	
}


