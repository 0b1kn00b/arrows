package arrow.scheduler {
	public class SchedulerType extends enum {
		public static const __isenum : Boolean = true;
		public function SchedulerType( t : String, index : int, p : Array = null ) : void { this.tag = t; this.index = index; this.params = p; }
		public static var simple : SchedulerType = new SchedulerType("simple",0);
		public static var timer : SchedulerType = new SchedulerType("timer",1);
	}
}
