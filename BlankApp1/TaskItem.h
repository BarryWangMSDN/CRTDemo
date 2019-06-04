#pragma once

#include "winrt/Windows.UI.Xaml.h"
#include "winrt/Windows.UI.Xaml.Markup.h"
#include "winrt/Windows.UI.Xaml.Interop.h"
#include "winrt/Windows.UI.Xaml.Controls.Primitives.h"
#include "TaskItem.g.h"
#include "WidthFormatter.h"

namespace winrt::BlankApp1::implementation
{
    struct TaskItem : TaskItemT<TaskItem>
    {
        TaskItem();

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void ClickHandler(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args);
		
		void Button_Tapped(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::Input::TappedRoutedEventArgs const& e);
		void Maincontent_TextChanging(winrt::Windows::UI::Xaml::Controls::TextBox const& sender, winrt::Windows::UI::Xaml::Controls::TextBoxTextChangingEventArgs const& args);	
	};
}

namespace winrt::BlankApp1::factory_implementation
{
    struct TaskItem : TaskItemT<TaskItem, implementation::TaskItem>
    {
    };
}
