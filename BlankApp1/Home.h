﻿#pragma once

#include "Home.g.h"
#include "winrt/Windows.UI.Xaml.Input.h"

namespace winrt::BlankApp1::implementation
{
    struct Home : HomeT<Home>
    {
        Home();

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void ClickHandler(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args);
		void MasterListView_ItemClick(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::Controls::ItemClickEventArgs const& e);
		void Morebtn_Tapped(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::Input::TappedRoutedEventArgs const& e);
	};
}

namespace winrt::BlankApp1::factory_implementation
{
    struct Home : HomeT<Home, implementation::Home>
    {
    };
}
