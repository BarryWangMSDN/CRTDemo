#include "pch.h"
#include "WidthFormatter.h"
#include "WidthFormatter.g.cpp"

namespace winrt::BlankApp1::implementation
{
    Windows::Foundation::IInspectable WidthFormatter::Convert(Windows::Foundation::IInspectable const& value, Windows::UI::Xaml::Interop::TypeName const& targetType, Windows::Foundation::IInspectable const& parameter, hstring const& language)
    {
		double previousvalue = unbox_value<double>(value);
		double newvalue = previousvalue - 50.0;
		auto result = box_value(newvalue);
		return result;
    }
    Windows::Foundation::IInspectable WidthFormatter::ConvertBack(Windows::Foundation::IInspectable const& value, Windows::UI::Xaml::Interop::TypeName const& targetType, Windows::Foundation::IInspectable const& parameter, hstring const& language)
    {
        throw hresult_not_implemented();
    }
}
