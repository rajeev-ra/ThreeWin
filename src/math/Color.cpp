#include "stdafx.h"
#include "Color.h"

namespace THREE
{
	std::map<Color::Name, unsigned int> g_colors({
		{ Color::aliceblue,0xF0F8FF },
		{ Color::antiquewhite,0xFAEBD7 },
		{ Color::aqua,0x00FFFF },
		{ Color::aquamarine,0x7FFFD4 },
		{ Color::azure,0xF0FFFF },
		{ Color::beige,0xF5F5DC },
		{ Color::bisque,0xFFE4C4 },
		{ Color::black,0x000000 },
		{ Color::blanchedalmond,0xFFEBCD },
		{ Color::blue,0x0000FF },
		{ Color::blueviolet,0x8A2BE2 },
		{ Color::brown,0xA52A2A },
		{ Color::burlywood,0xDEB887 },
		{ Color::cadetblue,0x5F9EA0 },
		{ Color::chartreuse,0x7FFF00 },
		{ Color::chocolate,0xD2691E },
		{ Color::coral,0xFF7F50 },
		{ Color::cornflowerblue,0x6495ED },
		{ Color::cornsilk,0xFFF8DC },
		{ Color::crimson,0xDC143C },
		{ Color::cyan,0x00FFFF },
		{ Color::darkblue,0x00008B },
		{ Color::darkcyan,0x008B8B },
		{ Color::darkgoldenrod,0xB8860B },
		{ Color::darkgray,0xA9A9A9 },
		{ Color::darkgreen,0x006400 },
		{ Color::darkgrey,0xA9A9A9 },
		{ Color::darkkhaki,0xBDB76B },
		{ Color::darkmagenta,0x8B008B },
		{ Color::darkolivegreen,0x556B2F },
		{ Color::darkorange,0xFF8C00 },
		{ Color::darkorchid,0x9932CC },
		{ Color::darkred,0x8B0000 },
		{ Color::darksalmon,0xE9967A },
		{ Color::darkseagreen,0x8FBC8F },
		{ Color::darkslateblue,0x483D8B },
		{ Color::darkslategray,0x2F4F4F },
		{ Color::darkslategrey,0x2F4F4F },
		{ Color::darkturquoise,0x00CED1 },
		{ Color::darkviolet,0x9400D3 },
		{ Color::deeppink,0xFF1493 },
		{ Color::deepskyblue,0x00BFFF },
		{ Color::dimgray,0x696969 },
		{ Color::dimgrey,0x696969 },
		{ Color::dodgerblue,0x1E90FF },
		{ Color::firebrick,0xB22222 },
		{ Color::floralwhite,0xFFFAF0 },
		{ Color::forestgreen,0x228B22 },
		{ Color::fuchsia,0xFF00FF },
		{ Color::gainsboro,0xDCDCDC },
		{ Color::ghostwhite,0xF8F8FF },
		{ Color::gold,0xFFD700 },
		{ Color::goldenrod,0xDAA520 },
		{ Color::gray,0x808080 },
		{ Color::green,0x008000 },
		{ Color::greenyellow,0xADFF2F },
		{ Color::grey,0x808080 },
		{ Color::honeydew,0xF0FFF0 },
		{ Color::hotpink,0xFF69B4 },
		{ Color::indianred,0xCD5C5C },
		{ Color::indigo,0x4B0082 },
		{ Color::ivory,0xFFFFF0 },
		{ Color::khaki,0xF0E68C },
		{ Color::lavender,0xE6E6FA },
		{ Color::lavenderblush,0xFFF0F5 },
		{ Color::lawngreen,0x7CFC00 },
		{ Color::lemonchiffon,0xFFFACD },
		{ Color::lightblue,0xADD8E6 },
		{ Color::lightcoral,0xF08080 },
		{ Color::lightcyan,0xE0FFFF },
		{ Color::lightgoldenrodyellow,0xFAFAD2 },
		{ Color::lightgray,0xD3D3D3 },
		{ Color::lightgreen,0x90EE90 },
		{ Color::lightgrey,0xD3D3D3 },
		{ Color::lightpink,0xFFB6C1 },
		{ Color::lightsalmon,0xFFA07A },
		{ Color::lightseagreen,0x20B2AA },
		{ Color::lightskyblue,0x87CEFA },
		{ Color::lightslategray,0x778899 },
		{ Color::lightslategrey,0x778899 },
		{ Color::lightsteelblue,0xB0C4DE },
		{ Color::lightyellow,0xFFFFE0 },
		{ Color::lime,0x00FF00 },
		{ Color::limegreen,0x32CD32 },
		{ Color::linen,0xFAF0E6 },
		{ Color::magenta,0xFF00FF },
		{ Color::maroon,0x800000 },
		{ Color::mediumaquamarine,0x66CDAA },
		{ Color::mediumblue,0x0000CD },
		{ Color::mediumorchid,0xBA55D3 },
		{ Color::mediumpurple,0x9370DB },
		{ Color::mediumseagreen,0x3CB371 },
		{ Color::mediumslateblue,0x7B68EE },
		{ Color::mediumspringgreen,0x00FA9A },
		{ Color::mediumturquoise,0x48D1CC },
		{ Color::mediumvioletred,0xC71585 },
		{ Color::midnightblue,0x191970 },
		{ Color::mintcream,0xF5FFFA },
		{ Color::mistyrose,0xFFE4E1 },
		{ Color::moccasin,0xFFE4B5 },
		{ Color::navajowhite,0xFFDEAD },
		{ Color::navy,0x000080 },
		{ Color::oldlace,0xFDF5E6 },
		{ Color::olive,0x808000 },
		{ Color::olivedrab,0x6B8E23 },
		{ Color::orange,0xFFA500 },
		{ Color::orangered,0xFF4500 },
		{ Color::orchid,0xDA70D6 },
		{ Color::palegoldenrod,0xEEE8AA },
		{ Color::palegreen,0x98FB98 },
		{ Color::paleturquoise,0xAFEEEE },
		{ Color::palevioletred,0xDB7093 },
		{ Color::papayawhip,0xFFEFD5 },
		{ Color::peachpuff,0xFFDAB9 },
		{ Color::peru,0xCD853F },
		{ Color::pink,0xFFC0CB },
		{ Color::plum,0xDDA0DD },
		{ Color::powderblue,0xB0E0E6 },
		{ Color::purple,0x800080 },
		{ Color::rebeccapurple,0x663399 },
		{ Color::red,0xFF0000 },
		{ Color::rosybrown,0xBC8F8F },
		{ Color::royalblue,0x4169E1 },
		{ Color::saddlebrown,0x8B4513 },
		{ Color::salmon,0xFA8072 },
		{ Color::sandybrown,0xF4A460 },
		{ Color::seagreen,0x2E8B57 },
		{ Color::seashell,0xFFF5EE },
		{ Color::sienna,0xA0522D },
		{ Color::silver,0xC0C0C0 },
		{ Color::skyblue,0x87CEEB },
		{ Color::slateblue,0x6A5ACD },
		{ Color::slategray,0x708090 },
		{ Color::slategrey,0x708090 },
		{ Color::snow,0xFFFAFA },
		{ Color::springgreen,0x00FF7F },
		{ Color::steelblue,0x4682B4 },
		{ Color::tan,0xD2B48C },
		{ Color::teal,0x008080 },
		{ Color::thistle,0xD8BFD8 },
		{ Color::tomato,0xFF6347 },
		{ Color::turquoise,0x40E0D0 },
		{ Color::violet,0xEE82EE },
		{ Color::wheat,0xF5DEB3 },
		{ Color::white,0xFFFFFF },
		{ Color::whitesmoke,0xF5F5F5 },
		{ Color::yellow,0xFFFF00 },
		{ Color::yellowgreen,0x9ACD32 }
	});

