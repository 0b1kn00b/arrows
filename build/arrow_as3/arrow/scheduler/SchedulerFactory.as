package arrow.scheduler {
	import arrow.scheduler.AbstractScheduler;
	import core.AbstractLocator;
	import arrow.scheduler.SimpleScheduler;
	import arrow.scheduler.TimerScheduler;
	import arrow.scheduler.SchedulerType;
	import flash.Boot;
	public class SchedulerFactory extends core.AbstractLocator {
		public function SchedulerFactory() : void { if( !flash.Boot.skip_constructor ) {
			super();
		}}
		
		static protected var instance : arrow.scheduler.SchedulerFactory;
		static protected var maxMessages : int = 100;
		static public function retrieve(type : arrow.scheduler.SchedulerType) : arrow.scheduler.AbstractScheduler {
			var key : String = Std.string(type);
			if(arrow.scheduler.SchedulerFactory.instance == null) {
				arrow.scheduler.SchedulerFactory.instance = new arrow.scheduler.SchedulerFactory();
			}
			if(!instance.isRegistered(key)) {
				instance.register(key,create(type));
			}
			return instance.locate(key);
		}
		
		static protected function create(type : arrow.scheduler.SchedulerType) : arrow.scheduler.AbstractScheduler {
			var s : arrow.scheduler.AbstractScheduler = null;
			var $e : enum = (type);
			switch( $e.index ) {
			case 0:
			{
				s = new arrow.scheduler.SimpleScheduler(maxMessages);
			}break;
			case 1:
			{
				s = new arrow.scheduler.TimerScheduler(maxMessages);
			}break;
			}
			return s;
		}
		
		static public function getDefault() : arrow.scheduler.AbstractScheduler {
			return retrieve(arrow.scheduler.SchedulerType.timer);
		}
		
	}
}
