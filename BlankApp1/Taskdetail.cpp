#include "pch.h"
#include "Taskdetail.h"
#include "Taskdetail.g.cpp"

namespace winrt::BlankApp1::implementation
{
	Taskdetail::Taskdetail(winrt::hstring const& title) : m_title{ title }
	{
	}

    hstring Taskdetail::TaskTitle()
    {
		return m_title;
    }
    void Taskdetail::TaskTitle(hstring value)
    {
		if (m_title != value)
		{
			m_title = value;
			m_propertyChanged(*this, Windows::UI::Xaml::Data::PropertyChangedEventArgs{ L"TaskTitle" });
		}
    }
   
    Windows::Foundation::DateTime Taskdetail::Deadline()
    {
		return m_dl_datetime;
    }
    void Taskdetail::Deadline(Windows::Foundation::DateTime value)
    {
		if (m_dl_datetime != value)
		{
			m_dl_datetime = value;
			m_propertyChanged(*this, Windows::UI::Xaml::Data::PropertyChangedEventArgs{ L"Deadline" });
		}
    }
    Windows::Foundation::DateTime Taskdetail::Remindertime()
    {
		return m_rm_datetime;
    }
    void Taskdetail::Remindertime(Windows::Foundation::DateTime value)
    {
		if (m_rm_datetime != value)
		{
			m_rm_datetime = value;
			m_propertyChanged(*this, Windows::UI::Xaml::Data::PropertyChangedEventArgs{ L"Remindertime" });
		}
    }
    hstring Taskdetail::Comment()
    {
		return m_comment;
    }
    void Taskdetail::Comment(hstring value)
    {
		if (m_comment != value)
		{
			m_comment = value;
			m_propertyChanged(*this, Windows::UI::Xaml::Data::PropertyChangedEventArgs{ L"Comment" });
		}
    }
    winrt::event_token Taskdetail::PropertyChanged(Windows::UI::Xaml::Data::PropertyChangedEventHandler const& handler)
    {
		return m_propertyChanged.add(handler);
    }
    void Taskdetail::PropertyChanged(winrt::event_token const& token) noexcept
    {
		m_propertyChanged.remove(token);
    }
}
