/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIFeedbackGenerator.h>
#import <UIKit/UIFeedbackGeneratorUserInteractionDriven.h>

@protocol _UIFeedbackContinuousPlayable;
@class _UIFeedback, _UIFeedbackDragBehaviorConfiguration;

@interface _UIFeedbackDragBehavior : UIFeedbackGenerator <UIFeedbackGeneratorUserInteractionDriven> {

	long long _state;
	_UIFeedback*<_UIFeedbackContinuousPlayable> _playingContinuousFeedback;

}

@property (getter=_dragConfiguration,nonatomic,readonly) _UIFeedbackDragBehaviorConfiguration * dragConfiguration; 
@property (assign,setter=_setState:,getter=_state,nonatomic) long long state;                                                                                                            //@synthesize state=_state - In the implementation block
@property (setter=_setPlayingContinuousFeedback:,getter=_playingContinuousFeedback,nonatomic,retain) _UIFeedback*<_UIFeedbackContinuousPlayable> playingContinuousFeedback;              //@synthesize playingContinuousFeedback=_playingContinuousFeedback - In the implementation block
+(Class)_configurationClass;
+(id)retargetBehaviorWithStyle:(long long)arg1 coordinateSpace:(id)arg2 ;
+(id)dragBehaviorWithStyle:(long long)arg1 coordinateSpace:(id)arg2 ;
+(id)dragBehaviorWithCoordinateSpace:(id)arg1 configuration:(id)arg2 ;
-(void)userInteractionEnded;
-(void)userInteractionStarted;
-(long long)_state;
-(void)targetUpdated;
-(void)positionUpdated;
-(void)userInteractionCancelled;
-(id)_stats_key;
-(id)_playingContinuousFeedback;
-(void)_setState:(long long)arg1 ;
-(void)_stopPlayingContinuousFeedback;
-(id)_dragConfiguration;
-(void)_startPlayingContinuousFeedback;
-(void)_startPlayingContinuousFeedbackNow;
-(void)_setPlayingContinuousFeedback:(id)arg1 ;
-(void)dropTargetUpdated;
-(void)snappedToFinalPosition;
@end
