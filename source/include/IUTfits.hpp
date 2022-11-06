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

/**
* @brief Class (actually a Singleton) storing methods to manipulate FITS data.
* It makes use of the CCfits library.
*/
class IUTfits
{
public:

	/**
	* @brief Copy constructor. Deleted to avoid instanciation by the user.
	* 
	* @param other: object to copy
	*/
	IUTfits(const IUTfits&) = delete;
	/**
	* @brief Move constructor. Deleted to avoid instanciation by the user.
	* 
	* @param other: object to move
	*/
	IUTfits(IUTfits&&) = delete;
	/**
	* @brief Method which reads the image data from the pHDU of the FITS data.
	* 
	* @param pInfile: pointer to FITS object to read
	* 
	* @return returns an array containing image data extracted from the FITS file
	*/
	static std::valarray<short> readImageData(const std::unique_ptr<CCfits::FITS>& pInfile);
	/**
	* @brief Method which write a new FITS file with a file name provided by the user.
	* It uses the first file among the two or more stacked files to write the amount of
	* naxis and naxes in the header of the file. It also uses a SHORT default bitpix (16).
	* 
	* @param file_name: name of the written FITS file
	* @param base: pointer to first file among the stacked FITS files
	* @param contents: contents of the new image to write
	*/
	static void writeFits(const std::string& file_name, const std::unique_ptr<CCfits::FITS>& base, const std::valarray<short>& contents);
	/**
	* @brief Method which stacks several arrays containing image data.
	* This method will perform a mean stack of the FITS data, meaning that
	* each case from each array will become a list and the mean of this list
	* will be the value inside the written array.
	* 
	* @param list: list of arrays containing FITS data
	* 
	* @return returns an array containing the stacked image data
	*/
	static std::valarray<short> meanStack(const std::vector<std::valarray<short>>& list);
	/**
	* @brief Method which stacks several arrays containing image data.
	* This method will perform a median stack of the FITS data, meaning that
	* each case from each array will become a list and the median of this list
	* will be the value inside the written array.
	*
	* @param list: list of arrays containing FITS data
	* 
	* @return returns an array containing the stacked image data
	*/
	static std::valarray<short> medianStack(const std::vector<std::valarray<short>>& list);

private:

	/**
	* @brief Default constructor. Private to avoid instanciation by the user.
	*/
	IUTfits() = default;
	/**
	* @brief Destructor. It is currently defaulted (using ~IUTfits() = default)
	*/
	~IUTfits() = default;
};

#endif // !__IUT_FITS_H__