/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, CMGestureManager;

@interface SBMotionGestureController : NSObject {

	NSMutableDictionary* _observersByPriority;
	CMGestureManager* _motionGestureManager;

}
+(id)sharedInstance;
-(void)addGestureObserver:(id)arg1 withPriority:(unsigned long long)arg2 ;
-(void)removeGestureObserver:(id)arg1 ;
-(void)addGestureObserver:(id)arg1 ;
-(void)_removeGestureManager;
-(void)_addGestureObserver:(id)arg1 withPriority:(unsigned long long)arg2 ;
-(void)_updateGestureManager;
-(void)_removeGestureObserver:(id)arg1 ;
-(void)_enumerateObserversByPriority:(/*^block*/id)arg1 ;
-(id)_highestPriorityObservers;
-(void)_addGestureManager;
-(void)_notifyObserversOfGesture:(int)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)_hasObservers;
-(id)_observersForPriority:(unsigned long long)arg1 ;
@end

