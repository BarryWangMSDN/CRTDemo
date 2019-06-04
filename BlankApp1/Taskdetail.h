#pragma once
#include "Taskdetail.g.h"

namespace winrt::BlankApp1::implementation
{
    struct Taskdetail : TaskdetailT<Taskdetail>
    {
        Taskdetail() = delete;
		Taskdetail(winrt::hstring const& title);


        hstring TaskTitle();
        void TaskTitle(hstring value);
       
        Windows::Foundation::DateTime Deadline();
        void Deadline(Windows::Foundation::DateTime value);
        Windows::Foundation::DateTime Remindertime();
        void Remindertime(Windows::Foundation::DateTime value);
        hstring Comment();
        void Comment(hstring value);
        winrt::event_token PropertyChanged(Windows::UI::Xaml::Data::PropertyChangedEventHandler const& handler);
        void PropertyChanged(winrt::event_token const& token) noexcept;

	private:
		winrt::hstring m_title;
		winrt::event<Windows::UI::Xaml::Data::PropertyChangedEventHandler> m_propertyChanged;
		Windows::Foundation::DateTime m_dl_datetime;
		Windows::Foundation::DateTime m_rm_datetime;
		winrt::hstring m_comment;
    };
}
