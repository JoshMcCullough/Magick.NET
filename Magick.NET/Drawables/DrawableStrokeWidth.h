//=================================================================================================
// Copyright 2013 Dirk Lemstra <http://magick.codeplex.com/>
//
// Licensed under the ImageMagick License (the "License"); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
//
//   http://www.imagemagick.org/script/license.php
//
// Unless required by applicable law or agreed to in writing, software distributed under the
// License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
// express or implied. See the License for the specific language governing permissions and
// limitations under the License.
//=================================================================================================
#pragma once

#include "Base\DrawableWrapper.h"

namespace ImageMagick
{
	///=============================================================================================
	///<summary>
	/// Encapsulation of the DrawableStrokeWidth object.
	///</summary>
	public ref class DrawableStrokeWidth sealed : DrawableWrapper<Magick::DrawableStrokeWidth>
	{
		//===========================================================================================
	public:
		///==========================================================================================
		///<summary>
		/// Creates a new DrawableStrokeWidth instance.
		///</summary>
		///<param name="width">The width.</param>
		DrawableStrokeWidth(double width);
		///==========================================================================================
		///<summary>
		/// The width.
		///</summary>
		property double Width
		{
			double get()
			{
				return Value->width();
			}
			void set(double value)
			{
				Value->width(value);
			}
		}
		//===========================================================================================
	};
	//==============================================================================================
}