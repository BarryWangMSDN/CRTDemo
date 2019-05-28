#pragma once
#include "WidthFormatter.g.h"

namespace winrt::BlankApp1::implementation
{
    struct WidthFormatter : WidthFormatterT<WidthFormatter>
    {
        WidthFormatter() = default;

        Windows::Foundation::IInspectable Convert(Windows::Foundation::IInspectable const& value, Windows::UI::Xaml::Interop::TypeName const& targetType, Windows::Foundation::IInspectable const& parameter, hstring const& language);
        Windows::Foundation::IInspectable ConvertBack(Windows::Foundation::IInspectable const& value, Windows::UI::Xaml::Interop::TypeName const& targetType, Windows::Foundation::IInspectable const& parameter, hstring const& language);
    };
}
namespace winrt::BlankApp1::factory_implementation
{
    struct WidthFormatter : WidthFormatterT<WidthFormatter, implementation::WidthFormatter>
    {
    };
}
