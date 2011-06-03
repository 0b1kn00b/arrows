/*
 Copyright (c) <2010> <Laurence Taylor>

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
*/
package arrow.ext;
import Prelude;

import haxe.data.collections.List;
import haxe.util.ObjectExtensions;
import haxe.util.StringExtensions;

import arrow.Arrow;

using arrow.Arrow;
using haxe.util.StringExtensions;
class ReflectArrow {
	
	public static function extractValue(t:Tuple2<String,Dynamic>){
		return Reflect.field(t._2, t._1);
	}
	public static function extractFieldValueTuple(t:Tuple2<String,Dynamic>) {
		return Tuple2.create( t._1 , extractValue(t) );
	}
	public static function extractFieldValueSourceTuple(t:Tuple2 < String, Dynamic > ) {
		return extractFieldValueTuple(t).entuple(t._2);
	}
}
