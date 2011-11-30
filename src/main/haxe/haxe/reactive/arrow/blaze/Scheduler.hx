package haxe.reactive.arrow.blaze;

import haxe.Timer;
import Prelude;
import PreludeExtensions;
import haxe.data.collections.IterableExtensions;
import haxe.data.collections.ArrayExtensions;

using Prelude;
using PreludeExtensions;
using haxe.data.collections.IterableExtensions;
using haxe.data.collections.ArrayExtensions;

import zen.data.Queue;

import haxe.reactive.arrow.ArrowInstance;
import haxe.reactive.arrow.Viaz;
import haxe.reactive.arrow.Viaz;

import haxe.Timer;

interface Scheduler {
	public	var timeout	: Float;
	private var current	: Arrow<Dynamic,Dynamic>;
	private var queue	: Queue<Arrow<Dynamic,Dynamic>> ;

	private var pending : Hash<ArrowInstance<Dynamic>>;
	
	public function wait():Void;
	public function start():Void;
	public function stop():Void;
	
	public function enqueue(v:Arrow<Dynamic,Dynamic>):Void;	
	
	public function register(v:ArrowInstance<Dynamic>):Void;
	public function unregister(v:ArrowInstance<Dynamic>):Void;
	
	public function cancel(v:ArrowInstance<Dynamic>):Void;
}
