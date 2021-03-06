package haxe.reactive.arrow;

/**
 * ...
 * @author 0b1kn00b
 */
import Prelude;

import haxe.reactive.arrow.verb.Progress;

interface Arrow<P,R> {
	
	//TODO refactor
	public function execute(x:P, a:ArrowInstance<Dynamic>)		: Void;
	public var params 																				: Int;
	public var instance 																			: ArrowInstance<Dynamic>;
	public var param																					: P;
	
	#if !cpp
	public dynamic function predicate():Bool;
	#else
	public var predicate : Void -> Bool;
	#end
	
	public function destroy(instance:ArrowInstance<Dynamic>)	: Void;
	public function invoke():Void;
	public var active:Bool;
	
	
	public function toString():String;
	public function run(?v:P):Progress;
	public function start():Void;
	
	
	/**
	* Composititon combinator, returns an Viaz g(f(x))
	* @param f, a function or a FunctionThunk
	* 
	* compose, next, >>>
	*/
	public function then<R1>(r:Arrow<R,R1>):Arrow<P,R1>;
	
	/**
	* Product combinator, returns an Viaz Tuple2(f(x._1),g(x._2)))
	* pair, ***
	*/
	public function pair<P2,R2>(r:Arrow<P2,R2>):Arrow<Tuple2<P,P2>,Tuple2<R,R2>>;
	
	/**
	* Fanout combinator, entuples input reference and runs as Product.
	* split &&&
	*/
	public function split<R2>(r:Arrow<P,R2>):Arrow<P,Tuple2<R,R2>>;
	
	/**
	* Equivalent to identity().split(f).then(g);
	*/
	public function bind<A0R>(r:Arrow<Tuple2<P,R>,A0R>):Arrow<P,A0R>;
	
	/**
	* Join combinator.
	* Equivalent to f.then(Viaz.identity().fanout(g))
	*/
	public function join<A1R>(joinR:Arrow<R,A1R>):Arrow<P,Tuple2<R,A1R>> ;
	
	/*
	* Looping combinator.
	*/
	public function loop():Arrow<P,R>;
	
	
	public function right():Arrow<Either<P,R>,Either<P,R>>;
	public function left():Arrow<Either<P,R>,Either<P,R>>;
	
	/**
	* First combinator.
	* Applies Arrow to first element of Tuple2 input.
	*/
	public function first<P2>():Arrow<Tuple2<P,P2>,Tuple2<R,P2>>;
	
	/**
	* Second combinator
	* Applies Arrow to second element of Tuple2 input.
	*/
	public function second<P2>():Arrow<Tuple2<P,P2>,Tuple2<P,R>>;

	public function front<R1>(a2:Arrow<P,R1>):Arrow<P,Either<R1,R>> ;
	
	public function setInfo(str:String):Arrow<P,R>;
	public function getName():String;
}