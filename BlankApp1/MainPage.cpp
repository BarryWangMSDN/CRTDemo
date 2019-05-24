#include "pch.h"
#include "MainPage.h"
#include "MainPage.g.cpp"
#include "Home.h"

using namespace winrt;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;

namespace winrt::BlankApp1::implementation
{
    MainPage::MainPage()
    {
        InitializeComponent();
    }

    int32_t MainPage::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void MainPage::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

   
}


void winrt::BlankApp1::implementation::MainPage::NavigationViewControl_ItemInvoked(winrt::Windows::UI::Xaml::Controls::NavigationView const& sender, winrt::Windows::UI::Xaml::Controls::NavigationViewItemInvokedEventArgs const& args)
{
	if (args.InvokedItemContainer())
	{	
		Windows::UI::Xaml::Interop::TypeName pageTypeName;
		pageTypeName.Name = L"BlankApp1." + unbox_value<hstring>(args.InvokedItemContainer().Tag());
		pageTypeName.Kind = Windows::UI::Xaml::Interop::TypeKind::Primitive;
		/*winrt::Windows::UI::Xaml::Controls::Frame rootFrame{ nullptr };*/
		auto content = Window::Current().Content();
		if (content)
		{
		 /*rootFrame = content.try_as<winrt::Windows::UI::Xaml::Controls::Frame>();*/
		 //	.Navigate(pageTypeName, nullptr);
		 /*	auto test1 = xaml_typename<BlankApp1::Home>();
			auto test2 = pageTypeName;*/
			ContentFrame().Navigate(pageTypeName, nullptr);
		}
		//Key point here:
		//1. Have no idea what is ContentFrame(), thought it to be Frame ContentFrame but this one will not have ()
		//   So tried to use content.try_as to make the current Content as the frame to do navigation
		//2. After changing to ScrollView->ContentFrame, have no idea about why pagetypename will cause navigation crash
		//   SO tried to see the difference between xaml_typename<BlankApp1::Home>() and pageTypeName, find that it only 
		//   missed the namespace. That means I can contact the string to make it works. so the above is the final code
	}
}
