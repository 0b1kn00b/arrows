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
import Viaz
import colhx.TreeNode;

import util.FileSystemUtil;
import neko.FileSystem;

using StringTools;
using Lambda;
using util.StringUtil;

class FileSystemArrow {

	public static function getFileTree(arrow:Viaz, dir:String):TreeNode<String> {
		if ( dir.endsWith(FileSystemUtil.sep()) ) dir = dir.substr( -2);
		var treenode = new TreeNode(dir);
		var contents = FileSystem.readDirectory(dir);
		var dirs = contents.copy().filter(
			function (s:String) {
				return ( FileSystem.isDirectory( dir + FileSystemUtil.sep() + s ) );
			}
		);
		return treenode;
	}
	private static function getDirectory(parent:TreeNode<String>) {
		/*
		var root = parent;
		var dir = "";
		while ( !root.isRoot() ) {	
			dir.prepend(FileSystemUtil.sep() + root.data );
			root = root.parent; 
		}
		dir.prepend(root.data);
		var contents = getDirectory(dir);
		for (item in contents) {
			if ( FileSystem.isDirectory( item ) ) {
				
			}
		}
		*/
	}
}