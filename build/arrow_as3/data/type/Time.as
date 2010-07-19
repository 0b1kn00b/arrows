package data.type {
	import haxe.Timer;
	import util.MathUtil;
	import flash.Boot;
	import data.type.TimeFormat;
	public class Time {
		public function Time(timeDifference : * = null,format : data.type.TimeFormat = null) : void { if( !flash.Boot.skip_constructor ) {
			format = (format != null?format:data.type.TimeFormat.millisecond);
			this.doEval = true;
			if(timeDifference != null) {
				this.setValue(timeDifference,format);
			}
		}}
		
		public function setValue(timeDifference : Number,format : data.type.TimeFormat = null) : data.type.Time {
			var $e : enum = (format);
			switch( $e.index ) {
			case 4:
			{
				this.ms = timeDifference * DAY;
			}break;
			case 3:
			{
				this.ms = timeDifference * HOUR;
			}break;
			case 2:
			{
				this.ms = timeDifference * MINUTE;
			}break;
			case 1:
			{
				this.ms = timeDifference * SECOND;
			}break;
			default:{
				this.ms = timeDifference;
			}break;
			}
			this.doEval = true;
			return this;
		}
		
		public function plus(timeDifference : data.type.Time) : data.type.Time {
			return new data.type.Time(this.ms + timeDifference.inMilliSeconds());
		}
		
		public function minus(timeDifference : data.type.Time) : data.type.Time {
			return new data.type.Time(this.ms - timeDifference.inMilliSeconds());
		}
		
		public function getMilliSeconds(round : * = null) : Number {
			if(this.doEval) this.evaluate();
			if(round == null) {
				return this.milliSeconds;
			}
			else {
				return util.MathUtil.floor(this.milliSeconds,round);
			}
		}
		
		public function inMilliSeconds() : Number {
			return this.ms;
		}
		
		public function getSeconds(round : * = null) : Number {
			if(this.doEval) this.evaluate();
			if(round == null) {
				return this.seconds;
			}
			else {
				return util.MathUtil.floor(this.seconds,round);
			}
		}
		
		public function inSeconds() : Number {
			return this.ms / SECOND;
		}
		
		public function getMinutes(round : * = null) : Number {
			if(this.doEval) this.evaluate();
			if(round == null) {
				return this.minutes;
			}
			else {
				return util.MathUtil.floor(this.minutes,round);
			}
		}
		
		public function inMinutes() : Number {
			return this.ms / MINUTE;
		}
		
		public function getHours(round : * = null) : Number {
			if(this.doEval) this.evaluate();
			if(round == null) {
				return this.hours;
			}
			else {
				return util.MathUtil.floor(this.hours,round);
			}
		}
		
		public function inHours() : Number {
			return this.ms / HOUR;
		}
		
		public function getDays(round : * = null) : Number {
			if(this.doEval) this.evaluate();
			if(round == null) {
				return this.days;
			}
			else {
				return util.MathUtil.floor(this.days,round);
			}
		}
		
		public function inDays() : Number {
			return this.ms / DAY;
		}
		
		public function toString() : String {
			return "" + this.getDays(0) + "d " + this.getHours(0) + ":" + this.getMinutes(0) + ":" + this.getSeconds(0) + "." + this.getMilliSeconds(0);
		}
		
		protected function evaluate() : void {
			var negative : int = ((this.ms >= 0)?1:-1);
			var rest : Number = this.ms;
			this.days = rest / DAY;
			rest -= negative * Math.floor(this.days) * DAY;
			this.hours = rest / HOUR;
			rest -= negative * Math.floor(this.hours) * HOUR;
			this.minutes = rest / MINUTE;
			rest -= negative * Math.floor(this.minutes) * MINUTE;
			this.seconds = rest / SECOND;
			rest -= negative * Math.floor(this.seconds) * SECOND;
			this.milliSeconds = rest;
			this.doEval = false;
		}
		
		protected var ms : Number;
		protected var days : Number;
		protected var hours : Number;
		protected var minutes : Number;
		protected var seconds : Number;
		protected var milliSeconds : Number;
		protected var doEval : Boolean;
		static public function fromTimeStamp() : data.type.Time {
			return new data.type.Time(haxe.Timer.stamp(),data.type.TimeFormat.second);
		}
		
		static protected var SECOND : Number = 1000;
		static protected var MINUTE : Number = data.type.Time.SECOND * 60;
		static protected var HOUR : Number = data.type.Time.MINUTE * 60;
		static protected var DAY : Number = data.type.Time.HOUR * 24;
	}
}