	Color::Color() : m_r(0), m_g(0), m_b(0)
	{
	}

	Color::Color(const byte& r, const byte& g, const byte& b) : m_r(r), m_g(g), m_b(b)
	{
	}

	Color::Color(Color::Name name)
	{
		auto itrFind = g_colors.find(name);
		if (g_colors.end() == itrFind)
		{
			m_r = m_g = m_b = 0;
		}
		else
		{
			m_r = (byte)(itrFind->second / 65536);
			m_g = (byte)((itrFind->second % 65536) / 256);
			m_b = (byte)(itrFind->second % 256);
		}
	}


	const byte& Color::r() const
	{
		return m_r;
	}

	const byte& Color::g() const
	{
		return m_g;
	}

	const byte& Color::b() const
	{
		return m_b;
	}

	float Color::rf() const
	{
		return (float)m_r / 255.0f;
	}

	float Color::gf() const
	{
		return (float)m_g / 255.0f;
	}

	float Color::bf() const
	{
		return (float)m_b / 255.0f;
	}

	Color& Color::set(const byte& r, const byte& g, const byte& b)
	{
		m_r = r;
		m_g = g;
		m_b = b;
		return *this;
	}

	Color& Color::set(const float& r, const float& g, const float& b)
	{
		m_r = (byte)floorf((r * 255.0f) + 0.5f);
		m_g = (byte)floorf((g * 255.0f) + 0.5f);
		m_b = (byte)floorf((b * 255.0f) + 0.5f);
		return *this;
	}
}