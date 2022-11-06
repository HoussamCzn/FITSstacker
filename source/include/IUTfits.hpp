#pragma once

#ifndef __IUT_FITS_H__
#define __IUT_FITS_H__

#include <valarray>
#include <vector>
#include <memory>
#include <string>

namespace CCfits
{
	class FITS;
}

class IUTfits
{
public:

	IUTfits(const IUTfits&) = delete;

	IUTfits(IUTfits&&) = delete;

	static std::valarray<short> readImageData(const std::unique_ptr<CCfits::FITS>& pInfile);

	static void writeFits(const std::string& file_name, const std::unique_ptr<CCfits::FITS>& base, const std::valarray<short>& contents);
	
	static std::valarray<short> meanStack(const std::vector<std::valarray<short>>& list);

	static std::valarray<short> medianStack(const std::vector<std::valarray<short>>& list);

private:

	IUTfits() = default;

	~IUTfits() = default;
};

#endif // !__IUT_FITS_H__