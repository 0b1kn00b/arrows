package arrow.combinators;
import arrow.Arrow;
import arrow.ArrowInstance;
import ion.log.Logger;
import ion.log.LogLevel;

import arrow.schedule.ScheduleManager;

class TerminalArrow extends Arrow{
	public function new(){
		super(function (?x:Dynamic,a:ArrowInstance){
#if arrow_debug
			Logger.getInstance().getLog().log("terminate",LogLevel.debug);
#end
			ScheduleManager.getInstance().pending.decrement(a.uuid);
		});
	}
	override function getName(){
		return "TerminalArrow";
	}
}
